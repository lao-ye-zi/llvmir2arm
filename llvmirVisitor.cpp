
// Generated from llvmir.g4 by ANTLR 4.13.0


#include "llvmirVisitor.h"
#include "ARMLogger.h"
#include "ARMBuilder.h"

std::shared_ptr<ARMGen::ARMBuilder> g_builder;
std::ofstream                       armCode("../testsrc/1.txt");
std::vector<std::string>            release;
bool                                mapbuild = true;
std::string                         LocalIdent;
std::string                         LastId;
std::string                         LastType;
std::string                         LastOP1;
std::string                         LastOP2;

/// topLevelEntity* EOF
/// \param context
/// \return
std::any Visitor::visitCompilationUnit(llvmirParser::CompilationUnitContext* context)
{
    LOGD("Enter CompUnit");

    // Init builder and layer controller
    g_builder = std::make_shared<ARMGen::ARMBuilder>(ARMGen::ARMBuilder());

    std::vector<llvmirParser::TopLevelEntityContext*> Global;
    std::vector<llvmirParser::TopLevelEntityContext*> Data;
    std::vector<llvmirParser::TopLevelEntityContext*> Rodata;


    for (auto& x : context->topLevelEntity()) {
        if (x->globalDef() != nullptr) {
            Global.emplace_back(x);
        } else
            x->accept(this);
    }

    if (!Global.empty()) {
        for (auto x : Global) {
            if (x->globalDef()->immutable()->getText() == "global") {
                Data.emplace_back(x);
            } else
                Rodata.emplace_back(x);
        }
        if (!Data.empty()) {
            for (auto& y : Data) { y->accept(this); }
        }
        if (!Rodata.empty()) {
            for (auto& y : Rodata) { y->accept(this); }
        }
    }


    armCode << g_builder->toString();
    armCode.close();
    return 0;
}

//	globalDecl
//	| globalDef
//	| funcDecl
//	| funcDef;
/// \param context
/// \return
std::any Visitor::visitTopLevelEntity(llvmirParser::TopLevelEntityContext *context) {
    if( context->globalDecl() != nullptr) {
        context->globalDecl()->accept(this);
    }else if( context->globalDef() != nullptr) {
        context->globalDef()->accept(this);
    }else if( context->funcDecl() != nullptr) {
        context->funcDecl()->accept(this);
    }else if( context->funcDef() != nullptr) {
        context->funcDef()->accept(this);
    }
    return 0;
}

/// LocalIdent '=' 'type' type,已弃用
/// \param context
/// \return
std::any Visitor::visitTypeDef(llvmirParser::TypeDefContext *context) {
    return 0;
}

/// GlobalIdent '=' internalLinkage? preemption? immutable type，不会有，弃用
/// \param context
/// \return
std::any Visitor::visitGlobalDecl(llvmirParser::GlobalDeclContext *context) {
    return 0;
}

/// GlobalIdent '=' internalLinkage? preemption? immutable type constant
/// \param context
/// \return
std::any Visitor::visitGlobalDef(llvmirParser::GlobalDefContext *context) {
    if(context->GlobalIdent()!= nullptr){
        g_builder->globalIdentBuilder(context);
    }else
        LOGD("error");
    return 0;
}

/// 实际上用到的好像只有internal
/// \param context
/// \return
std::any Visitor::visitInternalLinkage(llvmirParser::InternalLinkageContext *context) {
    return 0;
}

/// 'dso_local' | 'dso_preemptable'
/// \param context
/// \return
std::any Visitor::visitPreemption(llvmirParser::PreemptionContext *context) {

    return 0;
}

/// constant' | 'global'不用
/// \param context
/// \return
std::any Visitor::visitImmutable(llvmirParser::ImmutableContext *context) {
    return 0;
}

/// 不会在.s中出现，不用写
/// \param context
/// \return
std::any Visitor::visitFuncDecl(llvmirParser::FuncDeclContext *context) {
    return 0;
}

/// 'define' funcHeader funcBody
/// \param context
/// \return
std::any Visitor::visitFuncDef(llvmirParser::FuncDefContext *context) {
    if(context->funcHeader()!= nullptr){
        context->funcHeader()->accept(this);
    }
    if(context->funcBody()!= nullptr){
        context->funcBody()->accept(this);
    }
    return 0;
}

/// preemption? type GlobalIdent
/// \param context
/// \return
std::any Visitor::visitFuncHeader(llvmirParser::FuncHeaderContext *context)
{
    if (context->GlobalIdent() != nullptr) { g_builder->funcHeaderBuilder(context); }
    for (auto param : context->params()->param()) {
        g_builder->idInsert(param->LocalIdent()->getText());
        release.emplace_back(param->LocalIdent()->getText());
    }
    return 0;
}

/// '{' basicBlock+ '}';
/// \param context
/// \return
std::any Visitor::visitFuncBody(llvmirParser::FuncBodyContext *context)
{
    for (auto x : context->basicBlock()) {
        //        std::cout<< x->getText()<<NewLine;
        x->accept(this);
    }
    mapbuild = false;
    g_builder->makeMapGreatAgain();
    g_builder->allocaAllBuilder();
    for (auto x : context->basicBlock()) { x->accept(this); }
    mapbuild = true;
    g_builder->fnEnd();
    LastOP1 = "";
    LastOP2 = "";
    LastId  = "";
    return 0;
}

/// LabelIdent? instruction* terminator;
/// \param context
/// \return
std::any Visitor::visitBasicBlock(llvmirParser::BasicBlockContext *context)
{


    if (mapbuild) {
        // 先构建一个寄存器分配表
        // 遍历所有的instruction，构造一个释放表
        for (auto x : context->instruction()) { x->accept(this); }

    } else {
        // 第二遍访问时可以先根据第一次的alloca分配表先为栈帧分配空间，然后开始添加指令
        if (context->LabelIdent() != nullptr) {
            g_builder->labelBuilder(context->LabelIdent()->getText());
        }

        for (auto x : context->instruction()) { x->accept(this); }

        if (context->terminator() != nullptr) { context->terminator()->accept(this); }
    }

    return 0;
}

/// instruction:
//	localDefInst
//	| valueInstruction
//	| storeInst;
/// \param context
/// \return
std::any Visitor::visitInstruction(llvmirParser::InstructionContext* context)
{

    if (context->localDefInst() != nullptr) { context->localDefInst()->accept(this); }
    if (context->storeInst() != nullptr) { context->storeInst()->accept(this); }
    if (context->valueInstruction() != nullptr) { context->valueInstruction()->accept(this); }

    return 0;
}

std::any Visitor::visitTerminator(llvmirParser::TerminatorContext *context)
{
    if (context->retTerm() != nullptr) { context->retTerm()->accept(this); }
    if (context->brTerm() != nullptr) { context->brTerm()->accept(this); }
    if (context->condBrTerm() != nullptr) { context->condBrTerm()->accept(this); }
    return 0;
}

/// localDefInst: LocalIdent '=' valueInstruction;
/// \param context
/// \return
std::any Visitor::visitLocalDefInst(llvmirParser::LocalDefInstContext* context)
{
    LocalIdent = context->LocalIdent()->getText();

    context->valueInstruction()->accept(this);
    if (mapbuild) {
        g_builder->idInsert(LocalIdent);
        if (!LastId.empty()) { g_builder->mapInsert(LocalIdent, LastId); }
        if (!LastOP1.empty()) { g_builder->mapInsert(LocalIdent, LastOP1); }
        if (!LastOP2.empty()) { g_builder->mapInsert(LocalIdent, LastOP2); }
        if (!release.empty()) {
            for (auto& x : release) { g_builder->mapInsert(LocalIdent, x); }
            release.clear();
        }
        LastId = LocalIdent;
    }

    return 0;
}

std::any Visitor::visitValueInstruction(llvmirParser::ValueInstructionContext *context)
{
    /**
     * valueInstruction:
//算数指令
addInst
| fAddInst
| subInst
| fSubInst
| mulInst
| fMulInst
| uDivInst
| sDivInst
| fDivInst
| uRemInst
| sRemInst
| fRemInst
//位移指令
| shlInst
| lShrInst
| aShrInst
| andInst
| orInst
| xorInst
// Memory instructions
| allocaInst
| loadInst
| getElementPtrInst
// Conversion instructions
| zExtInst
| sExtInst
| siToFpInst
| fpToSiInst
| bitCastInst
// Other instructions
| iCmpInst
| fCmpInst
| callInst;
     */
    if (context->addInst() != nullptr) {
        context->addInst()->accept(this);
    } else if (context->fAddInst() != nullptr) {
        context->fAddInst()->accept(this);
    } else if (context->subInst() != nullptr) {
        context->subInst()->accept(this);
    } else if (context->fSubInst() != nullptr) {
        context->fSubInst()->accept(this);
    } else if (context->subInst() != nullptr) {
        context->subInst()->accept(this);
    } else if (context->mulInst() != nullptr) {
        context->mulInst()->accept(this);
    } else if (context->fMulInst() != nullptr) {
        context->fMulInst()->accept(this);
    } else if (context->uDivInst() != nullptr) {
        context->uDivInst()->accept(this);
    } else if (context->sDivInst() != nullptr) {
        context->sDivInst()->accept(this);
    } else if (context->fDivInst() != nullptr) {
        context->fDivInst()->accept(this);
    } else if (context->uRemInst() != nullptr) {
        context->uRemInst()->accept(this);
    } else if (context->sRemInst() != nullptr) {
        context->sRemInst()->accept(this);
    } else if (context->fRemInst() != nullptr) {
        context->fRemInst()->accept(this);
    } else if (context->shlInst() != nullptr) {
        context->shlInst()->accept(this);
    } else if (context->lShrInst() != nullptr) {
        context->lShrInst()->accept(this);
    } else if (context->aShrInst() != nullptr) {
        context->aShrInst()->accept(this);
    } else if (context->andInst() != nullptr) {
        context->andInst()->accept(this);
    } else if (context->orInst() != nullptr) {
        context->orInst()->accept(this);
    } else if (context->xorInst() != nullptr) {
        context->xorInst()->accept(this);
    } else if (context->allocaInst() != nullptr) {
        context->allocaInst()->accept(this);
    } else if (context->loadInst() != nullptr) {
        context->loadInst()->accept(this);
    } else if (context->getElementPtrInst() != nullptr) {
        context->getElementPtrInst()->accept(this);
    } else if (context->zExtInst() != nullptr) {
        context->zExtInst()->accept(this);
    } else if (context->sExtInst() != nullptr) {
        context->sExtInst()->accept(this);
    } else if (context->siToFpInst() != nullptr) {
        context->siToFpInst()->accept(this);
    } else if (context->fpToSiInst() != nullptr) {
        context->fpToSiInst()->accept(this);
    } else if (context->bitCastInst() != nullptr) {
        context->bitCastInst()->accept(this);
    } else if (context->iCmpInst() != nullptr) {
        context->iCmpInst()->accept(this);
    } else if (context->fCmpInst() != nullptr) {
        context->fCmpInst()->accept(this);
    } else if (context->callInst() != nullptr) {
        context->callInst()->accept(this);
    }
    return 0;
}

std::any Visitor::visitOverflowFlag(llvmirParser::OverflowFlagContext *context) {
    return 0;
}

/// addInst:
//	'add' overflowFlag* typeValue ',' value;
/// \param context
/// \return
std::any Visitor::visitAddInst(llvmirParser::AddInstContext* context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) { g_builder->addBuilder(LocalIdent, LastOP1, LastOP2); }
    return 0;
}

std::any Visitor::visitFAddInst(llvmirParser::FAddInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) { g_builder->faddBuilder(LocalIdent, LastOP1, LastOP2); }
    return 0;
}

std::any Visitor::visitSubInst(llvmirParser::SubInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) { g_builder->subBuilder(LocalIdent, LastOP1, LastOP2); }
    return 0;
}

std::any Visitor::visitFSubInst(llvmirParser::FSubInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) { g_builder->fsubBuilder(LocalIdent, LastOP1, LastOP2); }
    return 0;
}

std::any Visitor::visitMulInst(llvmirParser::MulInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) {
        g_builder->mulBuilder(LocalIdent, LastOP1, LastOP2);
    } else {
        if (LastOP2[0] != '%') { g_builder->idInsert(LastOP2); }
    }
    return 0;
}

std::any Visitor::visitFMulInst(llvmirParser::FMulInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) { g_builder->fmulBuilder(LocalIdent, LastOP1, LastOP2); }
    return 0;
}

std::any Visitor::visitUDivInst(llvmirParser::UDivInstContext *context) {
    return 0;
}

std::any Visitor::visitSDivInst(llvmirParser::SDivInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) {
        g_builder->sdivBuilder(LocalIdent, LastOP1, LastOP2);
    } else {
        g_builder->push_rg("lr");
        if (LastOP2[0] != '%') { g_builder->idInsert(LastOP2); }
    }
    return 0;
}

std::any Visitor::visitFDivInst(llvmirParser::FDivInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) { g_builder->fdivBuilder(LocalIdent, LastOP1, LastOP2); }
    return 0;
}

std::any Visitor::visitURemInst(llvmirParser::URemInstContext *context) {
    return 0;
}

std::any Visitor::visitSRemInst(llvmirParser::SRemInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = context->value()->getText();
    if (!mapbuild) {
        g_builder->sremBuilder(LocalIdent, LastOP1, LastOP2);
    } else {
        g_builder->push_rg("lr");
        if (LastOP2[0] != '%') { g_builder->idInsert(LastOP2); }
    }
    return 0;
}

std::any Visitor::visitFRemInst(llvmirParser::FRemInstContext *context) {
    return 0;
}

std::any Visitor::visitStoreInst(llvmirParser::StoreInstContext *context)
{
    context->typeValue()[0]->accept(this);
    LastOP2 = context->typeValue()[1]->value()->getText();
    if (!mapbuild) {
        g_builder->storeBuilder(LastOP1, LastOP2);
    } else {
        release.push_back(LastOP1);
        g_builder->idInsert(LastOP1);
        release.push_back(LastOP2);
        g_builder->idInsert(LastOP2);
    }
    return 0;
}

std::any Visitor::visitShlInst(llvmirParser::ShlInstContext *context) {
    return 0;
}

std::any Visitor::visitLShrInst(llvmirParser::LShrInstContext *context) {
    return 0;
}

std::any Visitor::visitAShrInst(llvmirParser::AShrInstContext *context) {
    return 0;
}

std::any Visitor::visitAndInst(llvmirParser::AndInstContext *context) {
    return 0;
}

std::any Visitor::visitOrInst(llvmirParser::OrInstContext *context) {
    return 0;
}

std::any Visitor::visitXorInst(llvmirParser::XorInstContext *context) {
    return 0;
}

std::any Visitor::visitAllocaInst(llvmirParser::AllocaInstContext *context)
{
    LastOP1 = "";
    LastOP2 = "";
    if (mapbuild) {
        // 为局部变量分配空间
        g_builder->allocaBuilder(context->type(), LocalIdent);
    }
    return 0;
}

std::any Visitor::visitLoadInst(llvmirParser::LoadInstContext *context)
{
    LastOP1 = "";
    LastOP2 = context->typeValue()->value()->getText();
    if (!mapbuild) {
        g_builder->loadBuilder(LocalIdent, LastOP2);
    } else {
        if (LastOP2[0] == '@') {
            g_builder->idInsert(LastOP2);
            release.emplace_back(LastOP2);
        }
    }
    return 0;
}

std::any Visitor::visitGetElementPtrInst(llvmirParser::GetElementPtrInstContext *context)
{
    LastOP2 = "";
    LastOP1 = context->typeValue()[0]->value()->getText();

    if (!mapbuild) {

        g_builder->getBuilder(LocalIdent, context->typeValue(), context->type());
    } else {
        if (LastOP1[0] == '@') {
            g_builder->idInsert(LastOP1);
            release.emplace_back(LastOP1);
        }

        std::vector<string> zjlnb;
        auto                typeValues = context->typeValue();
        for (int i = 1; i < typeValues.size(); i++) {
            // 若是变量，要加进map里
            if (typeValues[i]->value()->constant() == nullptr) {
                zjlnb.push_back(typeValues[i]->value()->getText());
                g_builder->mapInsert(LocalIdent, typeValues[i]->value()->getText());
            }
        }
        if (zjlnb.empty()) g_builder->getCheck(LocalIdent);
    }
    return 0;
}

std::any Visitor::visitBitCastInst(llvmirParser::BitCastInstContext *context)
{
    context->typeValue()->accept(this);
    LastOP2 = "";
    if (mapbuild) { g_builder->bitcastBuilder(LocalIdent, LastOP1); }
    return 0;
}

std::any Visitor::visitZExtInst(llvmirParser::ZExtInstContext *context) {
    return std::any();
}

std::any Visitor::visitSExtInst(llvmirParser::SExtInstContext *context) {
    return std::any();
}

std::any Visitor::visitSiToFpInst(llvmirParser::SiToFpInstContext *context) {
    return std::any();
}

std::any Visitor::visitFpToSiInst(llvmirParser::FpToSiInstContext *context) {
    return 0;
}

/// 'icmp' iPred typeValue ',' value;
/// \param context
/// \return
std::any Visitor::visitICmpInst(llvmirParser::ICmpInstContext* context)
{
    LastOP2 = context->value()->getText();
    context->typeValue()->accept(this);
    if (mapbuild) {
        g_builder->icmpMapBuilder(LocalIdent, context->iPred()->getText());
    } else {
        g_builder->icmpBuilder(LastOP1, LastOP2);
    }

    return 0;
}

std::any Visitor::visitFCmpInst(llvmirParser::FCmpInstContext *context) {
    return std::any();
}

/// 	'call' type value '(' args ')';
/// \param context
/// \return
std::any Visitor::visitCallInst(llvmirParser::CallInstContext* context)
{
    LastOP1 = "";
    LastOP2 = "";
    if (context->value()->getText() == "@llvm.memset.p0.i32") {
        if (!mapbuild) {
            g_builder->memsetBuilder(
                context->args()->arg()[0]->value()->getText(),
                std::stoi(context->args()->arg()[2]->value()->getText())
            );
        } else {
            g_builder->idInsert("0");
            release.emplace_back("0");
        }

    } else {
        if (!mapbuild) {
            g_builder->callBuilder(context);
        } else {   // 若LocalIdent == LastId，则为单独的call指令，需要将参数加进release里面
            g_builder->push_rg("lr");
            if (LocalIdent == LastId) {
                for (auto& x : context->args()->arg()) {
                    release.push_back(x->value()->getText());
                    g_builder->idInsert(x->value()->getText());
                }
            } else {
                for (auto& x : context->args()->arg()) {
                    g_builder->mapInsert(LocalIdent, x->value()->getText());
                    g_builder->idInsert(x->value()->getText());
                }
            }
        }
    }

    return 0;
}

std::any Visitor::visitRetTerm(llvmirParser::RetTermContext *context) {
    g_builder->retBuilder(context);
    return 0;
}

std::any Visitor::visitBrTerm(llvmirParser::BrTermContext *context) {
    g_builder->brBuilder(context);
    return 0;
}

std::any Visitor::visitCondBrTerm(llvmirParser::CondBrTermContext *context)
{
    g_builder->condBrBuilder(
        context->value()->getText(),
        context->label()[0]->LocalIdent()->getText(),
        context->label()[1]->LocalIdent()->getText()
    );
    return 0;
}

std::any Visitor::visitFloatKind(llvmirParser::FloatKindContext *context) {
    return std::any();
}

/// typeValue:
//	concreteType value;
/// \param context
/// \return
std::any Visitor::visitTypeValue(llvmirParser::TypeValueContext* context)
{
    LastType = context->concreteType()->getText();
    LastOP1  = context->value()->getText();
    return 0;
}

std::any Visitor::visitConcreteType(llvmirParser::ConcreteTypeContext *context) {
    return std::any();
}

std::any Visitor::visitValue(llvmirParser::ValueContext *context) {
    return std::any();
}

std::any Visitor::visitConstant(llvmirParser::ConstantContext *context) {
    return std::any();
}

std::any Visitor::visitBoolConst(llvmirParser::BoolConstContext *context) {
    return std::any();
}

std::any Visitor::visitIntConst(llvmirParser::IntConstContext *context) {
    return std::any();
}

std::any Visitor::visitFloatConst(llvmirParser::FloatConstContext *context) {
    return std::any();
}

std::any Visitor::visitNullConst(llvmirParser::NullConstContext *context) {
    return std::any();
}

std::any Visitor::visitNoneConst(llvmirParser::NoneConstContext *context) {
    return std::any();
}

std::any Visitor::visitStructConst(llvmirParser::StructConstContext *context) {
    return std::any();
}

std::any Visitor::visitArrayConst(llvmirParser::ArrayConstContext *context) {
    return std::any();
}

std::any Visitor::visitVectorConst(llvmirParser::VectorConstContext *context) {
    return std::any();
}

std::any Visitor::visitTypeConst(llvmirParser::TypeConstContext *context) {
    return std::any();
}

std::any Visitor::visitType(llvmirParser::TypeContext *context) {
    return std::any();
}

std::any Visitor::visitIntType(llvmirParser::IntTypeContext *context) {
    return std::any();
}

std::any Visitor::visitFloatType(llvmirParser::FloatTypeContext *context) {
    return std::any();
}

std::any Visitor::visitPointerType(llvmirParser::PointerTypeContext *context) {
    return std::any();
}

std::any Visitor::visitVectorType(llvmirParser::VectorTypeContext *context) {
    return std::any();
}

std::any Visitor::visitLabelType(llvmirParser::LabelTypeContext *context) {
    return std::any();
}

std::any Visitor::visitArrayType(llvmirParser::ArrayTypeContext *context) {
    return std::any();
}

std::any Visitor::visitStructType(llvmirParser::StructTypeContext *context) {
    return std::any();
}

std::any Visitor::visitNamedType(llvmirParser::NamedTypeContext *context) {
    return std::any();
}

std::any Visitor::visitMmxType(llvmirParser::MmxTypeContext *context) {
    return std::any();
}

std::any Visitor::visitTokenType(llvmirParser::TokenTypeContext *context) {
    return std::any();
}

std::any Visitor::visitOpaquePointerType(llvmirParser::OpaquePointerTypeContext *context) {
    return std::any();
}

std::any Visitor::visitAddrSpace(llvmirParser::AddrSpaceContext *context) {
    return std::any();
}

std::any Visitor::visitParams(llvmirParser::ParamsContext *context) {
    return std::any();
}

std::any Visitor::visitParam(llvmirParser::ParamContext *context) {
    return std::any();
}

std::any Visitor::visitLabel(llvmirParser::LabelContext *context) {
    return std::any();
}

std::any Visitor::visitIPred(llvmirParser::IPredContext *context) {
    return std::any();
}

std::any Visitor::visitInBounds(llvmirParser::InBoundsContext *context) {
    return std::any();
}

std::any Visitor::visitArgs(llvmirParser::ArgsContext *context) {
    return std::any();
}

std::any Visitor::visitArg(llvmirParser::ArgContext *context) {
    return std::any();
}

std::any Visitor::visitZeroInitializerConst(llvmirParser::ZeroInitializerConstContext *context) {
    return std::any();
}

std::any Visitor::visitFPred(llvmirParser::FPredContext *context) {
    return std::any();
}
