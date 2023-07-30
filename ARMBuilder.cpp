#include <iomanip>
#include <regex>
#include <utility>
#include <vector>
#include "ARMBuilder.h"



std::set<string> Registers{
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9"};   // 寄存器表，
                                                                   // r11和r12用于特殊处理就不用了
std::map<std::string, int> Reginum{
    {"r0", 0},
    {"r1", 0},
    {"r2", 0},
    {"r3", 0},
    {"r4", 0},
    {"r5", 0},
    {"r6", 0},
    {"r7", 0},
    {"r8", 0},
    {"r9", 0},
};
std::set<string>                   rg_push;
std::map<std::string, std::string> Id_Registers;   // 记录临时变量和寄存器的对应关系
std::map<std::string, std::string> GlobalId_Label;   // 记录全局变量和分配的标签的关系
std::map<std::string, std::string> TimeToRelease;   // 第一个元素在第二个元素出现时释放
std::map<std::string, std::vector<std::string>> Greater;   // 第一个元素出现时 释放后面的元素
std::map<std::string, int>      LocalId_Offset;   // 记录本地变量在栈帧中的偏移量
std::map<string, string>        bool_flag;        // 记录比较结果
std::vector<std::string>        local_ident;      // 记录临时变量的出现顺序
std::unordered_set<std::string> local_unique;     // 记录本地变量的唯一性
std::vector<string>             args;


int GlobalIdNum = 0;   // 全局变量的数量
int subSpace    = 0;   // 需要为栈帧分配的空间
int retSpace    = 0;


void ARMGen::ARMBuilder::globalIdentBuilder(llvmirParser::GlobalDefContext* context)
{
    /*
     * 返回一个变量的构造
     */
    std::string IdName = context->GlobalIdent()->getText().erase(0, 1);
    // 填充内容
    auto constant = context->constant();

    string section;
    if (constant->intConst() != nullptr) {
        string val = intValue(constant->getText());
        if (context->immutable()->getText() == "global") {
            if (val == "0")
                section = ".bss";
            else
                section = ".data";
        } else
            section = ".section\t.rodata,\"a\",%progbits";

        auto*                      long_id = new Long(IdName, val, section);
        std::shared_ptr<TopEntity> long_v  = std::shared_ptr<TopEntity>(long_id);
        Tops.push_back(long_v);
    } else if (constant->floatConst() != nullptr) {
        string val = floatValue(constant->getText());
        if (val == "0x0")
            section = ".bss";
        else
            section = ".data";
        val                                = floatValue(val);
        auto*                      long_id = new Long(IdName, val, section);
        std::shared_ptr<TopEntity> long_v  = std::shared_ptr<TopEntity>(long_id);
        Tops.push_back(long_v);
        //        armCode << Tab << ".size" << Tab << IdName << ", 4" << NewLine;
    } else if (constant->arrayConst()!= nullptr) {
        std::vector<string> vals;
        section                             = ".data";
        vals                                = arrayValue(constant->arrayConst());
        auto*                      array_id = new Array(IdName, vals, section);
        std::shared_ptr<TopEntity> array_v  = std::shared_ptr<TopEntity>(array_id);
        Tops.push_back(array_v);
    } else if (constant->zeroInitializerConst()!= nullptr) {
        std::vector<string> vals;
        section = ".bss";
        if (context->type()->arrayType() != nullptr) {
            int  space = LONG_SIZE;
            auto type  = context->type()->arrayType();
            while (type->type()->arrayType() != nullptr) {
                space *= std::stoi(type->IntLit()->getText());
                type = type->type()->arrayType();
            }
            space *= std::stoi(type->IntLit()->getText());
            vals.emplace_back("zero\t" + std::to_string(space));
            auto array_v = std::make_shared<Array>(IdName, vals, section);
            Tops.push_back(array_v);
        } else {
            string val   = "0";
            auto   long_ = std::make_shared<Long>(IdName, val, section);
            Tops.push_back(long_);
        }
    }
}

void ARMGen::ARMBuilder::funcHeaderBuilder(llvmirParser::FuncHeaderContext* context)
{
    std::stringstream armCode;
    std::string       FuncName = context->GlobalIdent()->getText().erase(0, 1);
    ARMGen::Function  Function(FuncName);
    auto              function = std::make_shared<ARMGen::Function>(FuncName);
    Tops.push_back(function);
}
void ARMGen::ARMBuilder::labelBuilder(const std::string& context)
{
    auto func  = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    auto label = std::make_shared<Label>(func->getname() + context);
    func->addInst(label);
}

void ARMGen::ARMBuilder::allocaBuilder(
    const std::string& LocalIdent, llvmirParser::TypeContext* type
)
{
    auto func = std::dynamic_pointer_cast<Function>(Tops.back());
    if (LocalIdent[0] == '@') {
        if (GlobalId_Label.find(LocalIdent) != GlobalId_Label.end()) {
            return;
        } else {
            GlobalIdNum++;
            GlobalId_Label.insert(
                std::make_pair(LocalIdent, ".ZYNB" + func->getname() + std::to_string(GlobalIdNum))
            );
        }
    }

    if (type != nullptr) {
        if (type->arrayType() != nullptr) {
            int  space = LONG_SIZE;
            auto array = type->arrayType();
            while (array->type()->arrayType() != nullptr) {
                space *= std::stoi(array->IntLit()->getText());
                array = array->type()->arrayType();
            }
            space *= std::stoi(array->IntLit()->getText());
            subSpace += space;
        } else
            subSpace += LONG_SIZE;
    } else
        subSpace += LONG_SIZE;
    LocalId_Offset.insert(std::make_pair(LocalIdent, subSpace));
}

void ARMGen::ARMBuilder::allocaAllBuilder()
{
    auto func = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    if (!rg_push.empty()) {
        std::stringstream ss;
        for (auto it = rg_push.begin(); it != rg_push.end(); it++) {
            if (it != rg_push.begin()) { ss << ", "; }
            ss << *it;
        }
        auto push_ = std::make_shared<PushSen>(ss.str());
        func->addInst(push_);
    }
    if (subSpace) {
        for (auto& x : LocalId_Offset) { x.second = subSpace - x.second; }
        auto sub = std::make_shared<SubSen>("sp", "sp", HASHTAG + std::to_string(subSpace));
        func->addInst(sub);

        retSpace = subSpace;
        subSpace = 0;
    }
    if (!GlobalId_Label.empty()) {
        for (auto x : GlobalId_Label) {
            auto ldr_ = std::make_shared<LdrSen>("r12", x.second);
            auto str_ = std::make_shared<StrSen>(makeSp(LocalId_Offset[x.first]), "r12");
            func->addInst(ldr_);
            func->addInst(str_);
        }
    }
}

void ARMGen::ARMBuilder::callRegister(llvmirParser::CallInstContext* context, string local_)
{
    int num_ = 0;
    for (auto x : context->args()->arg()) {
        if (x->value()->LocalIdent() != nullptr) {
            args.push_back(x->value()->getText());
            string reg_ = "r" + std::to_string(num_);
            Id_Registers.insert(std::make_pair(x->value()->getText(), reg_));
        }
        num_++;
    }
}



void ARMGen::ARMBuilder::loadBuilder(std::string Rd, std::string Rn)
{
    auto func = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    // 若需要用到全局变量
    if (Rn[0] == '@') {
        auto ldr_1 = std::make_shared<LdrSen>("r12", "[" + makeSp(LocalId_Offset[Rn]) + "]");
        func->addInst(ldr_1);
        auto ldr_3 = std::make_shared<LdrSen>(getRegister(Rd), "[r12]");
        func->addInst(ldr_3);
        return;
    } else {
        auto ldr_2 = std::make_shared<LdrSen>(getRegister(Rd), "[" + getRegister(Rn) + "]");
        func->addInst(ldr_2);
    }
}
void ARMGen::ARMBuilder::addBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, r1, r2;
    r2        = getRegister(std::move(Rn2));
    r1        = getRegister(std::move(Rn1));
    r0        = getRegister(Rd);
    auto add_ = std::make_shared<AddSen>(r0, r1, r2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(add_);
}

void ARMGen::ARMBuilder::faddBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, s0, s2;
    s2         = getRegister(std::move(Rn2));
    s0         = getRegister(std::move(Rn1));
    r0         = getRegister(Rd);
    auto vadd_ = std::make_shared<VaddSen>(r0, s0, s2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(vadd_);
}

void ARMGen::ARMBuilder::subBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, r1, r2;
    r2        = getRegister(std::move(Rn2));
    r1        = getRegister(std::move(Rn1));
    r0        = getRegister(Rd);
    auto sub_ = std::make_shared<SubSen>(r0, r1, r2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(sub_);
}

void ARMGen::ARMBuilder::fsubBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, s0, s2;
    s2         = getRegister(std::move(Rn2));
    s0         = getRegister(std::move(Rn1));
    r0         = getRegister(Rd);
    auto vsub_ = std::make_shared<VsubSen>(r0, s0, s2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(vsub_);
}

void ARMGen::ARMBuilder::mulBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, r1, r2;
    r2        = getRegister(std::move(Rn2));
    r1        = getRegister(std::move(Rn1));
    r0        = getRegister(Rd);
    auto mul_ = std::make_shared<MulSen>(r0, r1, r2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(mul_);
}

void ARMGen::ARMBuilder::fmulBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, s0, s2;
    s2         = getRegister(std::move(Rn2));
    s0         = getRegister(std::move(Rn1));
    r0         = getRegister(Rd);
    auto vmul_ = std::make_shared<VmulSen>(r0, s0, s2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(vmul_);
}

void ARMGen::ARMBuilder::sdivBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, r1, r2;
    r2         = getRegister(std::move(Rn2));
    r1         = getRegister(std::move(Rn1));
    r0         = getRegister(Rd);
    auto sdiv_ = std::make_shared<SdivSen>(r0, r1, r2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(sdiv_);
}

void ARMGen::ARMBuilder::fdivBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, s0, s2;
    s2         = getRegister(std::move(Rn2));
    s0         = getRegister(std::move(Rn1));
    r0         = getRegister(Rd);
    auto vdiv_ = std::make_shared<VdivSen>(r0, s0, s2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(vdiv_);
}

void ARMGen::ARMBuilder::sremBuilder(const std::string& Rd, std::string Rn1, std::string Rn2)
{
    std::string r0, r1, r2;
    r2         = getRegister(std::move(Rn2));
    r1         = getRegister(std::move(Rn1));
    r0         = getRegister(Rd);
    auto srem_ = std::make_shared<SremSen>(r0, r1, r2);
    std::dynamic_pointer_cast<ARMGen::Function>(Tops.back())->addInst(srem_);
}

void ARMGen::ARMBuilder::icmpMapBuilder(const string& bool_, const string& flag_)
{
    bool_flag.insert(std::make_pair(bool_, flag_));
}

void ARMGen::ARMBuilder::icmpBuilder(string& rn1, string& rn2)
{
    auto   func = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    string _rn1, _rn2;
    if (rn1[0] != '%' && rn2[0] != '%') {
        _rn1      = getRegister(rn1);
        auto mov_ = std::make_shared<MovSen>("r12", HASHTAG + rn2);
        _rn2      = "r12";
        func->addInst(mov_);
    } else {
        _rn1 = getRegister(rn1);
        _rn2 = getRegister(rn2);
    }


    auto cmp_ = std::make_shared<CmpSen>(_rn1, _rn2);
    func->addInst(cmp_);
}

void ARMGen::ARMBuilder::storeBuilder(std::string Rn, std::string Rd)
{
    auto func = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    // 目标寄存器是否是全局变量
    if (Rd[0] == '@') {
        // 加一句把标签加进来
        auto ldr_1 = std::make_shared<LdrSen>("r12", "[" + makeSp(LocalId_Offset[Rd]) + "]");
        func->addInst(ldr_1);
        auto str_ = std::make_shared<StrSen>("r12", getRegister(Rn));
        func->addInst(str_);
    } else {
        auto str_ = std::make_shared<StrSen>(getRegister(Rd), getRegister(Rn));
        func->addInst(str_);
    }
}



std::string ARMGen::ARMBuilder::getRegister(const std::string Id)
{
    auto func = std::dynamic_pointer_cast<Function>(Tops.back());
    if (LocalId_Offset.find(Id) != LocalId_Offset.end()) {
        if (LocalId_Offset[Id]) { return "sp, #" + std::to_string(LocalId_Offset[Id]); }
        return "sp";
    }
    if (Id[0] != '@' && Id[0] != '%') {
            int num_ = std::stoi(Id);
            if (num_ >= 0) {
            local_unique.insert(Id);
            auto mov_ = std::make_shared<MovSen>("r11", HASHTAG + Id);
            func->addInst(mov_);
            } else {
            local_unique.insert(Id);
            string id_  = std::to_string(-1 - num_);
            auto   mvn_ = std::make_shared<MvnSen>("r11", HASHTAG + id_);
            func->addInst(mvn_);
            }
            return "r11";
    }
    return Id_Registers[Id];
}

std::string ARMGen::ARMBuilder::makeSp(int offset)
{
    if (offset) return "sp, #" + std::to_string(offset);
    return "sp";
}

std::vector<string> ARMGen::ARMBuilder::arrayValue(llvmirParser::ArrayConstContext* context)
{
    std::vector<string> vals;
    for (auto& x : context->typeConst()) {
        if (x->constant()->arrayConst() != nullptr) {
            for (auto& y : arrayValue(x->constant()->arrayConst())) { vals.push_back(y); }
        } else if (x->constant()->intConst() != nullptr) {
            vals.push_back(intValue(x->constant()->getText()));
        } else if (x->constant()->floatConst() != nullptr) {
            vals.push_back(floatValue(x->constant()->getText()));
        }
        else if (x->constant()->zeroInitializerConst()!= nullptr){
            vals.push_back(zeroValue(x->concreteType()->arrayType()));
        }
    }
    return vals;
}

void ARMGen::ARMBuilder::fnEnd()
{
    auto func_ = std::dynamic_pointer_cast<Function>(Tops.back());
    if (GlobalIdNum) {
        GlobalIdNum = 0;
        for (auto x : GlobalId_Label) {
            std::string IdName = x.first;
            auto        label_ = std::make_shared<Label>(x.second.erase(0, 1) + ":");
            func_->addInst(label_);
            auto global_id = std::make_shared<GlobalId>(x.first);
            func_->addInst(global_id);
        }
        GlobalId_Label.clear();
    }
    // 将寄存器复位，防止出现r0一直被占用的情况
    Registers.clear();
    for (int i = 0; i < 10; i++) { Registers.insert("r" + std::to_string(i)); }
    for (auto& x : Reginum) { x.second = 0; }


    Greater.clear();
    Id_Registers.clear();
    LocalId_Offset.clear();
    local_ident.clear();
    local_unique.clear();
    GlobalId_Label.clear();
    retSpace = 0;
}
void ARMGen::ARMBuilder::retBuilder(llvmirParser::RetTermContext* context)
{
    auto func_ptr = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    if (context->value() != nullptr) {
        // 先看是否返回的是一个一个一个常数啊
        if (context->value()->constant() != nullptr) {
            // 是的话还要将其移进r0
            auto mov_1 = std::make_shared<MovSen>("r0", HASHTAG + context->value()->getText());
            func_ptr->addInst(mov_1);
        }
    }

    if (retSpace) {
        // 若是之前有改变过sp，则要回退
        auto add_ = std::make_shared<AddSen>("sp", "sp", HASHTAG + std::to_string(retSpace));
        func_ptr->addInst(add_);
    }
    if (!rg_push.empty()) {
        std::stringstream ss;
        for (auto it = rg_push.begin(); it != rg_push.end(); it++) {
            if (it != rg_push.begin()) { ss << ", "; }
            ss << *it;
        }
        auto pop_ = std::make_shared<PopSen>(ss.str());
        func_ptr->addInst(pop_);
        rg_push.clear();
    }


    // 最后将lr移回pc
    auto mov_2 = std::make_shared<MovSen>("pc", "lr");
    func_ptr->addInst(mov_2);
    // 将最后一个临时变量释放掉
    //    removeRegister(context->value()->getText());
    // 清除所有相关的map
}
void ARMGen::ARMBuilder::brBuilder(llvmirParser::BrTermContext* context)
{
    auto func  = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    auto label = context->label()->LocalIdent()->getText().erase(0, 1);
    auto b_    = std::make_shared<BSen>(func->getname() + label);
    func->addInst(b_);
}

void ARMGen::ARMBuilder::condBrBuilder(string bool_, string label1, string label2)
{
    auto func = std::dynamic_pointer_cast<Function>(Tops.back());
    if (bool_flag[bool_] == "sgt") {
        auto bgt_ = std::make_shared<BgtSen>(func->getname() + label1.erase(0, 1));
        func->addInst(bgt_);
    }
    if (bool_flag[bool_] == "sge") {
        auto bge_ = std::make_shared<BgeSen>(func->getname() + label1.erase(0, 1));
        func->addInst(bge_);
    }
    if (bool_flag[bool_] == "slt") {
        auto blt_ = std::make_shared<BltSen>(func->getname() + label1.erase(0, 1));
        func->addInst(blt_);
    }
    if (bool_flag[bool_] == "sle") {
        auto ble_ = std::make_shared<BleSen>(func->getname() + label1.erase(0, 1));
        func->addInst(ble_);
    }
    if (bool_flag[bool_] == "eq") {
        auto beq_ = std::make_shared<BeqSen>(func->getname() + label1.erase(0, 1));
        func->addInst(beq_);
    }
    if (bool_flag[bool_] == "ne") {
        auto bne_ = std::make_shared<BneSen>(func->getname() + label1.erase(0, 1));
        func->addInst(bne_);
    }
    auto b_ = std::make_shared<BSen>(func->getname() + label2.erase(0, 1));
    func->addInst(b_);
}

std::string ARMGen::ARMBuilder::intValue(const string& context)
{
    std::stringstream armCode;
    uint32_t          val = std::stoi(context);
    armCode << val;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::floatValue(const string& context)
{
    std::stringstream armCode;
    std::stringstream hex;
    hex << std::hex << context;
    uint64_t float64;
    hex >> float64;
    auto  float32 = static_cast<float>(*reinterpret_cast<double*>(&float64));
    auto* float10 = reinterpret_cast<uint32_t*>(&float32);
    armCode << *float10;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::zeroValue(llvmirParser::ArrayTypeContext* context)
{
    std::stringstream armCode;
    int               space = LONG_SIZE;
    auto              type  = context;
    while (type->type()->arrayType() != nullptr) {
        space *= std::stoi(type->IntLit()->getText());
        type = type->type()->arrayType();
    }
    space *= std::stoi(type->IntLit()->getText());
    armCode << "zero" << Tab << space;
    return armCode.str();
}
void ARMGen::ARMBuilder::getBuilder(
    std::string                                  LocalId,
    std::vector<llvmirParser::TypeValueContext*> typeValue,
    llvmirParser::TypeContext*                   type
)
{
    auto Rn    = typeValue[0]->value()->getText();
    auto func_ = std::dynamic_pointer_cast<Function>(Tops.back());

    std::map<std::string, int> meme;
    int                        offset = 0;
    int                        num    = 1;
    // 先处理一下里面的变量和offset
    while (true) {
        if (num < typeValue.size()) {
            if (typeValue[num]->value()->constant() != nullptr) {
                offset += std::stoi(typeValue[num]->value()->getText());
            } else {
                meme.insert(std::make_pair(typeValue[num]->value()->getText(), LONG_SIZE));
            }
            num++;
        }
        int lit;
        if (type->arrayType() != nullptr) {
            lit  = std::stoi(type->arrayType()->IntLit()->getText());
            type = type->arrayType()->type();
            for (auto& x : meme) { x.second = x.second * lit; }
            offset *= lit;
        } else {
            offset *= LONG_SIZE;
            break;
        }
    }

    // 检查是否为全局变量，是的话要给一个对应的寄存器，我们人工设定为r12
    if (Rn[0] != '@') {
        if (LocalId_Offset.find(Rn) != LocalId_Offset.end()) {
            offset     = offset + LocalId_Offset[Rn];
            auto add_1 = std::make_shared<AddSen>("r10", "sp", HASHTAG + std::to_string(offset));
            func_->addInst(add_1);
        } else {
            auto add_ = std::make_shared<AddSen>("r10", getRegister(Rn), "#0");
            func_->addInst(add_);
        }


    } else {
        auto ldr_1 = std::make_shared<LdrSen>("r12", "[" + makeSp(LocalId_Offset[Rn]) + "]");
        auto add_1 = std::make_shared<AddSen>("r10", "r12", HASHTAG + std::to_string(offset));
        func_->addInst(ldr_1);
        func_->addInst(add_1);
    }

    if (!meme.empty()) {
        for (auto& x : meme) {
            if (x.first[0] == '@') {
                auto ldr_1 =
                    std::make_shared<LdrSen>("r12", "[" + makeSp(LocalId_Offset[x.first]) + "]");
                auto ldr_2 = std::make_shared<LdrSen>("r12", "r12");
                auto mov_  = std::make_shared<MovSen>("r11", HASHTAG + std::to_string(x.second));
                auto mla_  = std::make_shared<MlaSen>("r10", "r11", "r12", "r10");
                func_->addInst(ldr_1);
                func_->addInst(ldr_2);
                func_->addInst(mov_);
                func_->addInst(mla_);
            } else {
                auto mov_ = std::make_shared<MovSen>("r11", HASHTAG + std::to_string(x.second));
                auto mla_ = std::make_shared<MlaSen>("r10", "r11", getRegister(x.first), "r10");
                func_->addInst(mov_);
                func_->addInst(mla_);
            }
        }
    }

    auto add_ = std::make_shared<AddSen>(getRegister(LocalId), "r10", "#0");
    func_->addInst(add_);
}




void ARMGen::ARMBuilder::callBuilder(llvmirParser::CallInstContext* context, string local_)
{
    int  num_     = 0;
    auto func     = std::dynamic_pointer_cast<Function>(Tops.back());
    auto funcName = context->value()->getText().erase(0, 1);
    if (context->args() != nullptr) {
        for (auto x : context->args()->arg()) {
            if (x->value()->getText()[0] != '%') {
                auto mov_ = std::make_shared<MovSen>(
                    "r" + std::to_string(num_), HASHTAG + x->value()->getText()
                );
                func->addInst(mov_);
            }
            num_++;
        }
    }
    auto bl_ = std::make_shared<BlSen>(funcName);
    func->addInst(bl_);
    if (!local_.empty()) {
        string rd = getRegister(local_);
        if (rd != "r0") {
            auto mov_1 = std::make_shared<MovSen>(rd, "r0");
            func->addInst(mov_1);
        }
    }
}

void ARMGen::ARMBuilder::memsetBuilder(string start_, int space_)
{
    auto func_ = std::dynamic_pointer_cast<ARMGen::Function>(Tops.back());
    if (local_unique.find("0") == local_unique.end()) {
        local_unique.insert("0");
        auto mov_ = std::make_shared<MovSen>(getRegister("0"), "#0");
        func_->addInst(mov_);
    }
    for (int i = 0; i < space_ / LONG_SIZE; ++i) {
        auto str_ = std::make_shared<StrSen>(
            makeSp(LocalId_Offset[start_] + LONG_SIZE * i), getRegister("0")
        );
        func_->addInst(str_);
    }
}

void ARMGen::ARMBuilder::zextBuilder(string rd_, string rn_)
{
    auto func = std::dynamic_pointer_cast<Function>(Tops.back());
    if (bool_flag[rn_] == "sge") {
        auto mov_1 = std::make_shared<MovgeSen>(getRegister(rd_), "#1");
        auto mov_2 = std::make_shared<MovltSen>(getRegister(rd_), "#0");
        func->addInst(mov_1);
        func->addInst(mov_2);
    }
    if (bool_flag[rn_] == "sgt") {
        auto mov_1 = std::make_shared<MovgtSen>(getRegister(rd_), "#1");
        auto mov_2 = std::make_shared<MovleSen>(getRegister(rd_), "#0");
        func->addInst(mov_1);
        func->addInst(mov_2);
    }
    if (bool_flag[rn_] == "sle") {
        auto mov_1 = std::make_shared<MovleSen>(getRegister(rd_), "#1");
        auto mov_2 = std::make_shared<MovgtSen>(getRegister(rd_), "#0");
        func->addInst(mov_1);
        func->addInst(mov_2);
    }
    if (bool_flag[rn_] == "slt") {
        auto mov_1 = std::make_shared<MovltSen>(getRegister(rd_), "#1");
        auto mov_2 = std::make_shared<MovgeSen>(getRegister(rd_), "#0");
        func->addInst(mov_1);
        func->addInst(mov_2);
    }
    if (bool_flag[rn_] == "eq") {
        auto mov_1 = std::make_shared<MoveqSen>(getRegister(rd_), "#1");
        auto mov_2 = std::make_shared<MovneSen>(getRegister(rd_), "#0");
        func->addInst(mov_1);
        func->addInst(mov_2);
    }
    if (bool_flag[rn_] == "ne") {
        auto mov_1 = std::make_shared<MovneSen>(getRegister(rd_), "#1");
        auto mov_2 = std::make_shared<MoveqSen>(getRegister(rd_), "#0");
        func->addInst(mov_1);
        func->addInst(mov_2);
    }
}


void ARMGen::ARMBuilder::push_rg(string rg)
{
    rg_push.insert(rg);
}

void ARMGen::ARMBuilder::mapInsert(std::string Rd, const std::string& Rn)
{
    if (!Rn.empty()) { TimeToRelease[Rn] = Rd; }
    //         std::cout<<Rn << TimeToRelease[Rn] << NewLine;
}
void ARMGen::ARMBuilder::release(const std::string& Rg)
{
    auto finder = Greater.find(Rg);
    if (finder != Greater.end()) {
        for (const auto& x : Greater[Rg]) { removeRegister(x); }
        //        Greater.erase(finder);
    }
}
void ARMGen::ARMBuilder::makeMapGreatAgain()
{
    for (auto& it : TimeToRelease) { Greater[it.second].push_back(it.first); }

    std::vector<string> betterLocal;

    // 现在要处理一下localid表
    if (!args.empty()) {
        std::map<string, int> localnum;
        int                   num = 0;
        for (auto x : local_ident) {
            localnum.insert(std::make_pair(x, num));
            num++;
        }

        // 先处理一下重复的部分
        auto j = local_ident.begin();
        for (auto& arg : args) {
            while (arg != *j) { j++; }
            local_ident.erase(j);
        }
        auto it  = args.begin();
        auto it1 = local_ident.begin();
        while (it1 != local_ident.end()) {
            if (it == args.end()) {
                betterLocal.push_back(*it1);
                it1++;
                continue;
            }
            if (LocalId_Offset.find(*it1) != LocalId_Offset.end()) {
                betterLocal.push_back(*it1);
                it1++;
                continue;
            }

            string r1 = TimeToRelease[*it1];
            string r2 = *it;
            //                    std::cout<<r1 << " " << r2<<NewLine;
            if (r1.empty()) {
                betterLocal.push_back(*it);
                it++;
                continue;
            }
            if (localnum[r1] > localnum[r2]) {
                betterLocal.push_back(*it);
                it++;
            } else {
                betterLocal.push_back(*it1);
                it1++;
            }
        }
    } else
        betterLocal = local_ident;
    args.clear();

    TimeToRelease.clear();
    for (auto& x : betterLocal) {
        std::cout << x << NewLine;
        if (LocalId_Offset.find(x) != LocalId_Offset.end()) {
            release(x);
            continue;
        }
        if (Id_Registers.find(x) != Id_Registers.end()) {
            // todo
            release(x);
            auto it = Registers.begin();
            //            std::cout<< *it <<NewLine;
            while (*it != Id_Registers[x] && it != Registers.end()) { it++; }
            if (it != Registers.end()) { Registers.erase(it); }
            Reginum[Id_Registers[x]]++;
            //            std::cout<< *Registers.begin() <<NewLine;

            continue;
        } else {
            release(x);
            Id_Registers.insert(std::make_pair(x, *Registers.begin()));
            Reginum[Id_Registers[x]]++;
            //            std::cout <<x<<" "<< *Registers.begin() << NewLine;
            Registers.erase(Registers.begin());
        }
    }
    // 反复利用unique
    local_unique.clear();
}

void ARMGen::ARMBuilder::removeRegister(const std::string& Id)
{
    if (Id_Registers.find(Id) != Id_Registers.end()) {
        Reginum[Id_Registers[Id]]--;
        if (!Reginum[Id_Registers[Id]]) { Registers.insert(Id_Registers[Id]); }
    }
}

string ARMGen::ARMBuilder::toString()
{
    std::stringstream ss;
    ss << "\t.text\n";
    ss << "\t.eabi_attribute 28, 1\n"
          "\t.syntax unified\n"
          "\t.eabi_attribute\t67, \"2.09\"\t@ Tag_conformance\n"
          "\t.eabi_attribute\t6, 1\t@ Tag_CPU_arch\n"
          "\t.eabi_attribute\t8, 1\t@ Tag_ARM_ISA_use\n"
          "\t.fpu\tneon\n"
          "\t.eabi_attribute\t34, 1\t@ Tag_CPU_unaligned_access\n"
          "\t.eabi_attribute\t17, 1\t@ Tag_ABI_PCS_GOT_use\n"
          "\t.eabi_attribute\t20, 1\t@ Tag_ABI_FP_denormal\n"
          "\t.eabi_attribute\t21, 1\t@ Tag_ABI_FP_exceptions\n"
          "\t.eabi_attribute\t23, 3\t@ Tag_ABI_FP_number_model\n"
          "\t.eabi_attribute\t24, 1\t@ Tag_ABI_align_needed\n"
          "\t.eabi_attribute\t25, 1\t@ Tag_ABI_align_preserved\n"
          "\t.eabi_attribute\t38, 1\t@ Tag_ABI_FP_16bit_format\n"
          "\t.eabi_attribute\t14, 0\t@ Tag_ABI_PCS_R9_use\n"
          "\t.arch\tarmv7ve\n";
    for (const auto& x : Tops) { ss << x->toString(); }
    ss << "\t.section\t\".note.GNU-stack\",\"\",%progbits\n";
    ss << NewLine;
    return ss.str();
}
void ARMGen::ARMBuilder::idInsert(std::string id_)
{
    if (local_unique.find(id_) == local_unique.end()) {
        local_unique.insert(id_);
        local_ident.push_back(id_);
        //                std::cout << id_ <<  NewLine;
    }
}
void ARMGen::ARMBuilder::getCheck(std::string LocalId)
{
    LocalId_Offset[LocalId] = 0;
}
void ARMGen::ARMBuilder::bitcastBuilder(string Rd, string Rn)
{
    LocalId_Offset[Rd] = LocalId_Offset[Rn];
}

