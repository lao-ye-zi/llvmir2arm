
// Generated from llvmir.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  llvmirParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    T__92 = 93, T__93 = 94, T__94 = 95, T__95 = 96, T__96 = 97, T__97 = 98, 
    T__98 = 99, T__99 = 100, T__100 = 101, T__101 = 102, T__102 = 103, T__103 = 104, 
    Comment = 105, WhiteSpace = 106, IntLit = 107, FloatLit = 108, StringLit = 109, 
    GlobalIdent = 110, LocalIdent = 111, LabelIdent = 112, IntType = 113
  };

  enum {
    RuleCompilationUnit = 0, RuleTopLevelEntity = 1, RuleTypeDef = 2, RuleGlobalDecl = 3, 
    RuleGlobalDef = 4, RuleInternalLinkage = 5, RulePreemption = 6, RuleImmutable = 7, 
    RuleFuncDecl = 8, RuleFuncDef = 9, RuleFuncHeader = 10, RuleFuncBody = 11, 
    RuleBasicBlock = 12, RuleInstruction = 13, RuleTerminator = 14, RuleLocalDefInst = 15, 
    RuleValueInstruction = 16, RuleOverflowFlag = 17, RuleAddInst = 18, 
    RuleFAddInst = 19, RuleSubInst = 20, RuleFSubInst = 21, RuleMulInst = 22, 
    RuleFMulInst = 23, RuleUDivInst = 24, RuleSDivInst = 25, RuleFDivInst = 26, 
    RuleURemInst = 27, RuleSRemInst = 28, RuleFRemInst = 29, RuleStoreInst = 30, 
    RuleShlInst = 31, RuleLShrInst = 32, RuleAShrInst = 33, RuleAndInst = 34, 
    RuleOrInst = 35, RuleXorInst = 36, RuleAllocaInst = 37, RuleLoadInst = 38, 
    RuleGetElementPtrInst = 39, RuleBitCastInst = 40, RuleZExtInst = 41, 
    RuleSExtInst = 42, RuleSiToFpInst = 43, RuleFpToSiInst = 44, RuleICmpInst = 45, 
    RuleFCmpInst = 46, RuleCallInst = 47, RuleRetTerm = 48, RuleBrTerm = 49, 
    RuleCondBrTerm = 50, RuleFloatKind = 51, RuleTypeValue = 52, RuleConcreteType = 53, 
    RuleValue = 54, RuleConstant = 55, RuleBoolConst = 56, RuleIntConst = 57, 
    RuleFloatConst = 58, RuleNullConst = 59, RuleNoneConst = 60, RuleStructConst = 61, 
    RuleArrayConst = 62, RuleVectorConst = 63, RuleTypeConst = 64, RuleType = 65, 
    RuleIntType = 66, RuleFloatType = 67, RulePointerType = 68, RuleVectorType = 69, 
    RuleLabelType = 70, RuleArrayType = 71, RuleStructType = 72, RuleNamedType = 73, 
    RuleMmxType = 74, RuleTokenType = 75, RuleOpaquePointerType = 76, RuleAddrSpace = 77, 
    RuleParams = 78, RuleParam = 79, RuleLabel = 80, RuleIPred = 81, RuleInBounds = 82, 
    RuleArgs = 83, RuleArg = 84, RuleZeroInitializerConst = 85, RuleFPred = 86
  };

  explicit llvmirParser(antlr4::TokenStream *input);

  llvmirParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~llvmirParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CompilationUnitContext;
  class TopLevelEntityContext;
  class TypeDefContext;
  class GlobalDeclContext;
  class GlobalDefContext;
  class InternalLinkageContext;
  class PreemptionContext;
  class ImmutableContext;
  class FuncDeclContext;
  class FuncDefContext;
  class FuncHeaderContext;
  class FuncBodyContext;
  class BasicBlockContext;
  class InstructionContext;
  class TerminatorContext;
  class LocalDefInstContext;
  class ValueInstructionContext;
  class OverflowFlagContext;
  class AddInstContext;
  class FAddInstContext;
  class SubInstContext;
  class FSubInstContext;
  class MulInstContext;
  class FMulInstContext;
  class UDivInstContext;
  class SDivInstContext;
  class FDivInstContext;
  class URemInstContext;
  class SRemInstContext;
  class FRemInstContext;
  class StoreInstContext;
  class ShlInstContext;
  class LShrInstContext;
  class AShrInstContext;
  class AndInstContext;
  class OrInstContext;
  class XorInstContext;
  class AllocaInstContext;
  class LoadInstContext;
  class GetElementPtrInstContext;
  class BitCastInstContext;
  class ZExtInstContext;
  class SExtInstContext;
  class SiToFpInstContext;
  class FpToSiInstContext;
  class ICmpInstContext;
  class FCmpInstContext;
  class CallInstContext;
  class RetTermContext;
  class BrTermContext;
  class CondBrTermContext;
  class FloatKindContext;
  class TypeValueContext;
  class ConcreteTypeContext;
  class ValueContext;
  class ConstantContext;
  class BoolConstContext;
  class IntConstContext;
  class FloatConstContext;
  class NullConstContext;
  class NoneConstContext;
  class StructConstContext;
  class ArrayConstContext;
  class VectorConstContext;
  class TypeConstContext;
  class TypeContext;
  class IntTypeContext;
  class FloatTypeContext;
  class PointerTypeContext;
  class VectorTypeContext;
  class LabelTypeContext;
  class ArrayTypeContext;
  class StructTypeContext;
  class NamedTypeContext;
  class MmxTypeContext;
  class TokenTypeContext;
  class OpaquePointerTypeContext;
  class AddrSpaceContext;
  class ParamsContext;
  class ParamContext;
  class LabelContext;
  class IPredContext;
  class InBoundsContext;
  class ArgsContext;
  class ArgContext;
  class ZeroInitializerConstContext;
  class FPredContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<TopLevelEntityContext *> topLevelEntity();
    TopLevelEntityContext* topLevelEntity(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  TopLevelEntityContext : public antlr4::ParserRuleContext {
  public:
    TopLevelEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeDefContext *typeDef();
    GlobalDeclContext *globalDecl();
    GlobalDefContext *globalDef();
    FuncDeclContext *funcDecl();
    FuncDefContext *funcDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopLevelEntityContext* topLevelEntity();

  class  TypeDefContext : public antlr4::ParserRuleContext {
  public:
    TypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocalIdent();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefContext* typeDef();

  class  GlobalDeclContext : public antlr4::ParserRuleContext {
  public:
    GlobalDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GlobalIdent();
    ImmutableContext *immutable();
    TypeContext *type();
    InternalLinkageContext *internalLinkage();
    PreemptionContext *preemption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalDeclContext* globalDecl();

  class  GlobalDefContext : public antlr4::ParserRuleContext {
  public:
    GlobalDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GlobalIdent();
    ImmutableContext *immutable();
    TypeContext *type();
    ConstantContext *constant();
    InternalLinkageContext *internalLinkage();
    PreemptionContext *preemption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalDefContext* globalDef();

  class  InternalLinkageContext : public antlr4::ParserRuleContext {
  public:
    InternalLinkageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InternalLinkageContext* internalLinkage();

  class  PreemptionContext : public antlr4::ParserRuleContext {
  public:
    PreemptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreemptionContext* preemption();

  class  ImmutableContext : public antlr4::ParserRuleContext {
  public:
    ImmutableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImmutableContext* immutable();

  class  FuncDeclContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncHeaderContext *funcHeader();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDeclContext* funcDecl();

  class  FuncDefContext : public antlr4::ParserRuleContext {
  public:
    FuncDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncHeaderContext *funcHeader();
    FuncBodyContext *funcBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDefContext* funcDef();

  class  FuncHeaderContext : public antlr4::ParserRuleContext {
  public:
    FuncHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *GlobalIdent();
    ParamsContext *params();
    PreemptionContext *preemption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncHeaderContext* funcHeader();

  class  FuncBodyContext : public antlr4::ParserRuleContext {
  public:
    FuncBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BasicBlockContext *> basicBlock();
    BasicBlockContext* basicBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncBodyContext* funcBody();

  class  BasicBlockContext : public antlr4::ParserRuleContext {
  public:
    BasicBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TerminatorContext *terminator();
    antlr4::tree::TerminalNode *LabelIdent();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicBlockContext* basicBlock();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalDefInstContext *localDefInst();
    ValueInstructionContext *valueInstruction();
    StoreInstContext *storeInst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  TerminatorContext : public antlr4::ParserRuleContext {
  public:
    TerminatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RetTermContext *retTerm();
    BrTermContext *brTerm();
    CondBrTermContext *condBrTerm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminatorContext* terminator();

  class  LocalDefInstContext : public antlr4::ParserRuleContext {
  public:
    LocalDefInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocalIdent();
    ValueInstructionContext *valueInstruction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalDefInstContext* localDefInst();

  class  ValueInstructionContext : public antlr4::ParserRuleContext {
  public:
    ValueInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddInstContext *addInst();
    FAddInstContext *fAddInst();
    SubInstContext *subInst();
    FSubInstContext *fSubInst();
    MulInstContext *mulInst();
    FMulInstContext *fMulInst();
    UDivInstContext *uDivInst();
    SDivInstContext *sDivInst();
    FDivInstContext *fDivInst();
    URemInstContext *uRemInst();
    SRemInstContext *sRemInst();
    FRemInstContext *fRemInst();
    ShlInstContext *shlInst();
    LShrInstContext *lShrInst();
    AShrInstContext *aShrInst();
    AndInstContext *andInst();
    OrInstContext *orInst();
    XorInstContext *xorInst();
    AllocaInstContext *allocaInst();
    LoadInstContext *loadInst();
    GetElementPtrInstContext *getElementPtrInst();
    ZExtInstContext *zExtInst();
    SExtInstContext *sExtInst();
    SiToFpInstContext *siToFpInst();
    FpToSiInstContext *fpToSiInst();
    BitCastInstContext *bitCastInst();
    ICmpInstContext *iCmpInst();
    FCmpInstContext *fCmpInst();
    CallInstContext *callInst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueInstructionContext* valueInstruction();

  class  OverflowFlagContext : public antlr4::ParserRuleContext {
  public:
    OverflowFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OverflowFlagContext* overflowFlag();

  class  AddInstContext : public antlr4::ParserRuleContext {
  public:
    AddInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();
    std::vector<OverflowFlagContext *> overflowFlag();
    OverflowFlagContext* overflowFlag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddInstContext* addInst();

  class  FAddInstContext : public antlr4::ParserRuleContext {
  public:
    FAddInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FAddInstContext* fAddInst();

  class  SubInstContext : public antlr4::ParserRuleContext {
  public:
    SubInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();
    std::vector<OverflowFlagContext *> overflowFlag();
    OverflowFlagContext* overflowFlag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubInstContext* subInst();

  class  FSubInstContext : public antlr4::ParserRuleContext {
  public:
    FSubInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FSubInstContext* fSubInst();

  class  MulInstContext : public antlr4::ParserRuleContext {
  public:
    MulInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();
    std::vector<OverflowFlagContext *> overflowFlag();
    OverflowFlagContext* overflowFlag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulInstContext* mulInst();

  class  FMulInstContext : public antlr4::ParserRuleContext {
  public:
    FMulInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FMulInstContext* fMulInst();

  class  UDivInstContext : public antlr4::ParserRuleContext {
  public:
    UDivInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UDivInstContext* uDivInst();

  class  SDivInstContext : public antlr4::ParserRuleContext {
  public:
    SDivInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SDivInstContext* sDivInst();

  class  FDivInstContext : public antlr4::ParserRuleContext {
  public:
    FDivInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FDivInstContext* fDivInst();

  class  URemInstContext : public antlr4::ParserRuleContext {
  public:
    URemInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  URemInstContext* uRemInst();

  class  SRemInstContext : public antlr4::ParserRuleContext {
  public:
    SRemInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SRemInstContext* sRemInst();

  class  FRemInstContext : public antlr4::ParserRuleContext {
  public:
    FRemInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FRemInstContext* fRemInst();

  class  StoreInstContext : public antlr4::ParserRuleContext {
  public:
    StoreInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeValueContext *> typeValue();
    TypeValueContext* typeValue(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StoreInstContext* storeInst();

  class  ShlInstContext : public antlr4::ParserRuleContext {
  public:
    ShlInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();
    std::vector<OverflowFlagContext *> overflowFlag();
    OverflowFlagContext* overflowFlag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShlInstContext* shlInst();

  class  LShrInstContext : public antlr4::ParserRuleContext {
  public:
    LShrInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LShrInstContext* lShrInst();

  class  AShrInstContext : public antlr4::ParserRuleContext {
  public:
    AShrInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AShrInstContext* aShrInst();

  class  AndInstContext : public antlr4::ParserRuleContext {
  public:
    AndInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndInstContext* andInst();

  class  OrInstContext : public antlr4::ParserRuleContext {
  public:
    OrInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrInstContext* orInst();

  class  XorInstContext : public antlr4::ParserRuleContext {
  public:
    XorInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XorInstContext* xorInst();

  class  AllocaInstContext : public antlr4::ParserRuleContext {
  public:
    AllocaInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    TypeValueContext *typeValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllocaInstContext* allocaInst();

  class  LoadInstContext : public antlr4::ParserRuleContext {
  public:
    LoadInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    TypeValueContext *typeValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadInstContext* loadInst();

  class  GetElementPtrInstContext : public antlr4::ParserRuleContext {
  public:
    GetElementPtrInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    std::vector<TypeValueContext *> typeValue();
    TypeValueContext* typeValue(size_t i);
    InBoundsContext *inBounds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetElementPtrInstContext* getElementPtrInst();

  class  BitCastInstContext : public antlr4::ParserRuleContext {
  public:
    BitCastInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitCastInstContext* bitCastInst();

  class  ZExtInstContext : public antlr4::ParserRuleContext {
  public:
    ZExtInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ZExtInstContext* zExtInst();

  class  SExtInstContext : public antlr4::ParserRuleContext {
  public:
    SExtInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SExtInstContext* sExtInst();

  class  SiToFpInstContext : public antlr4::ParserRuleContext {
  public:
    SiToFpInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiToFpInstContext* siToFpInst();

  class  FpToSiInstContext : public antlr4::ParserRuleContext {
  public:
    FpToSiInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeValueContext *typeValue();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FpToSiInstContext* fpToSiInst();

  class  ICmpInstContext : public antlr4::ParserRuleContext {
  public:
    ICmpInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IPredContext *iPred();
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ICmpInstContext* iCmpInst();

  class  FCmpInstContext : public antlr4::ParserRuleContext {
  public:
    FCmpInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FPredContext *fPred();
    TypeValueContext *typeValue();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FCmpInstContext* fCmpInst();

  class  CallInstContext : public antlr4::ParserRuleContext {
  public:
    CallInstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ValueContext *value();
    ArgsContext *args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallInstContext* callInst();

  class  RetTermContext : public antlr4::ParserRuleContext {
  public:
    RetTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConcreteTypeContext *concreteType();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetTermContext* retTerm();

  class  BrTermContext : public antlr4::ParserRuleContext {
  public:
    BrTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BrTermContext* brTerm();

  class  CondBrTermContext : public antlr4::ParserRuleContext {
  public:
    CondBrTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntType();
    ValueContext *value();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondBrTermContext* condBrTerm();

  class  FloatKindContext : public antlr4::ParserRuleContext {
  public:
    FloatKindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatKindContext* floatKind();

  class  TypeValueContext : public antlr4::ParserRuleContext {
  public:
    TypeValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConcreteTypeContext *concreteType();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeValueContext* typeValue();

  class  ConcreteTypeContext : public antlr4::ParserRuleContext {
  public:
    ConcreteTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntTypeContext *intType();
    FloatTypeContext *floatType();
    PointerTypeContext *pointerType();
    VectorTypeContext *vectorType();
    LabelTypeContext *labelType();
    ArrayTypeContext *arrayType();
    StructTypeContext *structType();
    NamedTypeContext *namedType();
    MmxTypeContext *mmxType();
    TokenTypeContext *tokenType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConcreteTypeContext* concreteType();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LocalIdent();
    antlr4::tree::TerminalNode *GlobalIdent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolConstContext *boolConst();
    IntConstContext *intConst();
    FloatConstContext *floatConst();
    NullConstContext *nullConst();
    NoneConstContext *noneConst();
    StructConstContext *structConst();
    ArrayConstContext *arrayConst();
    VectorConstContext *vectorConst();
    ZeroInitializerConstContext *zeroInitializerConst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  BoolConstContext : public antlr4::ParserRuleContext {
  public:
    BoolConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolConstContext* boolConst();

  class  IntConstContext : public antlr4::ParserRuleContext {
  public:
    IntConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntConstContext* intConst();

  class  FloatConstContext : public antlr4::ParserRuleContext {
  public:
    FloatConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloatLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatConstContext* floatConst();

  class  NullConstContext : public antlr4::ParserRuleContext {
  public:
    NullConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullConstContext* nullConst();

  class  NoneConstContext : public antlr4::ParserRuleContext {
  public:
    NoneConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoneConstContext* noneConst();

  class  StructConstContext : public antlr4::ParserRuleContext {
  public:
    StructConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeConstContext *> typeConst();
    TypeConstContext* typeConst(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructConstContext* structConst();

  class  ArrayConstContext : public antlr4::ParserRuleContext {
  public:
    ArrayConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeConstContext *> typeConst();
    TypeConstContext* typeConst(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayConstContext* arrayConst();

  class  VectorConstContext : public antlr4::ParserRuleContext {
  public:
    VectorConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeConstContext *> typeConst();
    TypeConstContext* typeConst(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VectorConstContext* vectorConst();

  class  TypeConstContext : public antlr4::ParserRuleContext {
  public:
    TypeConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConcreteTypeContext *concreteType();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeConstContext* typeConst();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntTypeContext *intType();
    FloatTypeContext *floatType();
    OpaquePointerTypeContext *opaquePointerType();
    VectorTypeContext *vectorType();
    LabelTypeContext *labelType();
    ArrayTypeContext *arrayType();
    StructTypeContext *structType();
    NamedTypeContext *namedType();
    MmxTypeContext *mmxType();
    TokenTypeContext *tokenType();
    TypeContext *type();
    ParamsContext *params();
    AddrSpaceContext *addrSpace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();
  TypeContext* type(int precedence);
  class  IntTypeContext : public antlr4::ParserRuleContext {
  public:
    IntTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntTypeContext* intType();

  class  FloatTypeContext : public antlr4::ParserRuleContext {
  public:
    FloatTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FloatKindContext *floatKind();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatTypeContext* floatType();

  class  PointerTypeContext : public antlr4::ParserRuleContext {
  public:
    PointerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    AddrSpaceContext *addrSpace();
    OpaquePointerTypeContext *opaquePointerType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerTypeContext* pointerType();

  class  VectorTypeContext : public antlr4::ParserRuleContext {
  public:
    VectorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VectorTypeContext* vectorType();

  class  LabelTypeContext : public antlr4::ParserRuleContext {
  public:
    LabelTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelTypeContext* labelType();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  StructTypeContext : public antlr4::ParserRuleContext {
  public:
    StructTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructTypeContext* structType();

  class  NamedTypeContext : public antlr4::ParserRuleContext {
  public:
    NamedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocalIdent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedTypeContext* namedType();

  class  MmxTypeContext : public antlr4::ParserRuleContext {
  public:
    MmxTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MmxTypeContext* mmxType();

  class  TokenTypeContext : public antlr4::ParserRuleContext {
  public:
    TokenTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokenTypeContext* tokenType();

  class  OpaquePointerTypeContext : public antlr4::ParserRuleContext {
  public:
    OpaquePointerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddrSpaceContext *addrSpace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpaquePointerTypeContext* opaquePointerType();

  class  AddrSpaceContext : public antlr4::ParserRuleContext {
  public:
    AddrSpaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddrSpaceContext* addrSpace();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamsContext* params();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *LocalIdent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocalIdent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  IPredContext : public antlr4::ParserRuleContext {
  public:
    IPredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IPredContext* iPred();

  class  InBoundsContext : public antlr4::ParserRuleContext {
  public:
    InBoundsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InBoundsContext* inBounds();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConcreteTypeContext *concreteType();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgContext* arg();

  class  ZeroInitializerConstContext : public antlr4::ParserRuleContext {
  public:
    ZeroInitializerConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ZeroInitializerConstContext* zeroInitializerConst();

  class  FPredContext : public antlr4::ParserRuleContext {
  public:
    FPredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FPredContext* fPred();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool typeSempred(TypeContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

