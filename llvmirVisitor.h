
// Generated from llvmir.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "llvmirParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by llvmirParser.
 */
class  llvmirVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

/**
   * Visit parse trees produced by llvmirParser.
   */
    virtual std::any visitCompilationUnit(llvmirParser::CompilationUnitContext *context) = 0;

    virtual std::any visitTopLevelEntity(llvmirParser::TopLevelEntityContext *context) = 0;

    virtual std::any visitTypeDef(llvmirParser::TypeDefContext *context) = 0;

    virtual std::any visitGlobalDecl(llvmirParser::GlobalDeclContext *context) = 0;

    virtual std::any visitGlobalDef(llvmirParser::GlobalDefContext *context) = 0;

    virtual std::any visitInternalLinkage(llvmirParser::InternalLinkageContext *context) = 0;

    virtual std::any visitPreemption(llvmirParser::PreemptionContext *context) = 0;

    virtual std::any visitImmutable(llvmirParser::ImmutableContext *context) = 0;

    virtual std::any visitFuncDecl(llvmirParser::FuncDeclContext *context) = 0;

    virtual std::any visitFuncDef(llvmirParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncHeader(llvmirParser::FuncHeaderContext *context) = 0;

    virtual std::any visitFuncBody(llvmirParser::FuncBodyContext *context) = 0;

    virtual std::any visitBasicBlock(llvmirParser::BasicBlockContext *context) = 0;

    virtual std::any visitInstruction(llvmirParser::InstructionContext *context) = 0;

    virtual std::any visitTerminator(llvmirParser::TerminatorContext *context) = 0;

    virtual std::any visitLocalDefInst(llvmirParser::LocalDefInstContext *context) = 0;

    virtual std::any visitValueInstruction(llvmirParser::ValueInstructionContext *context) = 0;

    virtual std::any visitOverflowFlag(llvmirParser::OverflowFlagContext *context) = 0;

    virtual std::any visitAddInst(llvmirParser::AddInstContext *context) = 0;

    virtual std::any visitFAddInst(llvmirParser::FAddInstContext *context) = 0;

    virtual std::any visitSubInst(llvmirParser::SubInstContext *context) = 0;

    virtual std::any visitFSubInst(llvmirParser::FSubInstContext *context) = 0;

    virtual std::any visitMulInst(llvmirParser::MulInstContext *context) = 0;

    virtual std::any visitFMulInst(llvmirParser::FMulInstContext *context) = 0;

    virtual std::any visitUDivInst(llvmirParser::UDivInstContext *context) = 0;

    virtual std::any visitSDivInst(llvmirParser::SDivInstContext *context) = 0;

    virtual std::any visitFDivInst(llvmirParser::FDivInstContext *context) = 0;

    virtual std::any visitURemInst(llvmirParser::URemInstContext *context) = 0;

    virtual std::any visitSRemInst(llvmirParser::SRemInstContext *context) = 0;

    virtual std::any visitFRemInst(llvmirParser::FRemInstContext *context) = 0;

    virtual std::any visitStoreInst(llvmirParser::StoreInstContext *context) = 0;

    virtual std::any visitShlInst(llvmirParser::ShlInstContext *context) = 0;

    virtual std::any visitLShrInst(llvmirParser::LShrInstContext *context) = 0;

    virtual std::any visitAShrInst(llvmirParser::AShrInstContext *context) = 0;

    virtual std::any visitAndInst(llvmirParser::AndInstContext *context) = 0;

    virtual std::any visitOrInst(llvmirParser::OrInstContext *context) = 0;

    virtual std::any visitXorInst(llvmirParser::XorInstContext *context) = 0;

    virtual std::any visitAllocaInst(llvmirParser::AllocaInstContext *context) = 0;

    virtual std::any visitLoadInst(llvmirParser::LoadInstContext *context) = 0;

    virtual std::any visitGetElementPtrInst(llvmirParser::GetElementPtrInstContext *context) = 0;

    virtual std::any visitBitCastInst(llvmirParser::BitCastInstContext *context) = 0;

    virtual std::any visitZExtInst(llvmirParser::ZExtInstContext *context) = 0;

    virtual std::any visitSExtInst(llvmirParser::SExtInstContext *context) = 0;

    virtual std::any visitSiToFpInst(llvmirParser::SiToFpInstContext *context) = 0;

    virtual std::any visitFpToSiInst(llvmirParser::FpToSiInstContext *context) = 0;

    virtual std::any visitICmpInst(llvmirParser::ICmpInstContext *context) = 0;

    virtual std::any visitFCmpInst(llvmirParser::FCmpInstContext *context) = 0;

    virtual std::any visitCallInst(llvmirParser::CallInstContext *context) = 0;

    virtual std::any visitRetTerm(llvmirParser::RetTermContext *context) = 0;

    virtual std::any visitBrTerm(llvmirParser::BrTermContext *context) = 0;

    virtual std::any visitCondBrTerm(llvmirParser::CondBrTermContext *context) = 0;

    virtual std::any visitFloatKind(llvmirParser::FloatKindContext *context) = 0;

    virtual std::any visitTypeValue(llvmirParser::TypeValueContext *context) = 0;

    virtual std::any visitConcreteType(llvmirParser::ConcreteTypeContext *context) = 0;

    virtual std::any visitValue(llvmirParser::ValueContext *context) = 0;

    virtual std::any visitConstant(llvmirParser::ConstantContext *context) = 0;

    virtual std::any visitBoolConst(llvmirParser::BoolConstContext *context) = 0;

    virtual std::any visitIntConst(llvmirParser::IntConstContext *context) = 0;

    virtual std::any visitFloatConst(llvmirParser::FloatConstContext *context) = 0;

    virtual std::any visitNullConst(llvmirParser::NullConstContext *context) = 0;

    virtual std::any visitNoneConst(llvmirParser::NoneConstContext *context) = 0;

    virtual std::any visitStructConst(llvmirParser::StructConstContext *context) = 0;

    virtual std::any visitArrayConst(llvmirParser::ArrayConstContext *context) = 0;

    virtual std::any visitVectorConst(llvmirParser::VectorConstContext *context) = 0;

    virtual std::any visitTypeConst(llvmirParser::TypeConstContext *context) = 0;

    virtual std::any visitType(llvmirParser::TypeContext *context) = 0;

    virtual std::any visitIntType(llvmirParser::IntTypeContext *context) = 0;

    virtual std::any visitFloatType(llvmirParser::FloatTypeContext *context) = 0;

    virtual std::any visitPointerType(llvmirParser::PointerTypeContext *context) = 0;

    virtual std::any visitVectorType(llvmirParser::VectorTypeContext *context) = 0;

    virtual std::any visitLabelType(llvmirParser::LabelTypeContext *context) = 0;

    virtual std::any visitArrayType(llvmirParser::ArrayTypeContext *context) = 0;

    virtual std::any visitStructType(llvmirParser::StructTypeContext *context) = 0;

    virtual std::any visitNamedType(llvmirParser::NamedTypeContext *context) = 0;

    virtual std::any visitMmxType(llvmirParser::MmxTypeContext *context) = 0;

    virtual std::any visitTokenType(llvmirParser::TokenTypeContext *context) = 0;

    virtual std::any visitOpaquePointerType(llvmirParser::OpaquePointerTypeContext *context) = 0;

    virtual std::any visitAddrSpace(llvmirParser::AddrSpaceContext *context) = 0;

    virtual std::any visitParams(llvmirParser::ParamsContext *context) = 0;

    virtual std::any visitParam(llvmirParser::ParamContext *context) = 0;

    virtual std::any visitLabel(llvmirParser::LabelContext *context) = 0;

    virtual std::any visitIPred(llvmirParser::IPredContext *context) = 0;

    virtual std::any visitInBounds(llvmirParser::InBoundsContext *context) = 0;

    virtual std::any visitArgs(llvmirParser::ArgsContext *context) = 0;

    virtual std::any visitArg(llvmirParser::ArgContext *context) = 0;

    virtual std::any visitZeroInitializerConst(llvmirParser::ZeroInitializerConstContext *context) = 0;

    virtual std::any visitFPred(llvmirParser::FPredContext *context) = 0;


};

class Visitor: public llvmirVisitor{
public:
    std::any visitCompilationUnit(llvmirParser::CompilationUnitContext *context) override;

    std::any visitTopLevelEntity(llvmirParser::TopLevelEntityContext *context) override;

    std::any visitTypeDef(llvmirParser::TypeDefContext *context) override;

    std::any visitGlobalDecl(llvmirParser::GlobalDeclContext *context) override;

    std::any visitGlobalDef(llvmirParser::GlobalDefContext *context) override;

    std::any visitInternalLinkage(llvmirParser::InternalLinkageContext *context) override;

    std::any visitPreemption(llvmirParser::PreemptionContext *context) override;

    std::any visitImmutable(llvmirParser::ImmutableContext *context) override;

    std::any visitFuncDecl(llvmirParser::FuncDeclContext *context) override;

    std::any visitFuncDef(llvmirParser::FuncDefContext *context) override;

    std::any visitFuncHeader(llvmirParser::FuncHeaderContext *context) override;

    std::any visitFuncBody(llvmirParser::FuncBodyContext *context) override;

    std::any visitBasicBlock(llvmirParser::BasicBlockContext *context) override;

    std::any visitInstruction(llvmirParser::InstructionContext *context) override;

    std::any visitTerminator(llvmirParser::TerminatorContext *context) override;

    std::any visitLocalDefInst(llvmirParser::LocalDefInstContext *context) override;

    std::any visitValueInstruction(llvmirParser::ValueInstructionContext *context) override;

    std::any visitOverflowFlag(llvmirParser::OverflowFlagContext *context) override;

    std::any visitAddInst(llvmirParser::AddInstContext *context) override;

    std::any visitFAddInst(llvmirParser::FAddInstContext *context) override;

    std::any visitSubInst(llvmirParser::SubInstContext *context) override;

    std::any visitFSubInst(llvmirParser::FSubInstContext *context) override;

    std::any visitMulInst(llvmirParser::MulInstContext *context) override;

    std::any visitFMulInst(llvmirParser::FMulInstContext *context) override;

    std::any visitUDivInst(llvmirParser::UDivInstContext *context) override;

    std::any visitSDivInst(llvmirParser::SDivInstContext *context) override;

    std::any visitFDivInst(llvmirParser::FDivInstContext *context) override;

    std::any visitURemInst(llvmirParser::URemInstContext *context) override;

    std::any visitSRemInst(llvmirParser::SRemInstContext *context) override;

    std::any visitFRemInst(llvmirParser::FRemInstContext *context) override;

    std::any visitStoreInst(llvmirParser::StoreInstContext *context) override;

    std::any visitShlInst(llvmirParser::ShlInstContext *context) override;

    std::any visitLShrInst(llvmirParser::LShrInstContext *context) override;

    std::any visitAShrInst(llvmirParser::AShrInstContext *context) override;

    std::any visitAndInst(llvmirParser::AndInstContext *context) override;

    std::any visitOrInst(llvmirParser::OrInstContext *context) override;

    std::any visitXorInst(llvmirParser::XorInstContext *context) override;

    std::any visitAllocaInst(llvmirParser::AllocaInstContext *context) override;

    std::any visitLoadInst(llvmirParser::LoadInstContext *context) override;

    std::any visitGetElementPtrInst(llvmirParser::GetElementPtrInstContext *context) override;

    std::any visitBitCastInst(llvmirParser::BitCastInstContext *context) override;

    std::any visitZExtInst(llvmirParser::ZExtInstContext *context) override;

    std::any visitSExtInst(llvmirParser::SExtInstContext *context) override;

    std::any visitSiToFpInst(llvmirParser::SiToFpInstContext *context) override;

    std::any visitFpToSiInst(llvmirParser::FpToSiInstContext *context) override;

    std::any visitICmpInst(llvmirParser::ICmpInstContext *context) override;

    std::any visitFCmpInst(llvmirParser::FCmpInstContext *context) override;

    std::any visitCallInst(llvmirParser::CallInstContext *context) override;

    std::any visitRetTerm(llvmirParser::RetTermContext *context) override;

    std::any visitBrTerm(llvmirParser::BrTermContext *context) override;

    std::any visitCondBrTerm(llvmirParser::CondBrTermContext *context) override;

    std::any visitFloatKind(llvmirParser::FloatKindContext *context) override;

    std::any visitTypeValue(llvmirParser::TypeValueContext *context) override;

    std::any visitConcreteType(llvmirParser::ConcreteTypeContext *context) override;

    std::any visitValue(llvmirParser::ValueContext *context) override;

    std::any visitConstant(llvmirParser::ConstantContext *context) override;

    std::any visitBoolConst(llvmirParser::BoolConstContext *context) override;

    std::any visitIntConst(llvmirParser::IntConstContext *context) override;

    std::any visitFloatConst(llvmirParser::FloatConstContext *context) override;

    std::any visitNullConst(llvmirParser::NullConstContext *context) override;

    std::any visitNoneConst(llvmirParser::NoneConstContext *context) override;

    std::any visitStructConst(llvmirParser::StructConstContext *context) override;

    std::any visitArrayConst(llvmirParser::ArrayConstContext *context) override;

    std::any visitVectorConst(llvmirParser::VectorConstContext *context) override;

    std::any visitTypeConst(llvmirParser::TypeConstContext *context) override;

    std::any visitType(llvmirParser::TypeContext *context) override;

    std::any visitIntType(llvmirParser::IntTypeContext *context) override;

    std::any visitFloatType(llvmirParser::FloatTypeContext *context) override;

    std::any visitPointerType(llvmirParser::PointerTypeContext *context) override;

    std::any visitVectorType(llvmirParser::VectorTypeContext *context) override;

    std::any visitLabelType(llvmirParser::LabelTypeContext *context) override;

    std::any visitArrayType(llvmirParser::ArrayTypeContext *context) override;

    std::any visitStructType(llvmirParser::StructTypeContext *context) override;

    std::any visitNamedType(llvmirParser::NamedTypeContext *context) override;

    std::any visitMmxType(llvmirParser::MmxTypeContext *context) override;

    std::any visitTokenType(llvmirParser::TokenTypeContext *context) override;

    std::any visitOpaquePointerType(llvmirParser::OpaquePointerTypeContext *context) override;

    std::any visitAddrSpace(llvmirParser::AddrSpaceContext *context) override;

    std::any visitParams(llvmirParser::ParamsContext *context) override;

    std::any visitParam(llvmirParser::ParamContext *context) override;

    std::any visitLabel(llvmirParser::LabelContext *context) override;

    std::any visitIPred(llvmirParser::IPredContext *context) override;

    std::any visitInBounds(llvmirParser::InBoundsContext *context) override;

    std::any visitArgs(llvmirParser::ArgsContext *context) override;

    std::any visitArg(llvmirParser::ArgContext *context) override;

    std::any visitZeroInitializerConst(llvmirParser::ZeroInitializerConstContext *context) override;

    std::any visitFPred(llvmirParser::FPredContext *context) override;
};

