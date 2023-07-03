
// Generated from llvmir.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "llvmirListener.h"


/**
 * This class provides an empty implementation of llvmirListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  llvmirBaseListener : public llvmirListener {
public:

  virtual void enterCompilationUnit(llvmirParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(llvmirParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterTopLevelEntity(llvmirParser::TopLevelEntityContext * /*ctx*/) override { }
  virtual void exitTopLevelEntity(llvmirParser::TopLevelEntityContext * /*ctx*/) override { }

  virtual void enterTypeDef(llvmirParser::TypeDefContext * /*ctx*/) override { }
  virtual void exitTypeDef(llvmirParser::TypeDefContext * /*ctx*/) override { }

  virtual void enterGlobalDecl(llvmirParser::GlobalDeclContext * /*ctx*/) override { }
  virtual void exitGlobalDecl(llvmirParser::GlobalDeclContext * /*ctx*/) override { }

  virtual void enterGlobalDef(llvmirParser::GlobalDefContext * /*ctx*/) override { }
  virtual void exitGlobalDef(llvmirParser::GlobalDefContext * /*ctx*/) override { }

  virtual void enterInternalLinkage(llvmirParser::InternalLinkageContext * /*ctx*/) override { }
  virtual void exitInternalLinkage(llvmirParser::InternalLinkageContext * /*ctx*/) override { }

  virtual void enterPreemption(llvmirParser::PreemptionContext * /*ctx*/) override { }
  virtual void exitPreemption(llvmirParser::PreemptionContext * /*ctx*/) override { }

  virtual void enterImmutable(llvmirParser::ImmutableContext * /*ctx*/) override { }
  virtual void exitImmutable(llvmirParser::ImmutableContext * /*ctx*/) override { }

  virtual void enterFuncDecl(llvmirParser::FuncDeclContext * /*ctx*/) override { }
  virtual void exitFuncDecl(llvmirParser::FuncDeclContext * /*ctx*/) override { }

  virtual void enterFuncDef(llvmirParser::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(llvmirParser::FuncDefContext * /*ctx*/) override { }

  virtual void enterFuncHeader(llvmirParser::FuncHeaderContext * /*ctx*/) override { }
  virtual void exitFuncHeader(llvmirParser::FuncHeaderContext * /*ctx*/) override { }

  virtual void enterFuncBody(llvmirParser::FuncBodyContext * /*ctx*/) override { }
  virtual void exitFuncBody(llvmirParser::FuncBodyContext * /*ctx*/) override { }

  virtual void enterBasicBlock(llvmirParser::BasicBlockContext * /*ctx*/) override { }
  virtual void exitBasicBlock(llvmirParser::BasicBlockContext * /*ctx*/) override { }

  virtual void enterInstruction(llvmirParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(llvmirParser::InstructionContext * /*ctx*/) override { }

  virtual void enterTerminator(llvmirParser::TerminatorContext * /*ctx*/) override { }
  virtual void exitTerminator(llvmirParser::TerminatorContext * /*ctx*/) override { }

  virtual void enterLocalDefInst(llvmirParser::LocalDefInstContext * /*ctx*/) override { }
  virtual void exitLocalDefInst(llvmirParser::LocalDefInstContext * /*ctx*/) override { }

  virtual void enterValueInstruction(llvmirParser::ValueInstructionContext * /*ctx*/) override { }
  virtual void exitValueInstruction(llvmirParser::ValueInstructionContext * /*ctx*/) override { }

  virtual void enterOverflowFlag(llvmirParser::OverflowFlagContext * /*ctx*/) override { }
  virtual void exitOverflowFlag(llvmirParser::OverflowFlagContext * /*ctx*/) override { }

  virtual void enterAddInst(llvmirParser::AddInstContext * /*ctx*/) override { }
  virtual void exitAddInst(llvmirParser::AddInstContext * /*ctx*/) override { }

  virtual void enterFAddInst(llvmirParser::FAddInstContext * /*ctx*/) override { }
  virtual void exitFAddInst(llvmirParser::FAddInstContext * /*ctx*/) override { }

  virtual void enterSubInst(llvmirParser::SubInstContext * /*ctx*/) override { }
  virtual void exitSubInst(llvmirParser::SubInstContext * /*ctx*/) override { }

  virtual void enterFSubInst(llvmirParser::FSubInstContext * /*ctx*/) override { }
  virtual void exitFSubInst(llvmirParser::FSubInstContext * /*ctx*/) override { }

  virtual void enterMulInst(llvmirParser::MulInstContext * /*ctx*/) override { }
  virtual void exitMulInst(llvmirParser::MulInstContext * /*ctx*/) override { }

  virtual void enterFMulInst(llvmirParser::FMulInstContext * /*ctx*/) override { }
  virtual void exitFMulInst(llvmirParser::FMulInstContext * /*ctx*/) override { }

  virtual void enterUDivInst(llvmirParser::UDivInstContext * /*ctx*/) override { }
  virtual void exitUDivInst(llvmirParser::UDivInstContext * /*ctx*/) override { }

  virtual void enterSDivInst(llvmirParser::SDivInstContext * /*ctx*/) override { }
  virtual void exitSDivInst(llvmirParser::SDivInstContext * /*ctx*/) override { }

  virtual void enterFDivInst(llvmirParser::FDivInstContext * /*ctx*/) override { }
  virtual void exitFDivInst(llvmirParser::FDivInstContext * /*ctx*/) override { }

  virtual void enterURemInst(llvmirParser::URemInstContext * /*ctx*/) override { }
  virtual void exitURemInst(llvmirParser::URemInstContext * /*ctx*/) override { }

  virtual void enterSRemInst(llvmirParser::SRemInstContext * /*ctx*/) override { }
  virtual void exitSRemInst(llvmirParser::SRemInstContext * /*ctx*/) override { }

  virtual void enterFRemInst(llvmirParser::FRemInstContext * /*ctx*/) override { }
  virtual void exitFRemInst(llvmirParser::FRemInstContext * /*ctx*/) override { }

  virtual void enterStoreInst(llvmirParser::StoreInstContext * /*ctx*/) override { }
  virtual void exitStoreInst(llvmirParser::StoreInstContext * /*ctx*/) override { }

  virtual void enterShlInst(llvmirParser::ShlInstContext * /*ctx*/) override { }
  virtual void exitShlInst(llvmirParser::ShlInstContext * /*ctx*/) override { }

  virtual void enterLShrInst(llvmirParser::LShrInstContext * /*ctx*/) override { }
  virtual void exitLShrInst(llvmirParser::LShrInstContext * /*ctx*/) override { }

  virtual void enterAShrInst(llvmirParser::AShrInstContext * /*ctx*/) override { }
  virtual void exitAShrInst(llvmirParser::AShrInstContext * /*ctx*/) override { }

  virtual void enterAndInst(llvmirParser::AndInstContext * /*ctx*/) override { }
  virtual void exitAndInst(llvmirParser::AndInstContext * /*ctx*/) override { }

  virtual void enterOrInst(llvmirParser::OrInstContext * /*ctx*/) override { }
  virtual void exitOrInst(llvmirParser::OrInstContext * /*ctx*/) override { }

  virtual void enterXorInst(llvmirParser::XorInstContext * /*ctx*/) override { }
  virtual void exitXorInst(llvmirParser::XorInstContext * /*ctx*/) override { }

  virtual void enterAllocaInst(llvmirParser::AllocaInstContext * /*ctx*/) override { }
  virtual void exitAllocaInst(llvmirParser::AllocaInstContext * /*ctx*/) override { }

  virtual void enterLoadInst(llvmirParser::LoadInstContext * /*ctx*/) override { }
  virtual void exitLoadInst(llvmirParser::LoadInstContext * /*ctx*/) override { }

  virtual void enterGetElementPtrInst(llvmirParser::GetElementPtrInstContext * /*ctx*/) override { }
  virtual void exitGetElementPtrInst(llvmirParser::GetElementPtrInstContext * /*ctx*/) override { }

  virtual void enterBitCastInst(llvmirParser::BitCastInstContext * /*ctx*/) override { }
  virtual void exitBitCastInst(llvmirParser::BitCastInstContext * /*ctx*/) override { }

  virtual void enterZExtInst(llvmirParser::ZExtInstContext * /*ctx*/) override { }
  virtual void exitZExtInst(llvmirParser::ZExtInstContext * /*ctx*/) override { }

  virtual void enterSExtInst(llvmirParser::SExtInstContext * /*ctx*/) override { }
  virtual void exitSExtInst(llvmirParser::SExtInstContext * /*ctx*/) override { }

  virtual void enterSiToFpInst(llvmirParser::SiToFpInstContext * /*ctx*/) override { }
  virtual void exitSiToFpInst(llvmirParser::SiToFpInstContext * /*ctx*/) override { }

  virtual void enterFpToSiInst(llvmirParser::FpToSiInstContext * /*ctx*/) override { }
  virtual void exitFpToSiInst(llvmirParser::FpToSiInstContext * /*ctx*/) override { }

  virtual void enterICmpInst(llvmirParser::ICmpInstContext * /*ctx*/) override { }
  virtual void exitICmpInst(llvmirParser::ICmpInstContext * /*ctx*/) override { }

  virtual void enterFCmpInst(llvmirParser::FCmpInstContext * /*ctx*/) override { }
  virtual void exitFCmpInst(llvmirParser::FCmpInstContext * /*ctx*/) override { }

  virtual void enterCallInst(llvmirParser::CallInstContext * /*ctx*/) override { }
  virtual void exitCallInst(llvmirParser::CallInstContext * /*ctx*/) override { }

  virtual void enterRetTerm(llvmirParser::RetTermContext * /*ctx*/) override { }
  virtual void exitRetTerm(llvmirParser::RetTermContext * /*ctx*/) override { }

  virtual void enterBrTerm(llvmirParser::BrTermContext * /*ctx*/) override { }
  virtual void exitBrTerm(llvmirParser::BrTermContext * /*ctx*/) override { }

  virtual void enterCondBrTerm(llvmirParser::CondBrTermContext * /*ctx*/) override { }
  virtual void exitCondBrTerm(llvmirParser::CondBrTermContext * /*ctx*/) override { }

  virtual void enterFloatKind(llvmirParser::FloatKindContext * /*ctx*/) override { }
  virtual void exitFloatKind(llvmirParser::FloatKindContext * /*ctx*/) override { }

  virtual void enterTypeValue(llvmirParser::TypeValueContext * /*ctx*/) override { }
  virtual void exitTypeValue(llvmirParser::TypeValueContext * /*ctx*/) override { }

  virtual void enterConcreteType(llvmirParser::ConcreteTypeContext * /*ctx*/) override { }
  virtual void exitConcreteType(llvmirParser::ConcreteTypeContext * /*ctx*/) override { }

  virtual void enterValue(llvmirParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(llvmirParser::ValueContext * /*ctx*/) override { }

  virtual void enterConstant(llvmirParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(llvmirParser::ConstantContext * /*ctx*/) override { }

  virtual void enterBoolConst(llvmirParser::BoolConstContext * /*ctx*/) override { }
  virtual void exitBoolConst(llvmirParser::BoolConstContext * /*ctx*/) override { }

  virtual void enterIntConst(llvmirParser::IntConstContext * /*ctx*/) override { }
  virtual void exitIntConst(llvmirParser::IntConstContext * /*ctx*/) override { }

  virtual void enterFloatConst(llvmirParser::FloatConstContext * /*ctx*/) override { }
  virtual void exitFloatConst(llvmirParser::FloatConstContext * /*ctx*/) override { }

  virtual void enterNullConst(llvmirParser::NullConstContext * /*ctx*/) override { }
  virtual void exitNullConst(llvmirParser::NullConstContext * /*ctx*/) override { }

  virtual void enterNoneConst(llvmirParser::NoneConstContext * /*ctx*/) override { }
  virtual void exitNoneConst(llvmirParser::NoneConstContext * /*ctx*/) override { }

  virtual void enterStructConst(llvmirParser::StructConstContext * /*ctx*/) override { }
  virtual void exitStructConst(llvmirParser::StructConstContext * /*ctx*/) override { }

  virtual void enterArrayConst(llvmirParser::ArrayConstContext * /*ctx*/) override { }
  virtual void exitArrayConst(llvmirParser::ArrayConstContext * /*ctx*/) override { }

  virtual void enterVectorConst(llvmirParser::VectorConstContext * /*ctx*/) override { }
  virtual void exitVectorConst(llvmirParser::VectorConstContext * /*ctx*/) override { }

  virtual void enterTypeConst(llvmirParser::TypeConstContext * /*ctx*/) override { }
  virtual void exitTypeConst(llvmirParser::TypeConstContext * /*ctx*/) override { }

  virtual void enterType(llvmirParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(llvmirParser::TypeContext * /*ctx*/) override { }

  virtual void enterIntType(llvmirParser::IntTypeContext * /*ctx*/) override { }
  virtual void exitIntType(llvmirParser::IntTypeContext * /*ctx*/) override { }

  virtual void enterFloatType(llvmirParser::FloatTypeContext * /*ctx*/) override { }
  virtual void exitFloatType(llvmirParser::FloatTypeContext * /*ctx*/) override { }

  virtual void enterPointerType(llvmirParser::PointerTypeContext * /*ctx*/) override { }
  virtual void exitPointerType(llvmirParser::PointerTypeContext * /*ctx*/) override { }

  virtual void enterVectorType(llvmirParser::VectorTypeContext * /*ctx*/) override { }
  virtual void exitVectorType(llvmirParser::VectorTypeContext * /*ctx*/) override { }

  virtual void enterLabelType(llvmirParser::LabelTypeContext * /*ctx*/) override { }
  virtual void exitLabelType(llvmirParser::LabelTypeContext * /*ctx*/) override { }

  virtual void enterArrayType(llvmirParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(llvmirParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterStructType(llvmirParser::StructTypeContext * /*ctx*/) override { }
  virtual void exitStructType(llvmirParser::StructTypeContext * /*ctx*/) override { }

  virtual void enterNamedType(llvmirParser::NamedTypeContext * /*ctx*/) override { }
  virtual void exitNamedType(llvmirParser::NamedTypeContext * /*ctx*/) override { }

  virtual void enterMmxType(llvmirParser::MmxTypeContext * /*ctx*/) override { }
  virtual void exitMmxType(llvmirParser::MmxTypeContext * /*ctx*/) override { }

  virtual void enterTokenType(llvmirParser::TokenTypeContext * /*ctx*/) override { }
  virtual void exitTokenType(llvmirParser::TokenTypeContext * /*ctx*/) override { }

  virtual void enterOpaquePointerType(llvmirParser::OpaquePointerTypeContext * /*ctx*/) override { }
  virtual void exitOpaquePointerType(llvmirParser::OpaquePointerTypeContext * /*ctx*/) override { }

  virtual void enterAddrSpace(llvmirParser::AddrSpaceContext * /*ctx*/) override { }
  virtual void exitAddrSpace(llvmirParser::AddrSpaceContext * /*ctx*/) override { }

  virtual void enterParams(llvmirParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(llvmirParser::ParamsContext * /*ctx*/) override { }

  virtual void enterParam(llvmirParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(llvmirParser::ParamContext * /*ctx*/) override { }

  virtual void enterLabel(llvmirParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(llvmirParser::LabelContext * /*ctx*/) override { }

  virtual void enterIPred(llvmirParser::IPredContext * /*ctx*/) override { }
  virtual void exitIPred(llvmirParser::IPredContext * /*ctx*/) override { }

  virtual void enterInBounds(llvmirParser::InBoundsContext * /*ctx*/) override { }
  virtual void exitInBounds(llvmirParser::InBoundsContext * /*ctx*/) override { }

  virtual void enterArgs(llvmirParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(llvmirParser::ArgsContext * /*ctx*/) override { }

  virtual void enterArg(llvmirParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(llvmirParser::ArgContext * /*ctx*/) override { }

  virtual void enterZeroInitializerConst(llvmirParser::ZeroInitializerConstContext * /*ctx*/) override { }
  virtual void exitZeroInitializerConst(llvmirParser::ZeroInitializerConstContext * /*ctx*/) override { }

  virtual void enterFPred(llvmirParser::FPredContext * /*ctx*/) override { }
  virtual void exitFPred(llvmirParser::FPredContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

