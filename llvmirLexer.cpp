
// Generated from llvmir.g4 by ANTLR 4.13.0


#include "llvmirLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct LlvmirLexerStaticData final {
  LlvmirLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LlvmirLexerStaticData(const LlvmirLexerStaticData&) = delete;
  LlvmirLexerStaticData(LlvmirLexerStaticData&&) = delete;
  LlvmirLexerStaticData& operator=(const LlvmirLexerStaticData&) = delete;
  LlvmirLexerStaticData& operator=(LlvmirLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag llvmirlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LlvmirLexerStaticData *llvmirlexerLexerStaticData = nullptr;

void llvmirlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (llvmirlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(llvmirlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LlvmirLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "T__34", "T__35", "T__36", "T__37", "T__38", "T__39", "T__40", 
      "T__41", "T__42", "T__43", "T__44", "T__45", "T__46", "T__47", "T__48", 
      "T__49", "T__50", "T__51", "T__52", "T__53", "T__54", "T__55", "T__56", 
      "T__57", "T__58", "T__59", "T__60", "T__61", "T__62", "T__63", "T__64", 
      "T__65", "T__66", "T__67", "T__68", "T__69", "T__70", "T__71", "T__72", 
      "T__73", "T__74", "T__75", "T__76", "T__77", "T__78", "T__79", "T__80", 
      "T__81", "T__82", "T__83", "T__84", "T__85", "T__86", "T__87", "T__88", 
      "T__89", "T__90", "T__91", "T__92", "T__93", "T__94", "T__95", "T__96", 
      "T__97", "T__98", "T__99", "T__100", "T__101", "T__102", "T__103", 
      "AsciiLetter", "Letter", "EscapeLetter", "DecimalDigit", "HexDigit", 
      "Decimals", "Name", "EscapeName", "Id", "IntHexLit", "Sign", "FracLit", 
      "SciLit", "FloatHexLit", "GlobalName", "GlobalId", "LocalName", "LocalId", 
      "QuotedString", "Comment", "WhiteSpace", "IntLit", "FloatLit", "StringLit", 
      "GlobalIdent", "LocalIdent", "LabelIdent", "IntType"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'type'", "'appending'", "'available_externally'", "'common'", 
      "'internal'", "'linkonce'", "'linkonce_odr'", "'private'", "'weak'", 
      "'weak_odr'", "'dso_local'", "'dso_preemptable'", "'constant'", "'global'", 
      "'declare'", "'define'", "'('", "')'", "'{'", "'}'", "'nsw'", "'nuw'", 
      "'add'", "','", "'fadd'", "'sub'", "'fsub'", "'mul'", "'fmul'", "'udiv'", 
      "'sdiv'", "'fdiv'", "'urem'", "'srem'", "'frem'", "'store'", "'shl'", 
      "'lshr'", "'ashr'", "'and'", "'or'", "'xor'", "'alloca'", "'load'", 
      "'getelementptr'", "'bitcast'", "'to'", "'zext'", "'sext'", "'sitofp'", 
      "'fptosi'", "'icmp'", "'fcmp'", "'call'", "'ret'", "'void'", "'br'", 
      "'half'", "'bfloat'", "'float'", "'double'", "'x86_fp80'", "'fp128'", 
      "'ppc_fp128'", "'true'", "'false'", "'null'", "'none'", "'<'", "'>'", 
      "'['", "']'", "'opaque'", "'*'", "'x'", "'vscale'", "'label'", "'x86_mmx'", 
      "'token'", "'ptr'", "'addrspace'", "'eq'", "'ne'", "'sge'", "'sgt'", 
      "'sle'", "'slt'", "'uge'", "'ugt'", "'ule'", "'ult'", "'inbounds'", 
      "'zeroinitializer'", "'oeq'", "'oge'", "'ogt'", "'ole'", "'olt'", 
      "'one'", "'ord'", "'ueq'", "'une'", "'uno'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "Comment", "WhiteSpace", "IntLit", "FloatLit", "StringLit", 
      "GlobalIdent", "LocalIdent", "LabelIdent", "IntType"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,113,1018,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,
  	7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,
  	14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,
  	21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,
  	28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,
  	35,7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,
  	42,7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,
  	49,7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,
  	56,7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,
  	63,7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,
  	70,7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,
  	77,7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,
  	84,7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,
  	91,7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,
  	98,7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,2,119,7,119,2,120,7,120,2,121,7,121,2,122,
  	7,122,2,123,7,123,2,124,7,124,2,125,7,125,2,126,7,126,2,127,7,127,2,128,
  	7,128,2,129,7,129,2,130,7,130,2,131,7,131,1,0,1,0,1,1,1,1,1,1,1,1,1,1,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,
  	21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,
  	25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,
  	28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,
  	31,1,31,1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,
  	33,1,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,
  	36,1,36,1,36,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,39,1,39,1,
  	39,1,39,1,39,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,
  	43,1,43,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,44,1,45,1,45,1,
  	45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,46,1,46,1,
  	46,1,46,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,48,1,
  	49,1,49,1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,
  	51,1,51,1,51,1,51,1,51,1,52,1,52,1,52,1,52,1,52,1,53,1,53,1,53,1,53,1,
  	53,1,54,1,54,1,54,1,54,1,54,1,55,1,55,1,55,1,55,1,56,1,56,1,56,1,56,1,
  	56,1,57,1,57,1,57,1,58,1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,59,1,59,1,
  	59,1,59,1,60,1,60,1,60,1,60,1,60,1,60,1,61,1,61,1,61,1,61,1,61,1,61,1,
  	61,1,62,1,62,1,62,1,62,1,62,1,62,1,62,1,62,1,62,1,63,1,63,1,63,1,63,1,
  	63,1,63,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,65,1,65,1,
  	65,1,65,1,65,1,66,1,66,1,66,1,66,1,66,1,66,1,67,1,67,1,67,1,67,1,67,1,
  	68,1,68,1,68,1,68,1,68,1,69,1,69,1,70,1,70,1,71,1,71,1,72,1,72,1,73,1,
  	73,1,73,1,73,1,73,1,73,1,73,1,74,1,74,1,75,1,75,1,76,1,76,1,76,1,76,1,
  	76,1,76,1,76,1,77,1,77,1,77,1,77,1,77,1,77,1,78,1,78,1,78,1,78,1,78,1,
  	78,1,78,1,78,1,79,1,79,1,79,1,79,1,79,1,79,1,80,1,80,1,80,1,80,1,81,1,
  	81,1,81,1,81,1,81,1,81,1,81,1,81,1,81,1,81,1,82,1,82,1,82,1,83,1,83,1,
  	83,1,84,1,84,1,84,1,84,1,85,1,85,1,85,1,85,1,86,1,86,1,86,1,86,1,87,1,
  	87,1,87,1,87,1,88,1,88,1,88,1,88,1,89,1,89,1,89,1,89,1,90,1,90,1,90,1,
  	90,1,91,1,91,1,91,1,91,1,92,1,92,1,92,1,92,1,92,1,92,1,92,1,92,1,92,1,
  	93,1,93,1,93,1,93,1,93,1,93,1,93,1,93,1,93,1,93,1,93,1,93,1,93,1,93,1,
  	93,1,93,1,94,1,94,1,94,1,94,1,95,1,95,1,95,1,95,1,96,1,96,1,96,1,96,1,
  	97,1,97,1,97,1,97,1,98,1,98,1,98,1,98,1,99,1,99,1,99,1,99,1,100,1,100,
  	1,100,1,100,1,101,1,101,1,101,1,101,1,102,1,102,1,102,1,102,1,103,1,103,
  	1,103,1,103,1,104,1,104,1,105,1,105,3,105,853,8,105,1,106,1,106,3,106,
  	857,8,106,1,107,1,107,1,108,1,108,3,108,863,8,108,1,109,4,109,866,8,109,
  	11,109,12,109,867,1,110,1,110,1,110,5,110,873,8,110,10,110,12,110,876,
  	9,110,1,111,1,111,1,111,5,111,881,8,111,10,111,12,111,884,9,111,1,112,
  	1,112,1,113,1,113,1,113,1,113,1,113,4,113,893,8,113,11,113,12,113,894,
  	1,114,1,114,1,115,3,115,900,8,115,1,115,1,115,1,115,5,115,905,8,115,10,
  	115,12,115,908,9,115,1,116,1,116,1,116,3,116,913,8,116,1,116,1,116,1,
  	117,1,117,1,117,1,117,3,117,921,8,117,1,117,4,117,924,8,117,11,117,12,
  	117,925,1,118,1,118,1,118,3,118,931,8,118,1,119,1,119,1,119,1,120,1,120,
  	1,120,3,120,939,8,120,1,121,1,121,1,121,1,122,1,122,5,122,946,8,122,10,
  	122,12,122,949,9,122,1,122,1,122,1,123,1,123,5,123,955,8,123,10,123,12,
  	123,958,9,123,1,123,3,123,961,8,123,1,123,1,123,1,123,1,123,1,124,4,124,
  	968,8,124,11,124,12,124,969,1,124,1,124,1,125,3,125,975,8,125,1,125,4,
  	125,978,8,125,11,125,12,125,979,1,125,3,125,983,8,125,1,126,1,126,1,126,
  	3,126,988,8,126,1,127,1,127,1,128,1,128,3,128,994,8,128,1,129,1,129,3,
  	129,998,8,129,1,130,1,130,4,130,1002,8,130,11,130,12,130,1003,1,130,1,
  	130,1,130,1,130,1,130,3,130,1011,8,130,1,131,1,131,4,131,1015,8,131,11,
  	131,12,131,1016,1,956,0,132,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,
  	33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,
  	89,45,91,46,93,47,95,48,97,49,99,50,101,51,103,52,105,53,107,54,109,55,
  	111,56,113,57,115,58,117,59,119,60,121,61,123,62,125,63,127,64,129,65,
  	131,66,133,67,135,68,137,69,139,70,141,71,143,72,145,73,147,74,149,75,
  	151,76,153,77,155,78,157,79,159,80,161,81,163,82,165,83,167,84,169,85,
  	171,86,173,87,175,88,177,89,179,90,181,91,183,92,185,93,187,94,189,95,
  	191,96,193,97,195,98,197,99,199,100,201,101,203,102,205,103,207,104,209,
  	0,211,0,213,0,215,0,217,0,219,0,221,0,223,0,225,0,227,0,229,0,231,0,233,
  	0,235,0,237,0,239,0,241,0,243,0,245,0,247,105,249,106,251,107,253,108,
  	255,109,257,110,259,111,261,112,263,113,1,0,10,2,0,65,90,97,122,3,0,36,
  	36,45,46,95,95,1,0,48,57,2,0,65,70,97,102,2,0,115,115,117,117,2,0,43,
  	43,45,45,2,0,69,69,101,101,3,0,72,72,75,77,82,82,3,0,10,10,13,13,34,34,
  	3,0,9,10,13,13,32,32,1029,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,
  	0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,
  	19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,
  	0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,
  	0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,
  	51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,
  	0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,
  	0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,
  	83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,
  	0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,
  	0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,
  	0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,
  	0,0,0,125,1,0,0,0,0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,
  	0,0,0,135,1,0,0,0,0,137,1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,
  	0,0,0,145,1,0,0,0,0,147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,
  	0,0,0,155,1,0,0,0,0,157,1,0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,
  	0,0,0,165,1,0,0,0,0,167,1,0,0,0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,
  	0,0,0,175,1,0,0,0,0,177,1,0,0,0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,
  	0,0,0,185,1,0,0,0,0,187,1,0,0,0,0,189,1,0,0,0,0,191,1,0,0,0,0,193,1,0,
  	0,0,0,195,1,0,0,0,0,197,1,0,0,0,0,199,1,0,0,0,0,201,1,0,0,0,0,203,1,0,
  	0,0,0,205,1,0,0,0,0,207,1,0,0,0,0,247,1,0,0,0,0,249,1,0,0,0,0,251,1,0,
  	0,0,0,253,1,0,0,0,0,255,1,0,0,0,0,257,1,0,0,0,0,259,1,0,0,0,0,261,1,0,
  	0,0,0,263,1,0,0,0,1,265,1,0,0,0,3,267,1,0,0,0,5,272,1,0,0,0,7,282,1,0,
  	0,0,9,303,1,0,0,0,11,310,1,0,0,0,13,319,1,0,0,0,15,328,1,0,0,0,17,341,
  	1,0,0,0,19,349,1,0,0,0,21,354,1,0,0,0,23,363,1,0,0,0,25,373,1,0,0,0,27,
  	389,1,0,0,0,29,398,1,0,0,0,31,405,1,0,0,0,33,413,1,0,0,0,35,420,1,0,0,
  	0,37,422,1,0,0,0,39,424,1,0,0,0,41,426,1,0,0,0,43,428,1,0,0,0,45,432,
  	1,0,0,0,47,436,1,0,0,0,49,440,1,0,0,0,51,442,1,0,0,0,53,447,1,0,0,0,55,
  	451,1,0,0,0,57,456,1,0,0,0,59,460,1,0,0,0,61,465,1,0,0,0,63,470,1,0,0,
  	0,65,475,1,0,0,0,67,480,1,0,0,0,69,485,1,0,0,0,71,490,1,0,0,0,73,495,
  	1,0,0,0,75,501,1,0,0,0,77,505,1,0,0,0,79,510,1,0,0,0,81,515,1,0,0,0,83,
  	519,1,0,0,0,85,522,1,0,0,0,87,526,1,0,0,0,89,533,1,0,0,0,91,538,1,0,0,
  	0,93,552,1,0,0,0,95,560,1,0,0,0,97,563,1,0,0,0,99,568,1,0,0,0,101,573,
  	1,0,0,0,103,580,1,0,0,0,105,587,1,0,0,0,107,592,1,0,0,0,109,597,1,0,0,
  	0,111,602,1,0,0,0,113,606,1,0,0,0,115,611,1,0,0,0,117,614,1,0,0,0,119,
  	619,1,0,0,0,121,626,1,0,0,0,123,632,1,0,0,0,125,639,1,0,0,0,127,648,1,
  	0,0,0,129,654,1,0,0,0,131,664,1,0,0,0,133,669,1,0,0,0,135,675,1,0,0,0,
  	137,680,1,0,0,0,139,685,1,0,0,0,141,687,1,0,0,0,143,689,1,0,0,0,145,691,
  	1,0,0,0,147,693,1,0,0,0,149,700,1,0,0,0,151,702,1,0,0,0,153,704,1,0,0,
  	0,155,711,1,0,0,0,157,717,1,0,0,0,159,725,1,0,0,0,161,731,1,0,0,0,163,
  	735,1,0,0,0,165,745,1,0,0,0,167,748,1,0,0,0,169,751,1,0,0,0,171,755,1,
  	0,0,0,173,759,1,0,0,0,175,763,1,0,0,0,177,767,1,0,0,0,179,771,1,0,0,0,
  	181,775,1,0,0,0,183,779,1,0,0,0,185,783,1,0,0,0,187,792,1,0,0,0,189,808,
  	1,0,0,0,191,812,1,0,0,0,193,816,1,0,0,0,195,820,1,0,0,0,197,824,1,0,0,
  	0,199,828,1,0,0,0,201,832,1,0,0,0,203,836,1,0,0,0,205,840,1,0,0,0,207,
  	844,1,0,0,0,209,848,1,0,0,0,211,852,1,0,0,0,213,856,1,0,0,0,215,858,1,
  	0,0,0,217,862,1,0,0,0,219,865,1,0,0,0,221,869,1,0,0,0,223,877,1,0,0,0,
  	225,885,1,0,0,0,227,887,1,0,0,0,229,896,1,0,0,0,231,899,1,0,0,0,233,909,
  	1,0,0,0,235,916,1,0,0,0,237,927,1,0,0,0,239,932,1,0,0,0,241,935,1,0,0,
  	0,243,940,1,0,0,0,245,943,1,0,0,0,247,952,1,0,0,0,249,967,1,0,0,0,251,
  	982,1,0,0,0,253,987,1,0,0,0,255,989,1,0,0,0,257,993,1,0,0,0,259,997,1,
  	0,0,0,261,1010,1,0,0,0,263,1012,1,0,0,0,265,266,5,61,0,0,266,2,1,0,0,
  	0,267,268,5,116,0,0,268,269,5,121,0,0,269,270,5,112,0,0,270,271,5,101,
  	0,0,271,4,1,0,0,0,272,273,5,97,0,0,273,274,5,112,0,0,274,275,5,112,0,
  	0,275,276,5,101,0,0,276,277,5,110,0,0,277,278,5,100,0,0,278,279,5,105,
  	0,0,279,280,5,110,0,0,280,281,5,103,0,0,281,6,1,0,0,0,282,283,5,97,0,
  	0,283,284,5,118,0,0,284,285,5,97,0,0,285,286,5,105,0,0,286,287,5,108,
  	0,0,287,288,5,97,0,0,288,289,5,98,0,0,289,290,5,108,0,0,290,291,5,101,
  	0,0,291,292,5,95,0,0,292,293,5,101,0,0,293,294,5,120,0,0,294,295,5,116,
  	0,0,295,296,5,101,0,0,296,297,5,114,0,0,297,298,5,110,0,0,298,299,5,97,
  	0,0,299,300,5,108,0,0,300,301,5,108,0,0,301,302,5,121,0,0,302,8,1,0,0,
  	0,303,304,5,99,0,0,304,305,5,111,0,0,305,306,5,109,0,0,306,307,5,109,
  	0,0,307,308,5,111,0,0,308,309,5,110,0,0,309,10,1,0,0,0,310,311,5,105,
  	0,0,311,312,5,110,0,0,312,313,5,116,0,0,313,314,5,101,0,0,314,315,5,114,
  	0,0,315,316,5,110,0,0,316,317,5,97,0,0,317,318,5,108,0,0,318,12,1,0,0,
  	0,319,320,5,108,0,0,320,321,5,105,0,0,321,322,5,110,0,0,322,323,5,107,
  	0,0,323,324,5,111,0,0,324,325,5,110,0,0,325,326,5,99,0,0,326,327,5,101,
  	0,0,327,14,1,0,0,0,328,329,5,108,0,0,329,330,5,105,0,0,330,331,5,110,
  	0,0,331,332,5,107,0,0,332,333,5,111,0,0,333,334,5,110,0,0,334,335,5,99,
  	0,0,335,336,5,101,0,0,336,337,5,95,0,0,337,338,5,111,0,0,338,339,5,100,
  	0,0,339,340,5,114,0,0,340,16,1,0,0,0,341,342,5,112,0,0,342,343,5,114,
  	0,0,343,344,5,105,0,0,344,345,5,118,0,0,345,346,5,97,0,0,346,347,5,116,
  	0,0,347,348,5,101,0,0,348,18,1,0,0,0,349,350,5,119,0,0,350,351,5,101,
  	0,0,351,352,5,97,0,0,352,353,5,107,0,0,353,20,1,0,0,0,354,355,5,119,0,
  	0,355,356,5,101,0,0,356,357,5,97,0,0,357,358,5,107,0,0,358,359,5,95,0,
  	0,359,360,5,111,0,0,360,361,5,100,0,0,361,362,5,114,0,0,362,22,1,0,0,
  	0,363,364,5,100,0,0,364,365,5,115,0,0,365,366,5,111,0,0,366,367,5,95,
  	0,0,367,368,5,108,0,0,368,369,5,111,0,0,369,370,5,99,0,0,370,371,5,97,
  	0,0,371,372,5,108,0,0,372,24,1,0,0,0,373,374,5,100,0,0,374,375,5,115,
  	0,0,375,376,5,111,0,0,376,377,5,95,0,0,377,378,5,112,0,0,378,379,5,114,
  	0,0,379,380,5,101,0,0,380,381,5,101,0,0,381,382,5,109,0,0,382,383,5,112,
  	0,0,383,384,5,116,0,0,384,385,5,97,0,0,385,386,5,98,0,0,386,387,5,108,
  	0,0,387,388,5,101,0,0,388,26,1,0,0,0,389,390,5,99,0,0,390,391,5,111,0,
  	0,391,392,5,110,0,0,392,393,5,115,0,0,393,394,5,116,0,0,394,395,5,97,
  	0,0,395,396,5,110,0,0,396,397,5,116,0,0,397,28,1,0,0,0,398,399,5,103,
  	0,0,399,400,5,108,0,0,400,401,5,111,0,0,401,402,5,98,0,0,402,403,5,97,
  	0,0,403,404,5,108,0,0,404,30,1,0,0,0,405,406,5,100,0,0,406,407,5,101,
  	0,0,407,408,5,99,0,0,408,409,5,108,0,0,409,410,5,97,0,0,410,411,5,114,
  	0,0,411,412,5,101,0,0,412,32,1,0,0,0,413,414,5,100,0,0,414,415,5,101,
  	0,0,415,416,5,102,0,0,416,417,5,105,0,0,417,418,5,110,0,0,418,419,5,101,
  	0,0,419,34,1,0,0,0,420,421,5,40,0,0,421,36,1,0,0,0,422,423,5,41,0,0,423,
  	38,1,0,0,0,424,425,5,123,0,0,425,40,1,0,0,0,426,427,5,125,0,0,427,42,
  	1,0,0,0,428,429,5,110,0,0,429,430,5,115,0,0,430,431,5,119,0,0,431,44,
  	1,0,0,0,432,433,5,110,0,0,433,434,5,117,0,0,434,435,5,119,0,0,435,46,
  	1,0,0,0,436,437,5,97,0,0,437,438,5,100,0,0,438,439,5,100,0,0,439,48,1,
  	0,0,0,440,441,5,44,0,0,441,50,1,0,0,0,442,443,5,102,0,0,443,444,5,97,
  	0,0,444,445,5,100,0,0,445,446,5,100,0,0,446,52,1,0,0,0,447,448,5,115,
  	0,0,448,449,5,117,0,0,449,450,5,98,0,0,450,54,1,0,0,0,451,452,5,102,0,
  	0,452,453,5,115,0,0,453,454,5,117,0,0,454,455,5,98,0,0,455,56,1,0,0,0,
  	456,457,5,109,0,0,457,458,5,117,0,0,458,459,5,108,0,0,459,58,1,0,0,0,
  	460,461,5,102,0,0,461,462,5,109,0,0,462,463,5,117,0,0,463,464,5,108,0,
  	0,464,60,1,0,0,0,465,466,5,117,0,0,466,467,5,100,0,0,467,468,5,105,0,
  	0,468,469,5,118,0,0,469,62,1,0,0,0,470,471,5,115,0,0,471,472,5,100,0,
  	0,472,473,5,105,0,0,473,474,5,118,0,0,474,64,1,0,0,0,475,476,5,102,0,
  	0,476,477,5,100,0,0,477,478,5,105,0,0,478,479,5,118,0,0,479,66,1,0,0,
  	0,480,481,5,117,0,0,481,482,5,114,0,0,482,483,5,101,0,0,483,484,5,109,
  	0,0,484,68,1,0,0,0,485,486,5,115,0,0,486,487,5,114,0,0,487,488,5,101,
  	0,0,488,489,5,109,0,0,489,70,1,0,0,0,490,491,5,102,0,0,491,492,5,114,
  	0,0,492,493,5,101,0,0,493,494,5,109,0,0,494,72,1,0,0,0,495,496,5,115,
  	0,0,496,497,5,116,0,0,497,498,5,111,0,0,498,499,5,114,0,0,499,500,5,101,
  	0,0,500,74,1,0,0,0,501,502,5,115,0,0,502,503,5,104,0,0,503,504,5,108,
  	0,0,504,76,1,0,0,0,505,506,5,108,0,0,506,507,5,115,0,0,507,508,5,104,
  	0,0,508,509,5,114,0,0,509,78,1,0,0,0,510,511,5,97,0,0,511,512,5,115,0,
  	0,512,513,5,104,0,0,513,514,5,114,0,0,514,80,1,0,0,0,515,516,5,97,0,0,
  	516,517,5,110,0,0,517,518,5,100,0,0,518,82,1,0,0,0,519,520,5,111,0,0,
  	520,521,5,114,0,0,521,84,1,0,0,0,522,523,5,120,0,0,523,524,5,111,0,0,
  	524,525,5,114,0,0,525,86,1,0,0,0,526,527,5,97,0,0,527,528,5,108,0,0,528,
  	529,5,108,0,0,529,530,5,111,0,0,530,531,5,99,0,0,531,532,5,97,0,0,532,
  	88,1,0,0,0,533,534,5,108,0,0,534,535,5,111,0,0,535,536,5,97,0,0,536,537,
  	5,100,0,0,537,90,1,0,0,0,538,539,5,103,0,0,539,540,5,101,0,0,540,541,
  	5,116,0,0,541,542,5,101,0,0,542,543,5,108,0,0,543,544,5,101,0,0,544,545,
  	5,109,0,0,545,546,5,101,0,0,546,547,5,110,0,0,547,548,5,116,0,0,548,549,
  	5,112,0,0,549,550,5,116,0,0,550,551,5,114,0,0,551,92,1,0,0,0,552,553,
  	5,98,0,0,553,554,5,105,0,0,554,555,5,116,0,0,555,556,5,99,0,0,556,557,
  	5,97,0,0,557,558,5,115,0,0,558,559,5,116,0,0,559,94,1,0,0,0,560,561,5,
  	116,0,0,561,562,5,111,0,0,562,96,1,0,0,0,563,564,5,122,0,0,564,565,5,
  	101,0,0,565,566,5,120,0,0,566,567,5,116,0,0,567,98,1,0,0,0,568,569,5,
  	115,0,0,569,570,5,101,0,0,570,571,5,120,0,0,571,572,5,116,0,0,572,100,
  	1,0,0,0,573,574,5,115,0,0,574,575,5,105,0,0,575,576,5,116,0,0,576,577,
  	5,111,0,0,577,578,5,102,0,0,578,579,5,112,0,0,579,102,1,0,0,0,580,581,
  	5,102,0,0,581,582,5,112,0,0,582,583,5,116,0,0,583,584,5,111,0,0,584,585,
  	5,115,0,0,585,586,5,105,0,0,586,104,1,0,0,0,587,588,5,105,0,0,588,589,
  	5,99,0,0,589,590,5,109,0,0,590,591,5,112,0,0,591,106,1,0,0,0,592,593,
  	5,102,0,0,593,594,5,99,0,0,594,595,5,109,0,0,595,596,5,112,0,0,596,108,
  	1,0,0,0,597,598,5,99,0,0,598,599,5,97,0,0,599,600,5,108,0,0,600,601,5,
  	108,0,0,601,110,1,0,0,0,602,603,5,114,0,0,603,604,5,101,0,0,604,605,5,
  	116,0,0,605,112,1,0,0,0,606,607,5,118,0,0,607,608,5,111,0,0,608,609,5,
  	105,0,0,609,610,5,100,0,0,610,114,1,0,0,0,611,612,5,98,0,0,612,613,5,
  	114,0,0,613,116,1,0,0,0,614,615,5,104,0,0,615,616,5,97,0,0,616,617,5,
  	108,0,0,617,618,5,102,0,0,618,118,1,0,0,0,619,620,5,98,0,0,620,621,5,
  	102,0,0,621,622,5,108,0,0,622,623,5,111,0,0,623,624,5,97,0,0,624,625,
  	5,116,0,0,625,120,1,0,0,0,626,627,5,102,0,0,627,628,5,108,0,0,628,629,
  	5,111,0,0,629,630,5,97,0,0,630,631,5,116,0,0,631,122,1,0,0,0,632,633,
  	5,100,0,0,633,634,5,111,0,0,634,635,5,117,0,0,635,636,5,98,0,0,636,637,
  	5,108,0,0,637,638,5,101,0,0,638,124,1,0,0,0,639,640,5,120,0,0,640,641,
  	5,56,0,0,641,642,5,54,0,0,642,643,5,95,0,0,643,644,5,102,0,0,644,645,
  	5,112,0,0,645,646,5,56,0,0,646,647,5,48,0,0,647,126,1,0,0,0,648,649,5,
  	102,0,0,649,650,5,112,0,0,650,651,5,49,0,0,651,652,5,50,0,0,652,653,5,
  	56,0,0,653,128,1,0,0,0,654,655,5,112,0,0,655,656,5,112,0,0,656,657,5,
  	99,0,0,657,658,5,95,0,0,658,659,5,102,0,0,659,660,5,112,0,0,660,661,5,
  	49,0,0,661,662,5,50,0,0,662,663,5,56,0,0,663,130,1,0,0,0,664,665,5,116,
  	0,0,665,666,5,114,0,0,666,667,5,117,0,0,667,668,5,101,0,0,668,132,1,0,
  	0,0,669,670,5,102,0,0,670,671,5,97,0,0,671,672,5,108,0,0,672,673,5,115,
  	0,0,673,674,5,101,0,0,674,134,1,0,0,0,675,676,5,110,0,0,676,677,5,117,
  	0,0,677,678,5,108,0,0,678,679,5,108,0,0,679,136,1,0,0,0,680,681,5,110,
  	0,0,681,682,5,111,0,0,682,683,5,110,0,0,683,684,5,101,0,0,684,138,1,0,
  	0,0,685,686,5,60,0,0,686,140,1,0,0,0,687,688,5,62,0,0,688,142,1,0,0,0,
  	689,690,5,91,0,0,690,144,1,0,0,0,691,692,5,93,0,0,692,146,1,0,0,0,693,
  	694,5,111,0,0,694,695,5,112,0,0,695,696,5,97,0,0,696,697,5,113,0,0,697,
  	698,5,117,0,0,698,699,5,101,0,0,699,148,1,0,0,0,700,701,5,42,0,0,701,
  	150,1,0,0,0,702,703,5,120,0,0,703,152,1,0,0,0,704,705,5,118,0,0,705,706,
  	5,115,0,0,706,707,5,99,0,0,707,708,5,97,0,0,708,709,5,108,0,0,709,710,
  	5,101,0,0,710,154,1,0,0,0,711,712,5,108,0,0,712,713,5,97,0,0,713,714,
  	5,98,0,0,714,715,5,101,0,0,715,716,5,108,0,0,716,156,1,0,0,0,717,718,
  	5,120,0,0,718,719,5,56,0,0,719,720,5,54,0,0,720,721,5,95,0,0,721,722,
  	5,109,0,0,722,723,5,109,0,0,723,724,5,120,0,0,724,158,1,0,0,0,725,726,
  	5,116,0,0,726,727,5,111,0,0,727,728,5,107,0,0,728,729,5,101,0,0,729,730,
  	5,110,0,0,730,160,1,0,0,0,731,732,5,112,0,0,732,733,5,116,0,0,733,734,
  	5,114,0,0,734,162,1,0,0,0,735,736,5,97,0,0,736,737,5,100,0,0,737,738,
  	5,100,0,0,738,739,5,114,0,0,739,740,5,115,0,0,740,741,5,112,0,0,741,742,
  	5,97,0,0,742,743,5,99,0,0,743,744,5,101,0,0,744,164,1,0,0,0,745,746,5,
  	101,0,0,746,747,5,113,0,0,747,166,1,0,0,0,748,749,5,110,0,0,749,750,5,
  	101,0,0,750,168,1,0,0,0,751,752,5,115,0,0,752,753,5,103,0,0,753,754,5,
  	101,0,0,754,170,1,0,0,0,755,756,5,115,0,0,756,757,5,103,0,0,757,758,5,
  	116,0,0,758,172,1,0,0,0,759,760,5,115,0,0,760,761,5,108,0,0,761,762,5,
  	101,0,0,762,174,1,0,0,0,763,764,5,115,0,0,764,765,5,108,0,0,765,766,5,
  	116,0,0,766,176,1,0,0,0,767,768,5,117,0,0,768,769,5,103,0,0,769,770,5,
  	101,0,0,770,178,1,0,0,0,771,772,5,117,0,0,772,773,5,103,0,0,773,774,5,
  	116,0,0,774,180,1,0,0,0,775,776,5,117,0,0,776,777,5,108,0,0,777,778,5,
  	101,0,0,778,182,1,0,0,0,779,780,5,117,0,0,780,781,5,108,0,0,781,782,5,
  	116,0,0,782,184,1,0,0,0,783,784,5,105,0,0,784,785,5,110,0,0,785,786,5,
  	98,0,0,786,787,5,111,0,0,787,788,5,117,0,0,788,789,5,110,0,0,789,790,
  	5,100,0,0,790,791,5,115,0,0,791,186,1,0,0,0,792,793,5,122,0,0,793,794,
  	5,101,0,0,794,795,5,114,0,0,795,796,5,111,0,0,796,797,5,105,0,0,797,798,
  	5,110,0,0,798,799,5,105,0,0,799,800,5,116,0,0,800,801,5,105,0,0,801,802,
  	5,97,0,0,802,803,5,108,0,0,803,804,5,105,0,0,804,805,5,122,0,0,805,806,
  	5,101,0,0,806,807,5,114,0,0,807,188,1,0,0,0,808,809,5,111,0,0,809,810,
  	5,101,0,0,810,811,5,113,0,0,811,190,1,0,0,0,812,813,5,111,0,0,813,814,
  	5,103,0,0,814,815,5,101,0,0,815,192,1,0,0,0,816,817,5,111,0,0,817,818,
  	5,103,0,0,818,819,5,116,0,0,819,194,1,0,0,0,820,821,5,111,0,0,821,822,
  	5,108,0,0,822,823,5,101,0,0,823,196,1,0,0,0,824,825,5,111,0,0,825,826,
  	5,108,0,0,826,827,5,116,0,0,827,198,1,0,0,0,828,829,5,111,0,0,829,830,
  	5,110,0,0,830,831,5,101,0,0,831,200,1,0,0,0,832,833,5,111,0,0,833,834,
  	5,114,0,0,834,835,5,100,0,0,835,202,1,0,0,0,836,837,5,117,0,0,837,838,
  	5,101,0,0,838,839,5,113,0,0,839,204,1,0,0,0,840,841,5,117,0,0,841,842,
  	5,110,0,0,842,843,5,101,0,0,843,206,1,0,0,0,844,845,5,117,0,0,845,846,
  	5,110,0,0,846,847,5,111,0,0,847,208,1,0,0,0,848,849,7,0,0,0,849,210,1,
  	0,0,0,850,853,3,209,104,0,851,853,7,1,0,0,852,850,1,0,0,0,852,851,1,0,
  	0,0,853,212,1,0,0,0,854,857,3,211,105,0,855,857,5,92,0,0,856,854,1,0,
  	0,0,856,855,1,0,0,0,857,214,1,0,0,0,858,859,7,2,0,0,859,216,1,0,0,0,860,
  	863,7,3,0,0,861,863,3,215,107,0,862,860,1,0,0,0,862,861,1,0,0,0,863,218,
  	1,0,0,0,864,866,3,215,107,0,865,864,1,0,0,0,866,867,1,0,0,0,867,865,1,
  	0,0,0,867,868,1,0,0,0,868,220,1,0,0,0,869,874,3,211,105,0,870,873,3,211,
  	105,0,871,873,3,215,107,0,872,870,1,0,0,0,872,871,1,0,0,0,873,876,1,0,
  	0,0,874,872,1,0,0,0,874,875,1,0,0,0,875,222,1,0,0,0,876,874,1,0,0,0,877,
  	882,3,213,106,0,878,881,3,213,106,0,879,881,3,215,107,0,880,878,1,0,0,
  	0,880,879,1,0,0,0,881,884,1,0,0,0,882,880,1,0,0,0,882,883,1,0,0,0,883,
  	224,1,0,0,0,884,882,1,0,0,0,885,886,3,219,109,0,886,226,1,0,0,0,887,888,
  	7,4,0,0,888,889,5,48,0,0,889,890,5,120,0,0,890,892,1,0,0,0,891,893,3,
  	217,108,0,892,891,1,0,0,0,893,894,1,0,0,0,894,892,1,0,0,0,894,895,1,0,
  	0,0,895,228,1,0,0,0,896,897,7,5,0,0,897,230,1,0,0,0,898,900,3,229,114,
  	0,899,898,1,0,0,0,899,900,1,0,0,0,900,901,1,0,0,0,901,902,3,219,109,0,
  	902,906,5,46,0,0,903,905,3,215,107,0,904,903,1,0,0,0,905,908,1,0,0,0,
  	906,904,1,0,0,0,906,907,1,0,0,0,907,232,1,0,0,0,908,906,1,0,0,0,909,910,
  	3,231,115,0,910,912,7,6,0,0,911,913,3,229,114,0,912,911,1,0,0,0,912,913,
  	1,0,0,0,913,914,1,0,0,0,914,915,3,219,109,0,915,234,1,0,0,0,916,917,5,
  	48,0,0,917,918,5,120,0,0,918,920,1,0,0,0,919,921,7,7,0,0,920,919,1,0,
  	0,0,920,921,1,0,0,0,921,923,1,0,0,0,922,924,3,217,108,0,923,922,1,0,0,
  	0,924,925,1,0,0,0,925,923,1,0,0,0,925,926,1,0,0,0,926,236,1,0,0,0,927,
  	930,5,64,0,0,928,931,3,221,110,0,929,931,3,245,122,0,930,928,1,0,0,0,
  	930,929,1,0,0,0,931,238,1,0,0,0,932,933,5,64,0,0,933,934,3,225,112,0,
  	934,240,1,0,0,0,935,938,5,37,0,0,936,939,3,221,110,0,937,939,3,245,122,
  	0,938,936,1,0,0,0,938,937,1,0,0,0,939,242,1,0,0,0,940,941,5,37,0,0,941,
  	942,3,225,112,0,942,244,1,0,0,0,943,947,5,34,0,0,944,946,8,8,0,0,945,
  	944,1,0,0,0,946,949,1,0,0,0,947,945,1,0,0,0,947,948,1,0,0,0,948,950,1,
  	0,0,0,949,947,1,0,0,0,950,951,5,34,0,0,951,246,1,0,0,0,952,956,5,59,0,
  	0,953,955,9,0,0,0,954,953,1,0,0,0,955,958,1,0,0,0,956,957,1,0,0,0,956,
  	954,1,0,0,0,957,960,1,0,0,0,958,956,1,0,0,0,959,961,5,13,0,0,960,959,
  	1,0,0,0,960,961,1,0,0,0,961,962,1,0,0,0,962,963,5,10,0,0,963,964,1,0,
  	0,0,964,965,6,123,0,0,965,248,1,0,0,0,966,968,7,9,0,0,967,966,1,0,0,0,
  	968,969,1,0,0,0,969,967,1,0,0,0,969,970,1,0,0,0,970,971,1,0,0,0,971,972,
  	6,124,1,0,972,250,1,0,0,0,973,975,5,45,0,0,974,973,1,0,0,0,974,975,1,
  	0,0,0,975,977,1,0,0,0,976,978,3,215,107,0,977,976,1,0,0,0,978,979,1,0,
  	0,0,979,977,1,0,0,0,979,980,1,0,0,0,980,983,1,0,0,0,981,983,3,227,113,
  	0,982,974,1,0,0,0,982,981,1,0,0,0,983,252,1,0,0,0,984,988,3,231,115,0,
  	985,988,3,233,116,0,986,988,3,235,117,0,987,984,1,0,0,0,987,985,1,0,0,
  	0,987,986,1,0,0,0,988,254,1,0,0,0,989,990,3,245,122,0,990,256,1,0,0,0,
  	991,994,3,237,118,0,992,994,3,239,119,0,993,991,1,0,0,0,993,992,1,0,0,
  	0,994,258,1,0,0,0,995,998,3,241,120,0,996,998,3,243,121,0,997,995,1,0,
  	0,0,997,996,1,0,0,0,998,260,1,0,0,0,999,1002,3,211,105,0,1000,1002,3,
  	215,107,0,1001,999,1,0,0,0,1001,1000,1,0,0,0,1002,1003,1,0,0,0,1003,1001,
  	1,0,0,0,1003,1004,1,0,0,0,1004,1005,1,0,0,0,1005,1006,5,58,0,0,1006,1011,
  	1,0,0,0,1007,1008,3,245,122,0,1008,1009,5,58,0,0,1009,1011,1,0,0,0,1010,
  	1001,1,0,0,0,1010,1007,1,0,0,0,1011,262,1,0,0,0,1012,1014,5,105,0,0,1013,
  	1015,3,215,107,0,1014,1013,1,0,0,0,1015,1016,1,0,0,0,1016,1014,1,0,0,
  	0,1016,1017,1,0,0,0,1017,264,1,0,0,0,31,0,852,856,862,867,872,874,880,
  	882,894,899,906,912,920,925,930,938,947,956,960,969,974,979,982,987,993,
  	997,1001,1003,1010,1016,2,0,1,0,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  llvmirlexerLexerStaticData = staticData.release();
}

}

llvmirLexer::llvmirLexer(CharStream *input) : Lexer(input) {
  llvmirLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *llvmirlexerLexerStaticData->atn, llvmirlexerLexerStaticData->decisionToDFA, llvmirlexerLexerStaticData->sharedContextCache);
}

llvmirLexer::~llvmirLexer() {
  delete _interpreter;
}

std::string llvmirLexer::getGrammarFileName() const {
  return "llvmir.g4";
}

const std::vector<std::string>& llvmirLexer::getRuleNames() const {
  return llvmirlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& llvmirLexer::getChannelNames() const {
  return llvmirlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& llvmirLexer::getModeNames() const {
  return llvmirlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& llvmirLexer::getVocabulary() const {
  return llvmirlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView llvmirLexer::getSerializedATN() const {
  return llvmirlexerLexerStaticData->serializedATN;
}

const atn::ATN& llvmirLexer::getATN() const {
  return *llvmirlexerLexerStaticData->atn;
}




void llvmirLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  llvmirlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(llvmirlexerLexerOnceFlag, llvmirlexerLexerInitialize);
#endif
}