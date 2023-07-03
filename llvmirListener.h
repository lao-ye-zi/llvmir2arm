
// Generated from llvmir.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "llvmirParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by llvmirParser.
 */
class  llvmirListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(llvmirParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(llvmirParser::CompilationUnitContext *ctx) = 0;

  virtual void enterTopLevelEntity(llvmirParser::TopLevelEntityContext *ctx) = 0;
  virtual void exitTopLevelEntity(llvmirParser::TopLevelEntityContext *ctx) = 0;

  virtual void enterTypeDef(llvmirParser::TypeDefContext *ctx) = 0;
  virtual void exitTypeDef(llvmirParser::TypeDefContext *ctx) = 0;

  virtual void enterGlobalDecl(llvmirParser::GlobalDeclContext *ctx) = 0;
  virtual void exitGlobalDecl(llvmirParser::GlobalDeclContext *ctx) = 0;

  virtual void enterGlobalDef(llvmirParser::GlobalDefContext *ctx) = 0;
  virtual void exitGlobalDef(llvmirParser::GlobalDefContext *ctx) = 0;

  virtual void enterInternalLinkage(llvmirParser::InternalLinkageContext *ctx) = 0;
  virtual void exitInternalLinkage(llvmirParser::InternalLinkageContext *ctx) = 0;

  virtual void enterPreemption(llvmirParser::PreemptionContext *ctx) = 0;
  virtual void exitPreemption(llvmirParser::PreemptionContext *ctx) = 0;

  virtual void enterImmutable(llvmirParser::ImmutableContext *ctx) = 0;
  virtual void exitImmutable(llvmirParser::ImmutableContext *ctx) = 0;

  virtual void enterFuncDecl(llvmirParser::FuncDeclContext *ctx) = 0;
  virtual void exitFuncDecl(llvmirParser::FuncDeclContext *ctx) = 0;

  virtual void enterFuncDef(llvmirParser::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(llvmirParser::FuncDefContext *ctx) = 0;

  virtual void enterFuncHeader(llvmirParser::FuncHeaderContext *ctx) = 0;
  virtual void exitFuncHeader(llvmirParser::FuncHeaderContext *ctx) = 0;

  virtual void enterFuncBody(llvmirParser::FuncBodyContext *ctx) = 0;
  virtual void exitFuncBody(llvmirParser::FuncBodyContext *ctx) = 0;

  virtual void enterBasicBlock(llvmirParser::BasicBlockContext *ctx) = 0;
  virtual void exitBasicBlock(llvmirParser::BasicBlockContext *ctx) = 0;

  virtual void enterInstruction(llvmirParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(llvmirParser::InstructionContext *ctx) = 0;

  virtual void enterTerminator(llvmirParser::TerminatorContext *ctx) = 0;
  virtual void exitTerminator(llvmirParser::TerminatorContext *ctx) = 0;

  virtual void enterLocalDefInst(llvmirParser::LocalDefInstContext *ctx) = 0;
  virtual void exitLocalDefInst(llvmirParser::LocalDefInstContext *ctx) = 0;

  virtual void enterValueInstruction(llvmirParser::ValueInstructionContext *ctx) = 0;
  virtual void exitValueInstruction(llvmirParser::ValueInstructionContext *ctx) = 0;

  virtual void enterOverflowFlag(llvmirParser::OverflowFlagContext *ctx) = 0;
  virtual void exitOverflowFlag(llvmirParser::OverflowFlagContext *ctx) = 0;

  virtual void enterAddInst(llvmirParser::AddInstContext *ctx) = 0;
  virtual void exitAddInst(llvmirParser::AddInstContext *ctx) = 0;

  virtual void enterFAddInst(llvmirParser::FAddInstContext *ctx) = 0;
  virtual void exitFAddInst(llvmirParser::FAddInstContext *ctx) = 0;

  virtual void enterSubInst(llvmirParser::SubInstContext *ctx) = 0;
  virtual void exitSubInst(llvmirParser::SubInstContext *ctx) = 0;

  virtual void enterFSubInst(llvmirParser::FSubInstContext *ctx) = 0;
  virtual void exitFSubInst(llvmirParser::FSubInstContext *ctx) = 0;

  virtual void enterMulInst(llvmirParser::MulInstContext *ctx) = 0;
  virtual void exitMulInst(llvmirParser::MulInstContext *ctx) = 0;

  virtual void enterFMulInst(llvmirParser::FMulInstContext *ctx) = 0;
  virtual void exitFMulInst(llvmirParser::FMulInstContext *ctx) = 0;

  virtual void enterUDivInst(llvmirParser::UDivInstContext *ctx) = 0;
  virtual void exitUDivInst(llvmirParser::UDivInstContext *ctx) = 0;

  virtual void enterSDivInst(llvmirParser::SDivInstContext *ctx) = 0;
  virtual void exitSDivInst(llvmirParser::SDivInstContext *ctx) = 0;

  virtual void enterFDivInst(llvmirParser::FDivInstContext *ctx) = 0;
  virtual void exitFDivInst(llvmirParser::FDivInstContext *ctx) = 0;

  virtual void enterURemInst(llvmirParser::URemInstContext *ctx) = 0;
  virtual void exitURemInst(llvmirParser::URemInstContext *ctx) = 0;

  virtual void enterSRemInst(llvmirParser::SRemInstContext *ctx) = 0;
  virtual void exitSRemInst(llvmirParser::SRemInstContext *ctx) = 0;

  virtual void enterFRemInst(llvmirParser::FRemInstContext *ctx) = 0;
  virtual void exitFRemInst(llvmirParser::FRemInstContext *ctx) = 0;

  virtual void enterStoreInst(llvmirParser::StoreInstContext *ctx) = 0;
  virtual void exitStoreInst(llvmirParser::StoreInstContext *ctx) = 0;

  virtual void enterShlInst(llvmirParser::ShlInstContext *ctx) = 0;
  virtual void exitShlInst(llvmirParser::ShlInstContext *ctx) = 0;

  virtual void enterLShrInst(llvmirParser::LShrInstContext *ctx) = 0;
  virtual void exitLShrInst(llvmirParser::LShrInstContext *ctx) = 0;

  virtual void enterAShrInst(llvmirParser::AShrInstContext *ctx) = 0;
  virtual void exitAShrInst(llvmirParser::AShrInstContext *ctx) = 0;

  virtual void enterAndInst(llvmirParser::AndInstContext *ctx) = 0;
  virtual void exitAndInst(llvmirParser::AndInstContext *ctx) = 0;

  virtual void enterOrInst(llvmirParser::OrInstContext *ctx) = 0;
  virtual void exitOrInst(llvmirParser::OrInstContext *ctx) = 0;

  virtual void enterXorInst(llvmirParser::XorInstContext *ctx) = 0;
  virtual void exitXorInst(llvmirParser::XorInstContext *ctx) = 0;

  virtual void enterAllocaInst(llvmirParser::AllocaInstContext *ctx) = 0;
  virtual void exitAllocaInst(llvmirParser::AllocaInstContext *ctx) = 0;

  virtual void enterLoadInst(llvmirParser::LoadInstContext *ctx) = 0;
  virtual void exitLoadInst(llvmirParser::LoadInstContext *ctx) = 0;

  virtual void enterGetElementPtrInst(llvmirParser::GetElementPtrInstContext *ctx) = 0;
  virtual void exitGetElementPtrInst(llvmirParser::GetElementPtrInstContext *ctx) = 0;

  virtual void enterBitCastInst(llvmirParser::BitCastInstContext *ctx) = 0;
  virtual void exitBitCastInst(llvmirParser::BitCastInstContext *ctx) = 0;

  virtual void enterZExtInst(llvmirParser::ZExtInstContext *ctx) = 0;
  virtual void exitZExtInst(llvmirParser::ZExtInstContext *ctx) = 0;

  virtual void enterSExtInst(llvmirParser::SExtInstContext *ctx) = 0;
  virtual void exitSExtInst(llvmirParser::SExtInstContext *ctx) = 0;

  virtual void enterSiToFpInst(llvmirParser::SiToFpInstContext *ctx) = 0;
  virtual void exitSiToFpInst(llvmirParser::SiToFpInstContext *ctx) = 0;

  virtual void enterFpToSiInst(llvmirParser::FpToSiInstContext *ctx) = 0;
  virtual void exitFpToSiInst(llvmirParser::FpToSiInstContext *ctx) = 0;

  virtual void enterICmpInst(llvmirParser::ICmpInstContext *ctx) = 0;
  virtual void exitICmpInst(llvmirParser::ICmpInstContext *ctx) = 0;

  virtual void enterFCmpInst(llvmirParser::FCmpInstContext *ctx) = 0;
  virtual void exitFCmpInst(llvmirParser::FCmpInstContext *ctx) = 0;

  virtual void enterCallInst(llvmirParser::CallInstContext *ctx) = 0;
  virtual void exitCallInst(llvmirParser::CallInstContext *ctx) = 0;

  virtual void enterRetTerm(llvmirParser::RetTermContext *ctx) = 0;
  virtual void exitRetTerm(llvmirParser::RetTermContext *ctx) = 0;

  virtual void enterBrTerm(llvmirParser::BrTermContext *ctx) = 0;
  virtual void exitBrTerm(llvmirParser::BrTermContext *ctx) = 0;

  virtual void enterCondBrTerm(llvmirParser::CondBrTermContext *ctx) = 0;
  virtual void exitCondBrTerm(llvmirParser::CondBrTermContext *ctx) = 0;

  virtual void enterFloatKind(llvmirParser::FloatKindContext *ctx) = 0;
  virtual void exitFloatKind(llvmirParser::FloatKindContext *ctx) = 0;

  virtual void enterTypeValue(llvmirParser::TypeValueContext *ctx) = 0;
  virtual void exitTypeValue(llvmirParser::TypeValueContext *ctx) = 0;

  virtual void enterConcreteType(llvmirParser::ConcreteTypeContext *ctx) = 0;
  virtual void exitConcreteType(llvmirParser::ConcreteTypeContext *ctx) = 0;

  virtual void enterValue(llvmirParser::ValueContext *ctx) = 0;
  virtual void exitValue(llvmirParser::ValueContext *ctx) = 0;

  virtual void enterConstant(llvmirParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(llvmirParser::ConstantContext *ctx) = 0;

  virtual void enterBoolConst(llvmirParser::BoolConstContext *ctx) = 0;
  virtual void exitBoolConst(llvmirParser::BoolConstContext *ctx) = 0;

  virtual void enterIntConst(llvmirParser::IntConstContext *ctx) = 0;
  virtual void exitIntConst(llvmirParser::IntConstContext *ctx) = 0;

  virtual void enterFloatConst(llvmirParser::FloatConstContext *ctx) = 0;
  virtual void exitFloatConst(llvmirParser::FloatConstContext *ctx) = 0;

  virtual void enterNullConst(llvmirParser::NullConstContext *ctx) = 0;
  virtual void exitNullConst(llvmirParser::NullConstContext *ctx) = 0;

  virtual void enterNoneConst(llvmirParser::NoneConstContext *ctx) = 0;
  virtual void exitNoneConst(llvmirParser::NoneConstContext *ctx) = 0;

  virtual void enterStructConst(llvmirParser::StructConstContext *ctx) = 0;
  virtual void exitStructConst(llvmirParser::StructConstContext *ctx) = 0;

  virtual void enterArrayConst(llvmirParser::ArrayConstContext *ctx) = 0;
  virtual void exitArrayConst(llvmirParser::ArrayConstContext *ctx) = 0;

  virtual void enterVectorConst(llvmirParser::VectorConstContext *ctx) = 0;
  virtual void exitVectorConst(llvmirParser::VectorConstContext *ctx) = 0;

  virtual void enterTypeConst(llvmirParser::TypeConstContext *ctx) = 0;
  virtual void exitTypeConst(llvmirParser::TypeConstContext *ctx) = 0;

  virtual void enterType(llvmirParser::TypeContext *ctx) = 0;
  virtual void exitType(llvmirParser::TypeContext *ctx) = 0;

  virtual void enterIntType(llvmirParser::IntTypeContext *ctx) = 0;
  virtual void exitIntType(llvmirParser::IntTypeContext *ctx) = 0;

  virtual void enterFloatType(llvmirParser::FloatTypeContext *ctx) = 0;
  virtual void exitFloatType(llvmirParser::FloatTypeContext *ctx) = 0;

  virtual void enterPointerType(llvmirParser::PointerTypeContext *ctx) = 0;
  virtual void exitPointerType(llvmirParser::PointerTypeContext *ctx) = 0;

  virtual void enterVectorType(llvmirParser::VectorTypeContext *ctx) = 0;
  virtual void exitVectorType(llvmirParser::VectorTypeContext *ctx) = 0;

  virtual void enterLabelType(llvmirParser::LabelTypeContext *ctx) = 0;
  virtual void exitLabelType(llvmirParser::LabelTypeContext *ctx) = 0;

  virtual void enterArrayType(llvmirParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(llvmirParser::ArrayTypeContext *ctx) = 0;

  virtual void enterStructType(llvmirParser::StructTypeContext *ctx) = 0;
  virtual void exitStructType(llvmirParser::StructTypeContext *ctx) = 0;

  virtual void enterNamedType(llvmirParser::NamedTypeContext *ctx) = 0;
  virtual void exitNamedType(llvmirParser::NamedTypeContext *ctx) = 0;

  virtual void enterMmxType(llvmirParser::MmxTypeContext *ctx) = 0;
  virtual void exitMmxType(llvmirParser::MmxTypeContext *ctx) = 0;

  virtual void enterTokenType(llvmirParser::TokenTypeContext *ctx) = 0;
  virtual void exitTokenType(llvmirParser::TokenTypeContext *ctx) = 0;

  virtual void enterOpaquePointerType(llvmirParser::OpaquePointerTypeContext *ctx) = 0;
  virtual void exitOpaquePointerType(llvmirParser::OpaquePointerTypeContext *ctx) = 0;

  virtual void enterAddrSpace(llvmirParser::AddrSpaceContext *ctx) = 0;
  virtual void exitAddrSpace(llvmirParser::AddrSpaceContext *ctx) = 0;

  virtual void enterParams(llvmirParser::ParamsContext *ctx) = 0;
  virtual void exitParams(llvmirParser::ParamsContext *ctx) = 0;

  virtual void enterParam(llvmirParser::ParamContext *ctx) = 0;
  virtual void exitParam(llvmirParser::ParamContext *ctx) = 0;

  virtual void enterLabel(llvmirParser::LabelContext *ctx) = 0;
  virtual void exitLabel(llvmirParser::LabelContext *ctx) = 0;

  virtual void enterIPred(llvmirParser::IPredContext *ctx) = 0;
  virtual void exitIPred(llvmirParser::IPredContext *ctx) = 0;

  virtual void enterInBounds(llvmirParser::InBoundsContext *ctx) = 0;
  virtual void exitInBounds(llvmirParser::InBoundsContext *ctx) = 0;

  virtual void enterArgs(llvmirParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(llvmirParser::ArgsContext *ctx) = 0;

  virtual void enterArg(llvmirParser::ArgContext *ctx) = 0;
  virtual void exitArg(llvmirParser::ArgContext *ctx) = 0;

  virtual void enterZeroInitializerConst(llvmirParser::ZeroInitializerConstContext *ctx) = 0;
  virtual void exitZeroInitializerConst(llvmirParser::ZeroInitializerConstContext *ctx) = 0;

  virtual void enterFPred(llvmirParser::FPredContext *ctx) = 0;
  virtual void exitFPred(llvmirParser::FPredContext *ctx) = 0;


};

