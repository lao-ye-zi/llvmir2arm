
// Generated from llvmir.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "llvmirVisitor.h"


/**
 * This class provides an empty implementation of llvmirVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  llvmirBaseVisitor : public llvmirVisitor {
public:

  virtual std::any visitCompilationUnit(llvmirParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTopLevelEntity(llvmirParser::TopLevelEntityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDef(llvmirParser::TypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobalDecl(llvmirParser::GlobalDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobalDef(llvmirParser::GlobalDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInternalLinkage(llvmirParser::InternalLinkageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPreemption(llvmirParser::PreemptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImmutable(llvmirParser::ImmutableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecl(llvmirParser::FuncDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(llvmirParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncHeader(llvmirParser::FuncHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncBody(llvmirParser::FuncBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasicBlock(llvmirParser::BasicBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstruction(llvmirParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerminator(llvmirParser::TerminatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalDefInst(llvmirParser::LocalDefInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueInstruction(llvmirParser::ValueInstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOverflowFlag(llvmirParser::OverflowFlagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddInst(llvmirParser::AddInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFAddInst(llvmirParser::FAddInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubInst(llvmirParser::SubInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFSubInst(llvmirParser::FSubInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulInst(llvmirParser::MulInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFMulInst(llvmirParser::FMulInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUDivInst(llvmirParser::UDivInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSDivInst(llvmirParser::SDivInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFDivInst(llvmirParser::FDivInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitURemInst(llvmirParser::URemInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSRemInst(llvmirParser::SRemInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFRemInst(llvmirParser::FRemInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStoreInst(llvmirParser::StoreInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShlInst(llvmirParser::ShlInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLShrInst(llvmirParser::LShrInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAShrInst(llvmirParser::AShrInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndInst(llvmirParser::AndInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrInst(llvmirParser::OrInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXorInst(llvmirParser::XorInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocaInst(llvmirParser::AllocaInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoadInst(llvmirParser::LoadInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetElementPtrInst(llvmirParser::GetElementPtrInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitCastInst(llvmirParser::BitCastInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZExtInst(llvmirParser::ZExtInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSExtInst(llvmirParser::SExtInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSiToFpInst(llvmirParser::SiToFpInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFpToSiInst(llvmirParser::FpToSiInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitICmpInst(llvmirParser::ICmpInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFCmpInst(llvmirParser::FCmpInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallInst(llvmirParser::CallInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRetTerm(llvmirParser::RetTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBrTerm(llvmirParser::BrTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondBrTerm(llvmirParser::CondBrTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatKind(llvmirParser::FloatKindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeValue(llvmirParser::TypeValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConcreteType(llvmirParser::ConcreteTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(llvmirParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(llvmirParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolConst(llvmirParser::BoolConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntConst(llvmirParser::IntConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatConst(llvmirParser::FloatConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullConst(llvmirParser::NullConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoneConst(llvmirParser::NoneConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructConst(llvmirParser::StructConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayConst(llvmirParser::ArrayConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVectorConst(llvmirParser::VectorConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeConst(llvmirParser::TypeConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(llvmirParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntType(llvmirParser::IntTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatType(llvmirParser::FloatTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerType(llvmirParser::PointerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVectorType(llvmirParser::VectorTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabelType(llvmirParser::LabelTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayType(llvmirParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructType(llvmirParser::StructTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedType(llvmirParser::NamedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMmxType(llvmirParser::MmxTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTokenType(llvmirParser::TokenTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpaquePointerType(llvmirParser::OpaquePointerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddrSpace(llvmirParser::AddrSpaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams(llvmirParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(llvmirParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(llvmirParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIPred(llvmirParser::IPredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInBounds(llvmirParser::InBoundsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs(llvmirParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg(llvmirParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZeroInitializerConst(llvmirParser::ZeroInitializerConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFPred(llvmirParser::FPredContext *ctx) override {
    return visitChildren(ctx);
  }


};

