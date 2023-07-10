#include <iomanip>
#include "ARMBuilder.h"

//std::string Registers[] = { "r0", "r1", "r2", "r3", "r4", "r5", "r6",  "r7", "r8", "r9", "r10", "r11", "r12", "sp", "lr", "pc"};
std::string Tab = "\t";
std::string NewLine = "\n";
std::map<std::string,std::string> Id_Registers;
std::map<std::string,std::string> GlobalId_Label;
std::map<std::string,int>        LocalId_Offset;
int GlobalIdNum=0;
int subSpace = 0;
int retSpace = 0;

ARMGen::ARMBuilder::ARMBuilder() = default;

std::string ARMGen::ARMBuilder::registerMapBuilder()
{
    /*
     * 返回.s最开头的一些注册表，比如.text, .file等
     */
    std::string armCode;
    armCode += Tab + ".text" + NewLine;
    return armCode;
}

std::string ARMGen::ARMBuilder::globalIdentBuilder(llvmirParser::GlobalDefContext* context)
{
        /*
     * 返回一个变量的构造
         */
    std::stringstream armCode;
    std::string IdName = context->GlobalIdent()->getText().erase(0, 1);
    armCode << Tab << ".type" << Tab << IdName << ",%object" << NewLine;
    armCode << Tab << ".globl" << Tab << IdName << NewLine;
    armCode << IdName << ":" << NewLine;
    //填充内容
    auto constant = context->constant();
    if (constant->intConst()!= nullptr){
        armCode << intValue(constant->intConst());
        armCode << Tab << ".size" << Tab << IdName << ", 4" << NewLine;
    }
    else if (constant->floatConst()!= nullptr){
        armCode << floatValue(constant->floatConst());
        armCode << Tab << ".size" << Tab << IdName << ", 4" << NewLine;
    }
    else if (constant->arrayConst()!= nullptr){
        armCode << arrayValue(constant->arrayConst());
    }
    else if (constant->zeroInitializerConst()!= nullptr){
        if (context->type()->arrayType()!= nullptr){
            armCode << zeroValue(context->type()->arrayType());
        }
        else {
            armCode << Tab << ".long" << Tab << "0" << NewLine;
            armCode << Tab << ".size" << Tab << IdName << ", 4" << NewLine;
        }
    }
    armCode << NewLine;
    return armCode.str();
}

std::string ARMGen::ARMBuilder::funcHeaderBuilder(llvmirParser::FuncHeaderContext* context)
{
    std::stringstream armCode;
    std::string FuncName = context->GlobalIdent()->getText();
    armCode << Tab << ".globl" << Tab << FuncName << NewLine;
    armCode << Tab << ".type" << Tab << FuncName << ",%function" << NewLine;
    armCode << Tab << ".code\t32" << NewLine;
    armCode << FuncName << ":" << NewLine;
    //根据params操作一下寄存器
    armCode << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::labelBuilder(std::string context)
{
    return "." + context + NewLine;
}

void ARMGen::ARMBuilder::allocaBuilder(llvmirParser::LocalDefInstContext *context)
{
    auto LocalId = context->LocalIdent();
    auto type    = context->valueInstruction()->allocaInst()->type();
    if (type->arrayType() != nullptr) {
        int  space = 4;
        auto array = type->arrayType();
        while (array->type()->arrayType() != nullptr) {
            space *= std::stoi(array->IntLit()->getText());
            array = array->type()->arrayType();
        }
        space *= std::stoi(array->IntLit()->getText());
        subSpace += space;
    } else
        subSpace += 4;
    LocalId_Offset.insert(std::make_pair(LocalId->getText(), subSpace));
}

std::string ARMGen::ARMBuilder::allocaAllBuilder()
{
    std::stringstream armCode;
    if (subSpace){
        for(auto& x: LocalId_Offset){
            x.second = subSpace - x.second;
        }
        armCode << Tab << "sub" << " sp, sp ,#" << std::to_string(subSpace) << NewLine;
        retSpace = subSpace;
        subSpace = 0;
    }
    return armCode.str();
}


std::string ARMGen::ARMBuilder::loadBuilder(llvmirParser::LocalDefInstContext *context)
{
    auto Rn = context->valueInstruction()->loadInst()->typeValue()->value();
    auto Rd = context->LocalIdent();
    std::stringstream armCode;
    //记录寄存器和该变量的键值对，以后再次用到该变量时可以直接用改寄存器
    Id_Registers.insert(std::make_pair(Rd->getText(), getRegister()));

    //若需要用到全局变量
    if (Rn->GlobalIdent()!= nullptr){
        //先把变量名取出来
        std::string IdName = Rn->getText().erase(0, 1);
        //先看看该函数的GlobalId有没有存储相应的 全局变量 Label 对
        auto finder = GlobalId_Label.find(Rn->getText());
        //没有就添加进去
        if (finder == GlobalId_Label.end()){
            GlobalIdNum += 1;
            Id_Registers.insert(std::make_pair(IdName, getRegister()));
            GlobalId_Label.insert(std::make_pair(IdName, ".ZYNB"+std::to_string(GlobalIdNum)));
            armCode << Tab << "ldr" << " " << Id_Registers[IdName] << ", " << GlobalId_Label[IdName] << NewLine;
        }

        armCode << Tab << "ldr" << " " << Id_Registers[IdName] << ", [" << Id_Registers[IdName] << "]" << NewLine;
    }
    else {
        armCode << Tab << "ldr" << " " << getRegister() << ", " << makeSp(LocalId_Offset[Rn->getText()]) << NewLine;
    }
    return armCode.str();
}
std::string ARMGen::ARMBuilder::addBuilder(llvmirParser::LocalDefInstContext *context)
{
    auto Rn1 = context->valueInstruction()->addInst()->typeValue()->value();
    auto Rn2 = context->valueInstruction()->addInst()->value();
    std::stringstream armCode;
    armCode << Tab << "add" << " " << getRegister() << ", " << Id_Registers[Rn1->getText()] << ", " << Id_Registers[Rn2->getText()] <<NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::subBuilder(llvmirParser::LocalDefInstContext *context)
{
    auto Rn1 = context->valueInstruction()->addInst()->typeValue()->value();
    auto Rn2 = context->valueInstruction()->addInst()->value();
    std::stringstream armCode;
    armCode << Tab << "sub" << " " << getRegister() << ", " << Id_Registers[Rn1->getText()] << ", " << Id_Registers[Rn2->getText()] <<NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::storeBuilder(llvmirParser::StoreInstContext *context)
{
    auto Rn = context->typeValue()[0]->value();
    auto Rd = context->typeValue()[1]->value();
    std::stringstream armCode;

    //目标寄存器是否是全局变量
    if (Rd->GlobalIdent()!= nullptr){
        std::string IdName = Rd->getText().erase(0, 1);
        //是的话要先看看该函数是否已经存过该全局变量
        auto finder = GlobalId_Label.find(Rd->getText());
        if (finder == GlobalId_Label.end()){
            GlobalIdNum += 1;
            Id_Registers.insert(std::make_pair(IdName,getRegister()));
            GlobalId_Label.insert(std::make_pair(IdName, ".ZYNB"+std::to_string(GlobalIdNum)));
        }
        armCode << Tab << "ldr" << " " << Id_Registers[IdName] << ", " << GlobalId_Label[Rd->getText().erase(0,1)] << NewLine;
    }
    if (Rn->constant()!= nullptr) {
        armCode << Tab << "mov" << " " << getRegister() << ", #" << Rn->getText() << NewLine;
    }
    if (Rd->GlobalIdent()!= nullptr){
        armCode << Tab << "str" << " " << getRegister() << ", [" << Id_Registers[Rd->getText().erase(0,1)] << "]" << NewLine;
        armCode << Tab << "str" << " " << getRegister() << ", [" << Id_Registers[Rd->getText().erase(0,1)] << "]" << NewLine;
    }
    else armCode << Tab << "str" << " " << getRegister() << ", " << makeSp(LocalId_Offset[Rd->getText()]) << NewLine;
    return armCode.str();
}



std::string ARMGen::ARMBuilder::getRegister()
{
    return "r0";
}

std::string ARMGen::ARMBuilder::makeSp(int offset)
{
    if (offset) return "[sp, #" + std::to_string(offset) + "]";
    return "[sp]";
}

std::string ARMGen::ARMBuilder::arrayValue(llvmirParser::ArrayConstContext *context){
    std::stringstream armCode;
    for (auto &x: context->typeConst()) {
        if (x->constant()->arrayConst()!= nullptr){
            armCode << arrayValue(x->constant()->arrayConst());
        }
        else if (x->constant()->intConst()!= nullptr){
            armCode << intValue(x->constant()->intConst());
        }
        else if (x->constant()->floatConst()!= nullptr){
            armCode << floatValue(x->constant()->floatConst());
        }
        else if (x->constant()->zeroInitializerConst()!= nullptr){
            armCode << zeroValue(x->concreteType()->arrayType());
        }
    }
    return armCode.str();
}

std::string ARMGen::ARMBuilder::fnStart()
{
    return Tab + ".fnstart" + NewLine;
}
std::string ARMGen::ARMBuilder::fnEnd()
{
    std::stringstream armCode;
    if (GlobalIdNum){
        GlobalIdNum = 0;
        for (auto x: GlobalId_Label) {
            std::string IdName = x.first;
            IdName.erase(0, 1);
            armCode << x.second <<NewLine;
            armCode << Tab << ".long" << " " << IdName <<NewLine;
        }
        GlobalId_Label.clear();
    }
    armCode << ".Lfunc_end:" << NewLine;
    armCode << Tab << ".size" << Tab << NewLine;
    armCode << Tab << ".fnend" << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::retBuilder(llvmirParser::RetTermContext *context)
{
    std::stringstream armCode;
    if (retSpace){
        armCode << Tab << "add" << " sp, sp ,#" << std::to_string(subSpace) << NewLine;
        retSpace = 0;
    }
    armCode << Tab << "mov pc, lr" << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::brBuilder(llvmirParser::BrTermContext *context)
{
    std::stringstream armCode;
    auto label = context->label()->LocalIdent()->getText().erase(0,1);
    armCode << Tab << "b" << " ." << label << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::intValue(llvmirParser::IntConstContext* context)
{
    std::stringstream armCode;
    armCode << Tab << ".long" << Tab << context->getText() << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::floatValue(llvmirParser::FloatConstContext* context)
{
    std::stringstream armCode;
    std::stringstream hex;
    hex << std::hex << context->getText();
    uint64_t float64 ;
    hex >> float64;
    auto float32 = static_cast<float>(*reinterpret_cast<double*>(&float64));
    auto *float10 = reinterpret_cast<uint32_t*>(&float32);
    armCode << Tab << ".long" << Tab << *float10 << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::zeroValue(llvmirParser::ArrayTypeContext* context)
{
    std::stringstream armCode;
    int space = 4;
    auto type = context;
    while(type->type()->arrayType()!= nullptr){
        space *= std::stoi(type->IntLit()->getText());
        type = type->type()->arrayType();
    }
    space *= std::stoi(type->IntLit()->getText());
    armCode << Tab << ".zero" << Tab << space << NewLine;
    return armCode.str();
}
std::string ARMGen::ARMBuilder::getBuilder(llvmirParser::LocalDefInstContext* context)
{
    std::stringstream armCode;
    auto Rd = context->LocalIdent();
    auto type = context->valueInstruction()->getElementPtrInst()->type();
    auto Rn = context->valueInstruction()->getElementPtrInst()->typeValue()[0];
    auto addr = context->valueInstruction()->getElementPtrInst()->typeValue();
    std::map<std::string ,int> meme;
    int offset = 0;

    for (int i=1;i<addr.size();i++) {
        if (addr[i]->value()->constant()!= nullptr){
            offset += std::stoi(addr[i]->value()->getText());
        }
        else{
            meme.insert(std::make_pair(addr[i]->value()->getText(), 1));
        }
        int lit;
        if (type->arrayType()!= nullptr){
            lit = std::stoi(type->arrayType()->IntLit()->getText()) * 4;
        }
        else lit = 4;
        for (auto &x: meme) {
            x.second = x.second * lit;
        }
        offset *= lit;
    }
    for (auto &x: meme) {
        armCode <<  Tab << "mov" << " " << getRegister() << ", #" << x.second << NewLine;
        armCode <<  Tab << "mul" << " " << getRegister() << ", " << getRegister() << ", " << getRegister() << NewLine;
        armCode <<  Tab << "add" << " " << getRegister() << ", " << getRegister() << ", " << getRegister() << NewLine;
    }
    if (meme.empty()){

    }
    else armCode << Tab << "ldr" << " " << getRegister() << ", " << "[" << getRegister() << ", #" << offset << "]" << NewLine;
    return armCode.str();
}
