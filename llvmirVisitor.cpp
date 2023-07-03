
// Generated from llvmir.g4 by ANTLR 4.13.0


#include "llvmirVisitor.h"
#include "ARMLogger.h"
#include "ARMBuilder.h"

std::shared_ptr<ARMGen::ARMBuilder>         g_builder;
std::string armCode;

std::string Tab = ARMGen::Tab;
std::string NewLine = ARMGen::NewLine;

/// topLevelEntity* EOF
/// \param context
/// \return
std::any Visitor::visitCompilationUnit(llvmirParser::CompilationUnitContext *context) {
    LOGD("Enter CompUnit");

    // Init builder and layer controller
    g_builder = std::make_shared<ARMGen::ARMBuilder>(ARMGen::ARMBuilder());

    armCode += g_builder->registerMapBuilder();

    for (auto& x: context->topLevelEntity()) {
        x->accept(this);
    }
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

/// GlobalIdent '=' internalLinkage? preemption? immutable type
/// \param context
/// \return
std::any Visitor::visitGlobalDecl(llvmirParser::GlobalDeclContext *context) {
    if(context->GlobalIdent()!= nullptr){
        armCode += g_builder->globalIdentBuilder();
    }else
        LOGD("error");
    if(context->internalLinkage()!= nullptr){
        context->internalLinkage()->accept(this);
    }
    if(context->preemption()!= nullptr){
        context->preemption()->accept(this);
    }
    if(context->immutable()!= nullptr){
        armCode += context->immutable()->getText() + " ";
    }else
        LOGD("error");
    if(context->type()!= nullptr){
        context->type()->accept(this);
    }else
        LOGD("error");

    return 0;
}

/// GlobalIdent '=' internalLinkage? preemption? immutable type constant
/// \param context
/// \return
std::any Visitor::visitGlobalDef(llvmirParser::GlobalDefContext *context) {
    if(context->GlobalIdent()!= nullptr){
        armCode += Tab + context->GlobalIdent()->getText() + " = ";
    }else
        LOGD("error");
    if(context->internalLinkage()!= nullptr){
        context->internalLinkage()->accept(this);
    }
    if(context->preemption()!= nullptr){
        context->preemption()->accept(this);
    }
    if(context->immutable()!= nullptr){
        armCode += context->immutable()->getText() + " ";
    }else
        LOGD("error");
    if(context->type()!= nullptr){
        context->type()->accept(this);
    }else
        LOGD("error");
    if (context->constant()!= nullptr){
        context->constant()->accept(this);
    }else
        LOGD("error");

    return 0;
}

/// 实际上用到的好像只有internal
/// \param context
/// \return
std::any Visitor::visitInternalLinkage(llvmirParser::InternalLinkageContext *context) {
    armCode += g_builder->InternalLinkageBuilder();
    return 0;
}

/// 'dso_local' | 'dso_preemptable'
/// \param context
/// \return
std::any Visitor::visitPreemption(llvmirParser::PreemptionContext *context) {

    return std::any();
}

std::any Visitor::visitImmutable(llvmirParser::ImmutableContext *context) {
    return std::any();
}

std::any Visitor::visitFuncDecl(llvmirParser::FuncDeclContext *context) {
    return std::any();
}

std::any Visitor::visitFuncDef(llvmirParser::FuncDefContext *context) {
    return std::any();
}

std::any Visitor::visitFuncHeader(llvmirParser::FuncHeaderContext *context) {
    return std::any();
}

std::any Visitor::visitFuncBody(llvmirParser::FuncBodyContext *context) {
    return std::any();
}

std::any Visitor::visitBasicBlock(llvmirParser::BasicBlockContext *context) {
    return std::any();
}

std::any Visitor::visitInstruction(llvmirParser::InstructionContext *context) {
    return std::any();
}

std::any Visitor::visitTerminator(llvmirParser::TerminatorContext *context) {
    return std::any();
}

std::any Visitor::visitLocalDefInst(llvmirParser::LocalDefInstContext *context) {
    return std::any();
}

std::any Visitor::visitValueInstruction(llvmirParser::ValueInstructionContext *context) {
    return std::any();
}

std::any Visitor::visitOverflowFlag(llvmirParser::OverflowFlagContext *context) {
    return std::any();
}

std::any Visitor::visitAddInst(llvmirParser::AddInstContext *context) {
    return std::any();
}

std::any Visitor::visitFAddInst(llvmirParser::FAddInstContext *context) {
    return std::any();
}

std::any Visitor::visitSubInst(llvmirParser::SubInstContext *context) {
    return std::any();
}

std::any Visitor::visitFSubInst(llvmirParser::FSubInstContext *context) {
    return std::any();
}

std::any Visitor::visitMulInst(llvmirParser::MulInstContext *context) {
    return std::any();
}

std::any Visitor::visitFMulInst(llvmirParser::FMulInstContext *context) {
    return std::any();
}

std::any Visitor::visitUDivInst(llvmirParser::UDivInstContext *context) {
    return std::any();
}

std::any Visitor::visitSDivInst(llvmirParser::SDivInstContext *context) {
    return std::any();
}

std::any Visitor::visitFDivInst(llvmirParser::FDivInstContext *context) {
    return std::any();
}

std::any Visitor::visitURemInst(llvmirParser::URemInstContext *context) {
    return std::any();
}

std::any Visitor::visitSRemInst(llvmirParser::SRemInstContext *context) {
    return std::any();
}

std::any Visitor::visitFRemInst(llvmirParser::FRemInstContext *context) {
    return std::any();
}

std::any Visitor::visitStoreInst(llvmirParser::StoreInstContext *context) {
    return std::any();
}

std::any Visitor::visitShlInst(llvmirParser::ShlInstContext *context) {
    return std::any();
}

std::any Visitor::visitLShrInst(llvmirParser::LShrInstContext *context) {
    return std::any();
}

std::any Visitor::visitAShrInst(llvmirParser::AShrInstContext *context) {
    return std::any();
}

std::any Visitor::visitAndInst(llvmirParser::AndInstContext *context) {
    return std::any();
}

std::any Visitor::visitOrInst(llvmirParser::OrInstContext *context) {
    return std::any();
}

std::any Visitor::visitXorInst(llvmirParser::XorInstContext *context) {
    return std::any();
}

std::any Visitor::visitAllocaInst(llvmirParser::AllocaInstContext *context) {
    return std::any();
}

std::any Visitor::visitLoadInst(llvmirParser::LoadInstContext *context) {
    return std::any();
}

std::any Visitor::visitGetElementPtrInst(llvmirParser::GetElementPtrInstContext *context) {
    return std::any();
}

std::any Visitor::visitBitCastInst(llvmirParser::BitCastInstContext *context) {
    return std::any();
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
    return std::any();
}

std::any Visitor::visitICmpInst(llvmirParser::ICmpInstContext *context) {
    return std::any();
}

std::any Visitor::visitFCmpInst(llvmirParser::FCmpInstContext *context) {
    return std::any();
}

std::any Visitor::visitCallInst(llvmirParser::CallInstContext *context) {
    return std::any();
}

std::any Visitor::visitRetTerm(llvmirParser::RetTermContext *context) {
    return std::any();
}

std::any Visitor::visitBrTerm(llvmirParser::BrTermContext *context) {
    return std::any();
}

std::any Visitor::visitCondBrTerm(llvmirParser::CondBrTermContext *context) {
    return std::any();
}

std::any Visitor::visitFloatKind(llvmirParser::FloatKindContext *context) {
    return std::any();
}

std::any Visitor::visitTypeValue(llvmirParser::TypeValueContext *context) {
    return std::any();
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