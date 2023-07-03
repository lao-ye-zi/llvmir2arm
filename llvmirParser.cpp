
// Generated from llvmir.g4 by ANTLR 4.13.0


#include "llvmirListener.h"
#include "llvmirVisitor.h"

#include "llvmirParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LlvmirParserStaticData final {
  LlvmirParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LlvmirParserStaticData(const LlvmirParserStaticData&) = delete;
  LlvmirParserStaticData(LlvmirParserStaticData&&) = delete;
  LlvmirParserStaticData& operator=(const LlvmirParserStaticData&) = delete;
  LlvmirParserStaticData& operator=(LlvmirParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag llvmirParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LlvmirParserStaticData *llvmirParserStaticData = nullptr;

void llvmirParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (llvmirParserStaticData != nullptr) {
    return;
  }
#else
  assert(llvmirParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LlvmirParserStaticData>(
    std::vector<std::string>{
      "compilationUnit", "topLevelEntity", "typeDef", "globalDecl", "globalDef", 
      "internalLinkage", "preemption", "immutable", "funcDecl", "funcDef", 
      "funcHeader", "funcBody", "basicBlock", "instruction", "terminator", 
      "localDefInst", "valueInstruction", "overflowFlag", "addInst", "fAddInst", 
      "subInst", "fSubInst", "mulInst", "fMulInst", "uDivInst", "sDivInst", 
      "fDivInst", "uRemInst", "sRemInst", "fRemInst", "storeInst", "shlInst", 
      "lShrInst", "aShrInst", "andInst", "orInst", "xorInst", "allocaInst", 
      "loadInst", "getElementPtrInst", "bitCastInst", "zExtInst", "sExtInst", 
      "siToFpInst", "fpToSiInst", "iCmpInst", "fCmpInst", "callInst", "retTerm", 
      "brTerm", "condBrTerm", "floatKind", "typeValue", "concreteType", 
      "value", "constant", "boolConst", "intConst", "floatConst", "nullConst", 
      "noneConst", "structConst", "arrayConst", "vectorConst", "typeConst", 
      "type", "intType", "floatType", "pointerType", "vectorType", "labelType", 
      "arrayType", "structType", "namedType", "mmxType", "tokenType", "opaquePointerType", 
      "addrSpace", "params", "param", "label", "iPred", "inBounds", "args", 
      "arg", "zeroInitializerConst", "fPred"
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
  	4,1,113,761,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,7,
  	70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,7,
  	77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,7,
  	84,2,85,7,85,2,86,7,86,1,0,5,0,176,8,0,10,0,12,0,179,9,0,1,0,1,0,1,1,
  	1,1,1,1,1,1,1,1,3,1,188,8,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,3,3,198,8,
  	3,1,3,3,3,201,8,3,1,3,1,3,1,3,1,4,1,4,1,4,3,4,209,8,4,1,4,3,4,212,8,4,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,
  	10,3,10,232,8,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,4,11,242,8,11,
  	11,11,12,11,243,1,11,1,11,1,12,3,12,249,8,12,1,12,5,12,252,8,12,10,12,
  	12,12,255,9,12,1,12,1,12,1,13,1,13,1,13,3,13,262,8,13,1,14,1,14,1,14,
  	3,14,267,8,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,302,8,16,1,17,1,17,1,18,
  	1,18,5,18,308,8,18,10,18,12,18,311,9,18,1,18,1,18,1,18,1,18,1,19,1,19,
  	1,19,1,19,1,19,1,20,1,20,5,20,324,8,20,10,20,12,20,327,9,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,5,22,340,8,22,10,22,12,22,
  	343,9,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,
  	1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,27,
  	1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,30,
  	1,30,1,30,1,30,1,30,1,31,1,31,5,31,391,8,31,10,31,12,31,394,9,31,1,31,
  	1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,34,
  	1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,36,
  	1,37,1,37,1,37,1,37,3,37,429,8,37,1,38,1,38,1,38,1,38,1,38,1,39,1,39,
  	3,39,438,8,39,1,39,1,39,1,39,1,39,1,39,5,39,445,8,39,10,39,12,39,448,
  	9,39,1,40,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,1,42,1,42,1,42,
  	1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,44,1,45,1,45,
  	1,45,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,
  	1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,48,1,48,3,48,500,8,48,1,49,1,49,
  	1,49,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,52,1,52,1,52,
  	1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,3,53,528,8,53,1,54,
  	1,54,1,54,3,54,533,8,54,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,
  	3,55,544,8,55,1,56,1,56,1,57,1,57,1,58,1,58,1,59,1,59,1,60,1,60,1,61,
  	1,61,1,61,1,61,5,61,560,8,61,10,61,12,61,563,9,61,3,61,565,8,61,1,61,
  	1,61,1,61,1,61,1,61,1,61,5,61,573,8,61,10,61,12,61,576,9,61,3,61,578,
  	8,61,1,61,1,61,3,61,582,8,61,1,62,1,62,1,62,1,62,5,62,588,8,62,10,62,
  	12,62,591,9,62,3,62,593,8,62,1,62,1,62,1,63,1,63,1,63,1,63,5,63,601,8,
  	63,10,63,12,63,604,9,63,3,63,606,8,63,1,63,1,63,1,64,1,64,1,64,1,65,1,
  	65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,3,65,626,8,
  	65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,3,65,635,8,65,1,65,5,65,638,8,65,
  	10,65,12,65,641,9,65,1,66,1,66,1,67,1,67,1,68,1,68,3,68,649,8,68,1,68,
  	1,68,1,68,3,68,654,8,68,1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,69,
  	1,69,1,69,1,69,1,69,1,69,3,69,670,8,69,1,70,1,70,1,71,1,71,1,71,1,71,
  	1,71,1,71,1,72,1,72,1,72,1,72,5,72,684,8,72,10,72,12,72,687,9,72,3,72,
  	689,8,72,1,72,1,72,1,72,1,72,1,72,1,72,5,72,697,8,72,10,72,12,72,700,
  	9,72,3,72,702,8,72,1,72,1,72,3,72,706,8,72,1,73,1,73,1,74,1,74,1,75,1,
  	75,1,76,1,76,3,76,716,8,76,1,77,1,77,1,77,1,77,1,77,1,78,1,78,1,78,5,
  	78,726,8,78,10,78,12,78,729,9,78,3,78,731,8,78,1,79,1,79,3,79,735,8,79,
  	1,80,1,80,1,80,1,81,1,81,1,82,1,82,1,83,1,83,1,83,5,83,747,8,83,10,83,
  	12,83,750,9,83,3,83,752,8,83,1,84,1,84,1,84,1,85,1,85,1,86,1,86,1,86,
  	0,1,130,87,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,
  	42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,
  	88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,
  	126,128,130,132,134,136,138,140,142,144,146,148,150,152,154,156,158,160,
  	162,164,166,168,170,172,0,8,1,0,3,11,1,0,12,13,1,0,14,15,1,0,22,23,1,
  	0,59,65,1,0,66,67,1,0,83,92,3,0,66,67,89,92,95,104,782,0,177,1,0,0,0,
  	2,187,1,0,0,0,4,189,1,0,0,0,6,194,1,0,0,0,8,205,1,0,0,0,10,217,1,0,0,
  	0,12,219,1,0,0,0,14,221,1,0,0,0,16,223,1,0,0,0,18,226,1,0,0,0,20,231,
  	1,0,0,0,22,239,1,0,0,0,24,248,1,0,0,0,26,261,1,0,0,0,28,266,1,0,0,0,30,
  	268,1,0,0,0,32,301,1,0,0,0,34,303,1,0,0,0,36,305,1,0,0,0,38,316,1,0,0,
  	0,40,321,1,0,0,0,42,332,1,0,0,0,44,337,1,0,0,0,46,348,1,0,0,0,48,353,
  	1,0,0,0,50,358,1,0,0,0,52,363,1,0,0,0,54,368,1,0,0,0,56,373,1,0,0,0,58,
  	378,1,0,0,0,60,383,1,0,0,0,62,388,1,0,0,0,64,399,1,0,0,0,66,404,1,0,0,
  	0,68,409,1,0,0,0,70,414,1,0,0,0,72,419,1,0,0,0,74,424,1,0,0,0,76,430,
  	1,0,0,0,78,435,1,0,0,0,80,449,1,0,0,0,82,454,1,0,0,0,84,459,1,0,0,0,86,
  	464,1,0,0,0,88,469,1,0,0,0,90,474,1,0,0,0,92,480,1,0,0,0,94,486,1,0,0,
  	0,96,499,1,0,0,0,98,501,1,0,0,0,100,504,1,0,0,0,102,512,1,0,0,0,104,514,
  	1,0,0,0,106,527,1,0,0,0,108,532,1,0,0,0,110,543,1,0,0,0,112,545,1,0,0,
  	0,114,547,1,0,0,0,116,549,1,0,0,0,118,551,1,0,0,0,120,553,1,0,0,0,122,
  	581,1,0,0,0,124,583,1,0,0,0,126,596,1,0,0,0,128,609,1,0,0,0,130,625,1,
  	0,0,0,132,642,1,0,0,0,134,644,1,0,0,0,136,653,1,0,0,0,138,669,1,0,0,0,
  	140,671,1,0,0,0,142,673,1,0,0,0,144,705,1,0,0,0,146,707,1,0,0,0,148,709,
  	1,0,0,0,150,711,1,0,0,0,152,713,1,0,0,0,154,717,1,0,0,0,156,730,1,0,0,
  	0,158,732,1,0,0,0,160,736,1,0,0,0,162,739,1,0,0,0,164,741,1,0,0,0,166,
  	751,1,0,0,0,168,753,1,0,0,0,170,756,1,0,0,0,172,758,1,0,0,0,174,176,3,
  	2,1,0,175,174,1,0,0,0,176,179,1,0,0,0,177,175,1,0,0,0,177,178,1,0,0,0,
  	178,180,1,0,0,0,179,177,1,0,0,0,180,181,5,0,0,1,181,1,1,0,0,0,182,188,
  	3,4,2,0,183,188,3,6,3,0,184,188,3,8,4,0,185,188,3,16,8,0,186,188,3,18,
  	9,0,187,182,1,0,0,0,187,183,1,0,0,0,187,184,1,0,0,0,187,185,1,0,0,0,187,
  	186,1,0,0,0,188,3,1,0,0,0,189,190,5,111,0,0,190,191,5,1,0,0,191,192,5,
  	2,0,0,192,193,3,130,65,0,193,5,1,0,0,0,194,195,5,110,0,0,195,197,5,1,
  	0,0,196,198,3,10,5,0,197,196,1,0,0,0,197,198,1,0,0,0,198,200,1,0,0,0,
  	199,201,3,12,6,0,200,199,1,0,0,0,200,201,1,0,0,0,201,202,1,0,0,0,202,
  	203,3,14,7,0,203,204,3,130,65,0,204,7,1,0,0,0,205,206,5,110,0,0,206,208,
  	5,1,0,0,207,209,3,10,5,0,208,207,1,0,0,0,208,209,1,0,0,0,209,211,1,0,
  	0,0,210,212,3,12,6,0,211,210,1,0,0,0,211,212,1,0,0,0,212,213,1,0,0,0,
  	213,214,3,14,7,0,214,215,3,130,65,0,215,216,3,110,55,0,216,9,1,0,0,0,
  	217,218,7,0,0,0,218,11,1,0,0,0,219,220,7,1,0,0,220,13,1,0,0,0,221,222,
  	7,2,0,0,222,15,1,0,0,0,223,224,5,16,0,0,224,225,3,20,10,0,225,17,1,0,
  	0,0,226,227,5,17,0,0,227,228,3,20,10,0,228,229,3,22,11,0,229,19,1,0,0,
  	0,230,232,3,12,6,0,231,230,1,0,0,0,231,232,1,0,0,0,232,233,1,0,0,0,233,
  	234,3,130,65,0,234,235,5,110,0,0,235,236,5,18,0,0,236,237,3,156,78,0,
  	237,238,5,19,0,0,238,21,1,0,0,0,239,241,5,20,0,0,240,242,3,24,12,0,241,
  	240,1,0,0,0,242,243,1,0,0,0,243,241,1,0,0,0,243,244,1,0,0,0,244,245,1,
  	0,0,0,245,246,5,21,0,0,246,23,1,0,0,0,247,249,5,112,0,0,248,247,1,0,0,
  	0,248,249,1,0,0,0,249,253,1,0,0,0,250,252,3,26,13,0,251,250,1,0,0,0,252,
  	255,1,0,0,0,253,251,1,0,0,0,253,254,1,0,0,0,254,256,1,0,0,0,255,253,1,
  	0,0,0,256,257,3,28,14,0,257,25,1,0,0,0,258,262,3,30,15,0,259,262,3,32,
  	16,0,260,262,3,60,30,0,261,258,1,0,0,0,261,259,1,0,0,0,261,260,1,0,0,
  	0,262,27,1,0,0,0,263,267,3,96,48,0,264,267,3,98,49,0,265,267,3,100,50,
  	0,266,263,1,0,0,0,266,264,1,0,0,0,266,265,1,0,0,0,267,29,1,0,0,0,268,
  	269,5,111,0,0,269,270,5,1,0,0,270,271,3,32,16,0,271,31,1,0,0,0,272,302,
  	3,36,18,0,273,302,3,38,19,0,274,302,3,40,20,0,275,302,3,42,21,0,276,302,
  	3,44,22,0,277,302,3,46,23,0,278,302,3,48,24,0,279,302,3,50,25,0,280,302,
  	3,52,26,0,281,302,3,54,27,0,282,302,3,56,28,0,283,302,3,58,29,0,284,302,
  	3,62,31,0,285,302,3,64,32,0,286,302,3,66,33,0,287,302,3,68,34,0,288,302,
  	3,70,35,0,289,302,3,72,36,0,290,302,3,74,37,0,291,302,3,76,38,0,292,302,
  	3,78,39,0,293,302,3,82,41,0,294,302,3,84,42,0,295,302,3,86,43,0,296,302,
  	3,88,44,0,297,302,3,80,40,0,298,302,3,90,45,0,299,302,3,92,46,0,300,302,
  	3,94,47,0,301,272,1,0,0,0,301,273,1,0,0,0,301,274,1,0,0,0,301,275,1,0,
  	0,0,301,276,1,0,0,0,301,277,1,0,0,0,301,278,1,0,0,0,301,279,1,0,0,0,301,
  	280,1,0,0,0,301,281,1,0,0,0,301,282,1,0,0,0,301,283,1,0,0,0,301,284,1,
  	0,0,0,301,285,1,0,0,0,301,286,1,0,0,0,301,287,1,0,0,0,301,288,1,0,0,0,
  	301,289,1,0,0,0,301,290,1,0,0,0,301,291,1,0,0,0,301,292,1,0,0,0,301,293,
  	1,0,0,0,301,294,1,0,0,0,301,295,1,0,0,0,301,296,1,0,0,0,301,297,1,0,0,
  	0,301,298,1,0,0,0,301,299,1,0,0,0,301,300,1,0,0,0,302,33,1,0,0,0,303,
  	304,7,3,0,0,304,35,1,0,0,0,305,309,5,24,0,0,306,308,3,34,17,0,307,306,
  	1,0,0,0,308,311,1,0,0,0,309,307,1,0,0,0,309,310,1,0,0,0,310,312,1,0,0,
  	0,311,309,1,0,0,0,312,313,3,104,52,0,313,314,5,25,0,0,314,315,3,108,54,
  	0,315,37,1,0,0,0,316,317,5,26,0,0,317,318,3,104,52,0,318,319,5,25,0,0,
  	319,320,3,108,54,0,320,39,1,0,0,0,321,325,5,27,0,0,322,324,3,34,17,0,
  	323,322,1,0,0,0,324,327,1,0,0,0,325,323,1,0,0,0,325,326,1,0,0,0,326,328,
  	1,0,0,0,327,325,1,0,0,0,328,329,3,104,52,0,329,330,5,25,0,0,330,331,3,
  	108,54,0,331,41,1,0,0,0,332,333,5,28,0,0,333,334,3,104,52,0,334,335,5,
  	25,0,0,335,336,3,108,54,0,336,43,1,0,0,0,337,341,5,29,0,0,338,340,3,34,
  	17,0,339,338,1,0,0,0,340,343,1,0,0,0,341,339,1,0,0,0,341,342,1,0,0,0,
  	342,344,1,0,0,0,343,341,1,0,0,0,344,345,3,104,52,0,345,346,5,25,0,0,346,
  	347,3,108,54,0,347,45,1,0,0,0,348,349,5,30,0,0,349,350,3,104,52,0,350,
  	351,5,25,0,0,351,352,3,108,54,0,352,47,1,0,0,0,353,354,5,31,0,0,354,355,
  	3,104,52,0,355,356,5,25,0,0,356,357,3,108,54,0,357,49,1,0,0,0,358,359,
  	5,32,0,0,359,360,3,104,52,0,360,361,5,25,0,0,361,362,3,108,54,0,362,51,
  	1,0,0,0,363,364,5,33,0,0,364,365,3,104,52,0,365,366,5,25,0,0,366,367,
  	3,108,54,0,367,53,1,0,0,0,368,369,5,34,0,0,369,370,3,104,52,0,370,371,
  	5,25,0,0,371,372,3,108,54,0,372,55,1,0,0,0,373,374,5,35,0,0,374,375,3,
  	104,52,0,375,376,5,25,0,0,376,377,3,108,54,0,377,57,1,0,0,0,378,379,5,
  	36,0,0,379,380,3,104,52,0,380,381,5,25,0,0,381,382,3,108,54,0,382,59,
  	1,0,0,0,383,384,5,37,0,0,384,385,3,104,52,0,385,386,5,25,0,0,386,387,
  	3,104,52,0,387,61,1,0,0,0,388,392,5,38,0,0,389,391,3,34,17,0,390,389,
  	1,0,0,0,391,394,1,0,0,0,392,390,1,0,0,0,392,393,1,0,0,0,393,395,1,0,0,
  	0,394,392,1,0,0,0,395,396,3,104,52,0,396,397,5,25,0,0,397,398,3,108,54,
  	0,398,63,1,0,0,0,399,400,5,39,0,0,400,401,3,104,52,0,401,402,5,25,0,0,
  	402,403,3,108,54,0,403,65,1,0,0,0,404,405,5,40,0,0,405,406,3,104,52,0,
  	406,407,5,25,0,0,407,408,3,108,54,0,408,67,1,0,0,0,409,410,5,41,0,0,410,
  	411,3,104,52,0,411,412,5,25,0,0,412,413,3,108,54,0,413,69,1,0,0,0,414,
  	415,5,42,0,0,415,416,3,104,52,0,416,417,5,25,0,0,417,418,3,108,54,0,418,
  	71,1,0,0,0,419,420,5,43,0,0,420,421,3,104,52,0,421,422,5,25,0,0,422,423,
  	3,108,54,0,423,73,1,0,0,0,424,425,5,44,0,0,425,428,3,130,65,0,426,427,
  	5,25,0,0,427,429,3,104,52,0,428,426,1,0,0,0,428,429,1,0,0,0,429,75,1,
  	0,0,0,430,431,5,45,0,0,431,432,3,130,65,0,432,433,5,25,0,0,433,434,3,
  	104,52,0,434,77,1,0,0,0,435,437,5,46,0,0,436,438,3,164,82,0,437,436,1,
  	0,0,0,437,438,1,0,0,0,438,439,1,0,0,0,439,440,3,130,65,0,440,441,5,25,
  	0,0,441,446,3,104,52,0,442,443,5,25,0,0,443,445,3,104,52,0,444,442,1,
  	0,0,0,445,448,1,0,0,0,446,444,1,0,0,0,446,447,1,0,0,0,447,79,1,0,0,0,
  	448,446,1,0,0,0,449,450,5,47,0,0,450,451,3,104,52,0,451,452,5,48,0,0,
  	452,453,3,130,65,0,453,81,1,0,0,0,454,455,5,49,0,0,455,456,3,104,52,0,
  	456,457,5,48,0,0,457,458,3,130,65,0,458,83,1,0,0,0,459,460,5,50,0,0,460,
  	461,3,104,52,0,461,462,5,48,0,0,462,463,3,130,65,0,463,85,1,0,0,0,464,
  	465,5,51,0,0,465,466,3,104,52,0,466,467,5,48,0,0,467,468,3,130,65,0,468,
  	87,1,0,0,0,469,470,5,52,0,0,470,471,3,104,52,0,471,472,5,48,0,0,472,473,
  	3,130,65,0,473,89,1,0,0,0,474,475,5,53,0,0,475,476,3,162,81,0,476,477,
  	3,104,52,0,477,478,5,25,0,0,478,479,3,108,54,0,479,91,1,0,0,0,480,481,
  	5,54,0,0,481,482,3,172,86,0,482,483,3,104,52,0,483,484,5,25,0,0,484,485,
  	3,108,54,0,485,93,1,0,0,0,486,487,5,55,0,0,487,488,3,130,65,0,488,489,
  	3,108,54,0,489,490,5,18,0,0,490,491,3,166,83,0,491,492,5,19,0,0,492,95,
  	1,0,0,0,493,494,5,56,0,0,494,500,5,57,0,0,495,496,5,56,0,0,496,497,3,
  	106,53,0,497,498,3,108,54,0,498,500,1,0,0,0,499,493,1,0,0,0,499,495,1,
  	0,0,0,500,97,1,0,0,0,501,502,5,58,0,0,502,503,3,160,80,0,503,99,1,0,0,
  	0,504,505,5,58,0,0,505,506,5,113,0,0,506,507,3,108,54,0,507,508,5,25,
  	0,0,508,509,3,160,80,0,509,510,5,25,0,0,510,511,3,160,80,0,511,101,1,
  	0,0,0,512,513,7,4,0,0,513,103,1,0,0,0,514,515,3,106,53,0,515,516,3,108,
  	54,0,516,105,1,0,0,0,517,528,3,132,66,0,518,528,3,134,67,0,519,528,3,
  	136,68,0,520,528,3,138,69,0,521,528,3,140,70,0,522,528,3,142,71,0,523,
  	528,3,144,72,0,524,528,3,146,73,0,525,528,3,148,74,0,526,528,3,150,75,
  	0,527,517,1,0,0,0,527,518,1,0,0,0,527,519,1,0,0,0,527,520,1,0,0,0,527,
  	521,1,0,0,0,527,522,1,0,0,0,527,523,1,0,0,0,527,524,1,0,0,0,527,525,1,
  	0,0,0,527,526,1,0,0,0,528,107,1,0,0,0,529,533,3,110,55,0,530,533,5,111,
  	0,0,531,533,5,110,0,0,532,529,1,0,0,0,532,530,1,0,0,0,532,531,1,0,0,0,
  	533,109,1,0,0,0,534,544,3,112,56,0,535,544,3,114,57,0,536,544,3,116,58,
  	0,537,544,3,118,59,0,538,544,3,120,60,0,539,544,3,122,61,0,540,544,3,
  	124,62,0,541,544,3,126,63,0,542,544,3,170,85,0,543,534,1,0,0,0,543,535,
  	1,0,0,0,543,536,1,0,0,0,543,537,1,0,0,0,543,538,1,0,0,0,543,539,1,0,0,
  	0,543,540,1,0,0,0,543,541,1,0,0,0,543,542,1,0,0,0,544,111,1,0,0,0,545,
  	546,7,5,0,0,546,113,1,0,0,0,547,548,5,107,0,0,548,115,1,0,0,0,549,550,
  	5,108,0,0,550,117,1,0,0,0,551,552,5,68,0,0,552,119,1,0,0,0,553,554,5,
  	69,0,0,554,121,1,0,0,0,555,564,5,20,0,0,556,561,3,128,64,0,557,558,5,
  	25,0,0,558,560,3,128,64,0,559,557,1,0,0,0,560,563,1,0,0,0,561,559,1,0,
  	0,0,561,562,1,0,0,0,562,565,1,0,0,0,563,561,1,0,0,0,564,556,1,0,0,0,564,
  	565,1,0,0,0,565,566,1,0,0,0,566,582,5,21,0,0,567,568,5,70,0,0,568,577,
  	5,20,0,0,569,574,3,128,64,0,570,571,5,25,0,0,571,573,3,128,64,0,572,570,
  	1,0,0,0,573,576,1,0,0,0,574,572,1,0,0,0,574,575,1,0,0,0,575,578,1,0,0,
  	0,576,574,1,0,0,0,577,569,1,0,0,0,577,578,1,0,0,0,578,579,1,0,0,0,579,
  	580,5,21,0,0,580,582,5,71,0,0,581,555,1,0,0,0,581,567,1,0,0,0,582,123,
  	1,0,0,0,583,592,5,72,0,0,584,589,3,128,64,0,585,586,5,25,0,0,586,588,
  	3,128,64,0,587,585,1,0,0,0,588,591,1,0,0,0,589,587,1,0,0,0,589,590,1,
  	0,0,0,590,593,1,0,0,0,591,589,1,0,0,0,592,584,1,0,0,0,592,593,1,0,0,0,
  	593,594,1,0,0,0,594,595,5,73,0,0,595,125,1,0,0,0,596,605,5,70,0,0,597,
  	602,3,128,64,0,598,599,5,25,0,0,599,601,3,128,64,0,600,598,1,0,0,0,601,
  	604,1,0,0,0,602,600,1,0,0,0,602,603,1,0,0,0,603,606,1,0,0,0,604,602,1,
  	0,0,0,605,597,1,0,0,0,605,606,1,0,0,0,606,607,1,0,0,0,607,608,5,71,0,
  	0,608,127,1,0,0,0,609,610,3,106,53,0,610,611,3,110,55,0,611,129,1,0,0,
  	0,612,613,6,65,-1,0,613,626,5,57,0,0,614,626,5,74,0,0,615,626,3,132,66,
  	0,616,626,3,134,67,0,617,626,3,152,76,0,618,626,3,138,69,0,619,626,3,
  	140,70,0,620,626,3,142,71,0,621,626,3,144,72,0,622,626,3,146,73,0,623,
  	626,3,148,74,0,624,626,3,150,75,0,625,612,1,0,0,0,625,614,1,0,0,0,625,
  	615,1,0,0,0,625,616,1,0,0,0,625,617,1,0,0,0,625,618,1,0,0,0,625,619,1,
  	0,0,0,625,620,1,0,0,0,625,621,1,0,0,0,625,622,1,0,0,0,625,623,1,0,0,0,
  	625,624,1,0,0,0,626,639,1,0,0,0,627,628,10,12,0,0,628,629,5,18,0,0,629,
  	630,3,156,78,0,630,631,5,19,0,0,631,638,1,0,0,0,632,634,10,9,0,0,633,
  	635,3,154,77,0,634,633,1,0,0,0,634,635,1,0,0,0,635,636,1,0,0,0,636,638,
  	5,75,0,0,637,627,1,0,0,0,637,632,1,0,0,0,638,641,1,0,0,0,639,637,1,0,
  	0,0,639,640,1,0,0,0,640,131,1,0,0,0,641,639,1,0,0,0,642,643,5,113,0,0,
  	643,133,1,0,0,0,644,645,3,102,51,0,645,135,1,0,0,0,646,648,3,130,65,0,
  	647,649,3,154,77,0,648,647,1,0,0,0,648,649,1,0,0,0,649,650,1,0,0,0,650,
  	651,5,75,0,0,651,654,1,0,0,0,652,654,3,152,76,0,653,646,1,0,0,0,653,652,
  	1,0,0,0,654,137,1,0,0,0,655,656,5,70,0,0,656,657,5,107,0,0,657,658,5,
  	76,0,0,658,659,3,130,65,0,659,660,5,71,0,0,660,670,1,0,0,0,661,662,5,
  	70,0,0,662,663,5,77,0,0,663,664,5,76,0,0,664,665,5,107,0,0,665,666,5,
  	76,0,0,666,667,3,130,65,0,667,668,5,71,0,0,668,670,1,0,0,0,669,655,1,
  	0,0,0,669,661,1,0,0,0,670,139,1,0,0,0,671,672,5,78,0,0,672,141,1,0,0,
  	0,673,674,5,72,0,0,674,675,5,107,0,0,675,676,5,76,0,0,676,677,3,130,65,
  	0,677,678,5,73,0,0,678,143,1,0,0,0,679,688,5,20,0,0,680,685,3,130,65,
  	0,681,682,5,25,0,0,682,684,3,130,65,0,683,681,1,0,0,0,684,687,1,0,0,0,
  	685,683,1,0,0,0,685,686,1,0,0,0,686,689,1,0,0,0,687,685,1,0,0,0,688,680,
  	1,0,0,0,688,689,1,0,0,0,689,690,1,0,0,0,690,706,5,21,0,0,691,692,5,70,
  	0,0,692,701,5,20,0,0,693,698,3,130,65,0,694,695,5,25,0,0,695,697,3,130,
  	65,0,696,694,1,0,0,0,697,700,1,0,0,0,698,696,1,0,0,0,698,699,1,0,0,0,
  	699,702,1,0,0,0,700,698,1,0,0,0,701,693,1,0,0,0,701,702,1,0,0,0,702,703,
  	1,0,0,0,703,704,5,21,0,0,704,706,5,71,0,0,705,679,1,0,0,0,705,691,1,0,
  	0,0,706,145,1,0,0,0,707,708,5,111,0,0,708,147,1,0,0,0,709,710,5,79,0,
  	0,710,149,1,0,0,0,711,712,5,80,0,0,712,151,1,0,0,0,713,715,5,81,0,0,714,
  	716,3,154,77,0,715,714,1,0,0,0,715,716,1,0,0,0,716,153,1,0,0,0,717,718,
  	5,82,0,0,718,719,5,18,0,0,719,720,5,107,0,0,720,721,5,19,0,0,721,155,
  	1,0,0,0,722,727,3,158,79,0,723,724,5,25,0,0,724,726,3,158,79,0,725,723,
  	1,0,0,0,726,729,1,0,0,0,727,725,1,0,0,0,727,728,1,0,0,0,728,731,1,0,0,
  	0,729,727,1,0,0,0,730,722,1,0,0,0,730,731,1,0,0,0,731,157,1,0,0,0,732,
  	734,3,130,65,0,733,735,5,111,0,0,734,733,1,0,0,0,734,735,1,0,0,0,735,
  	159,1,0,0,0,736,737,5,78,0,0,737,738,5,111,0,0,738,161,1,0,0,0,739,740,
  	7,6,0,0,740,163,1,0,0,0,741,742,5,93,0,0,742,165,1,0,0,0,743,748,3,168,
  	84,0,744,745,5,25,0,0,745,747,3,168,84,0,746,744,1,0,0,0,747,750,1,0,
  	0,0,748,746,1,0,0,0,748,749,1,0,0,0,749,752,1,0,0,0,750,748,1,0,0,0,751,
  	743,1,0,0,0,751,752,1,0,0,0,752,167,1,0,0,0,753,754,3,106,53,0,754,755,
  	3,108,54,0,755,169,1,0,0,0,756,757,5,94,0,0,757,171,1,0,0,0,758,759,7,
  	7,0,0,759,173,1,0,0,0,51,177,187,197,200,208,211,231,243,248,253,261,
  	266,301,309,325,341,392,428,437,446,499,527,532,543,561,564,574,577,581,
  	589,592,602,605,625,634,637,639,648,653,669,685,688,698,701,705,715,727,
  	730,734,748,751
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  llvmirParserStaticData = staticData.release();
}

}

llvmirParser::llvmirParser(TokenStream *input) : llvmirParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

llvmirParser::llvmirParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  llvmirParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *llvmirParserStaticData->atn, llvmirParserStaticData->decisionToDFA, llvmirParserStaticData->sharedContextCache, options);
}

llvmirParser::~llvmirParser() {
  delete _interpreter;
}

const atn::ATN& llvmirParser::getATN() const {
  return *llvmirParserStaticData->atn;
}

std::string llvmirParser::getGrammarFileName() const {
  return "llvmir.g4";
}

const std::vector<std::string>& llvmirParser::getRuleNames() const {
  return llvmirParserStaticData->ruleNames;
}

const dfa::Vocabulary& llvmirParser::getVocabulary() const {
  return llvmirParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView llvmirParser::getSerializedATN() const {
  return llvmirParserStaticData->serializedATN;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

llvmirParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::CompilationUnitContext::EOF() {
  return getToken(llvmirParser::EOF, 0);
}

std::vector<llvmirParser::TopLevelEntityContext *> llvmirParser::CompilationUnitContext::topLevelEntity() {
  return getRuleContexts<llvmirParser::TopLevelEntityContext>();
}

llvmirParser::TopLevelEntityContext* llvmirParser::CompilationUnitContext::topLevelEntity(size_t i) {
  return getRuleContext<llvmirParser::TopLevelEntityContext>(i);
}


size_t llvmirParser::CompilationUnitContext::getRuleIndex() const {
  return llvmirParser::RuleCompilationUnit;
}

void llvmirParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void llvmirParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


std::any llvmirParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::CompilationUnitContext* llvmirParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, llvmirParser::RuleCompilationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == llvmirParser::T__15

    || _la == llvmirParser::T__16 || _la == llvmirParser::GlobalIdent

    || _la == llvmirParser::LocalIdent) {
      setState(174);
      topLevelEntity();
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    match(llvmirParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelEntityContext ------------------------------------------------------------------

llvmirParser::TopLevelEntityContext::TopLevelEntityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeDefContext* llvmirParser::TopLevelEntityContext::typeDef() {
  return getRuleContext<llvmirParser::TypeDefContext>(0);
}

llvmirParser::GlobalDeclContext* llvmirParser::TopLevelEntityContext::globalDecl() {
  return getRuleContext<llvmirParser::GlobalDeclContext>(0);
}

llvmirParser::GlobalDefContext* llvmirParser::TopLevelEntityContext::globalDef() {
  return getRuleContext<llvmirParser::GlobalDefContext>(0);
}

llvmirParser::FuncDeclContext* llvmirParser::TopLevelEntityContext::funcDecl() {
  return getRuleContext<llvmirParser::FuncDeclContext>(0);
}

llvmirParser::FuncDefContext* llvmirParser::TopLevelEntityContext::funcDef() {
  return getRuleContext<llvmirParser::FuncDefContext>(0);
}


size_t llvmirParser::TopLevelEntityContext::getRuleIndex() const {
  return llvmirParser::RuleTopLevelEntity;
}

void llvmirParser::TopLevelEntityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelEntity(this);
}

void llvmirParser::TopLevelEntityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelEntity(this);
}


std::any llvmirParser::TopLevelEntityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitTopLevelEntity(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::TopLevelEntityContext* llvmirParser::topLevelEntity() {
  TopLevelEntityContext *_localctx = _tracker.createInstance<TopLevelEntityContext>(_ctx, getState());
  enterRule(_localctx, 2, llvmirParser::RuleTopLevelEntity);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(182);
      typeDef();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(183);
      globalDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(184);
      globalDef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(185);
      funcDecl();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(186);
      funcDef();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefContext ------------------------------------------------------------------

llvmirParser::TypeDefContext::TypeDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::TypeDefContext::LocalIdent() {
  return getToken(llvmirParser::LocalIdent, 0);
}

llvmirParser::TypeContext* llvmirParser::TypeDefContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::TypeDefContext::getRuleIndex() const {
  return llvmirParser::RuleTypeDef;
}

void llvmirParser::TypeDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDef(this);
}

void llvmirParser::TypeDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDef(this);
}


std::any llvmirParser::TypeDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitTypeDef(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::TypeDefContext* llvmirParser::typeDef() {
  TypeDefContext *_localctx = _tracker.createInstance<TypeDefContext>(_ctx, getState());
  enterRule(_localctx, 4, llvmirParser::RuleTypeDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(llvmirParser::LocalIdent);
    setState(190);
    match(llvmirParser::T__0);
    setState(191);
    match(llvmirParser::T__1);
    setState(192);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalDeclContext ------------------------------------------------------------------

llvmirParser::GlobalDeclContext::GlobalDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::GlobalDeclContext::GlobalIdent() {
  return getToken(llvmirParser::GlobalIdent, 0);
}

llvmirParser::ImmutableContext* llvmirParser::GlobalDeclContext::immutable() {
  return getRuleContext<llvmirParser::ImmutableContext>(0);
}

llvmirParser::TypeContext* llvmirParser::GlobalDeclContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

llvmirParser::InternalLinkageContext* llvmirParser::GlobalDeclContext::internalLinkage() {
  return getRuleContext<llvmirParser::InternalLinkageContext>(0);
}

llvmirParser::PreemptionContext* llvmirParser::GlobalDeclContext::preemption() {
  return getRuleContext<llvmirParser::PreemptionContext>(0);
}


size_t llvmirParser::GlobalDeclContext::getRuleIndex() const {
  return llvmirParser::RuleGlobalDecl;
}

void llvmirParser::GlobalDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalDecl(this);
}

void llvmirParser::GlobalDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalDecl(this);
}


std::any llvmirParser::GlobalDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitGlobalDecl(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::GlobalDeclContext* llvmirParser::globalDecl() {
  GlobalDeclContext *_localctx = _tracker.createInstance<GlobalDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, llvmirParser::RuleGlobalDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(llvmirParser::GlobalIdent);
    setState(195);
    match(llvmirParser::T__0);
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4088) != 0)) {
      setState(196);
      internalLinkage();
    }
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == llvmirParser::T__11

    || _la == llvmirParser::T__12) {
      setState(199);
      preemption();
    }
    setState(202);
    immutable();
    setState(203);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalDefContext ------------------------------------------------------------------

llvmirParser::GlobalDefContext::GlobalDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::GlobalDefContext::GlobalIdent() {
  return getToken(llvmirParser::GlobalIdent, 0);
}

llvmirParser::ImmutableContext* llvmirParser::GlobalDefContext::immutable() {
  return getRuleContext<llvmirParser::ImmutableContext>(0);
}

llvmirParser::TypeContext* llvmirParser::GlobalDefContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

llvmirParser::ConstantContext* llvmirParser::GlobalDefContext::constant() {
  return getRuleContext<llvmirParser::ConstantContext>(0);
}

llvmirParser::InternalLinkageContext* llvmirParser::GlobalDefContext::internalLinkage() {
  return getRuleContext<llvmirParser::InternalLinkageContext>(0);
}

llvmirParser::PreemptionContext* llvmirParser::GlobalDefContext::preemption() {
  return getRuleContext<llvmirParser::PreemptionContext>(0);
}


size_t llvmirParser::GlobalDefContext::getRuleIndex() const {
  return llvmirParser::RuleGlobalDef;
}

void llvmirParser::GlobalDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalDef(this);
}

void llvmirParser::GlobalDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalDef(this);
}


std::any llvmirParser::GlobalDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitGlobalDef(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::GlobalDefContext* llvmirParser::globalDef() {
  GlobalDefContext *_localctx = _tracker.createInstance<GlobalDefContext>(_ctx, getState());
  enterRule(_localctx, 8, llvmirParser::RuleGlobalDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(llvmirParser::GlobalIdent);
    setState(206);
    match(llvmirParser::T__0);
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4088) != 0)) {
      setState(207);
      internalLinkage();
    }
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == llvmirParser::T__11

    || _la == llvmirParser::T__12) {
      setState(210);
      preemption();
    }
    setState(213);
    immutable();
    setState(214);
    type(0);
    setState(215);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InternalLinkageContext ------------------------------------------------------------------

llvmirParser::InternalLinkageContext::InternalLinkageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::InternalLinkageContext::getRuleIndex() const {
  return llvmirParser::RuleInternalLinkage;
}

void llvmirParser::InternalLinkageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInternalLinkage(this);
}

void llvmirParser::InternalLinkageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInternalLinkage(this);
}


std::any llvmirParser::InternalLinkageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitInternalLinkage(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::InternalLinkageContext* llvmirParser::internalLinkage() {
  InternalLinkageContext *_localctx = _tracker.createInstance<InternalLinkageContext>(_ctx, getState());
  enterRule(_localctx, 10, llvmirParser::RuleInternalLinkage);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4088) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreemptionContext ------------------------------------------------------------------

llvmirParser::PreemptionContext::PreemptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::PreemptionContext::getRuleIndex() const {
  return llvmirParser::RulePreemption;
}

void llvmirParser::PreemptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreemption(this);
}

void llvmirParser::PreemptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreemption(this);
}


std::any llvmirParser::PreemptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitPreemption(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::PreemptionContext* llvmirParser::preemption() {
  PreemptionContext *_localctx = _tracker.createInstance<PreemptionContext>(_ctx, getState());
  enterRule(_localctx, 12, llvmirParser::RulePreemption);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    _la = _input->LA(1);
    if (!(_la == llvmirParser::T__11

    || _la == llvmirParser::T__12)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImmutableContext ------------------------------------------------------------------

llvmirParser::ImmutableContext::ImmutableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::ImmutableContext::getRuleIndex() const {
  return llvmirParser::RuleImmutable;
}

void llvmirParser::ImmutableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmutable(this);
}

void llvmirParser::ImmutableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmutable(this);
}


std::any llvmirParser::ImmutableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitImmutable(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ImmutableContext* llvmirParser::immutable() {
  ImmutableContext *_localctx = _tracker.createInstance<ImmutableContext>(_ctx, getState());
  enterRule(_localctx, 14, llvmirParser::RuleImmutable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    _la = _input->LA(1);
    if (!(_la == llvmirParser::T__13

    || _la == llvmirParser::T__14)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclContext ------------------------------------------------------------------

llvmirParser::FuncDeclContext::FuncDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::FuncHeaderContext* llvmirParser::FuncDeclContext::funcHeader() {
  return getRuleContext<llvmirParser::FuncHeaderContext>(0);
}


size_t llvmirParser::FuncDeclContext::getRuleIndex() const {
  return llvmirParser::RuleFuncDecl;
}

void llvmirParser::FuncDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDecl(this);
}

void llvmirParser::FuncDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDecl(this);
}


std::any llvmirParser::FuncDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFuncDecl(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FuncDeclContext* llvmirParser::funcDecl() {
  FuncDeclContext *_localctx = _tracker.createInstance<FuncDeclContext>(_ctx, getState());
  enterRule(_localctx, 16, llvmirParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(llvmirParser::T__15);
    setState(224);
    funcHeader();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

llvmirParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::FuncHeaderContext* llvmirParser::FuncDefContext::funcHeader() {
  return getRuleContext<llvmirParser::FuncHeaderContext>(0);
}

llvmirParser::FuncBodyContext* llvmirParser::FuncDefContext::funcBody() {
  return getRuleContext<llvmirParser::FuncBodyContext>(0);
}


size_t llvmirParser::FuncDefContext::getRuleIndex() const {
  return llvmirParser::RuleFuncDef;
}

void llvmirParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void llvmirParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}


std::any llvmirParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FuncDefContext* llvmirParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 18, llvmirParser::RuleFuncDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(llvmirParser::T__16);
    setState(227);
    funcHeader();
    setState(228);
    funcBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncHeaderContext ------------------------------------------------------------------

llvmirParser::FuncHeaderContext::FuncHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeContext* llvmirParser::FuncHeaderContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

tree::TerminalNode* llvmirParser::FuncHeaderContext::GlobalIdent() {
  return getToken(llvmirParser::GlobalIdent, 0);
}

llvmirParser::ParamsContext* llvmirParser::FuncHeaderContext::params() {
  return getRuleContext<llvmirParser::ParamsContext>(0);
}

llvmirParser::PreemptionContext* llvmirParser::FuncHeaderContext::preemption() {
  return getRuleContext<llvmirParser::PreemptionContext>(0);
}


size_t llvmirParser::FuncHeaderContext::getRuleIndex() const {
  return llvmirParser::RuleFuncHeader;
}

void llvmirParser::FuncHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncHeader(this);
}

void llvmirParser::FuncHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncHeader(this);
}


std::any llvmirParser::FuncHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFuncHeader(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FuncHeaderContext* llvmirParser::funcHeader() {
  FuncHeaderContext *_localctx = _tracker.createInstance<FuncHeaderContext>(_ctx, getState());
  enterRule(_localctx, 20, llvmirParser::RuleFuncHeader);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == llvmirParser::T__11

    || _la == llvmirParser::T__12) {
      setState(230);
      preemption();
    }
    setState(233);
    type(0);
    setState(234);
    match(llvmirParser::GlobalIdent);
    setState(235);
    match(llvmirParser::T__17);
    setState(236);
    params();
    setState(237);
    match(llvmirParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncBodyContext ------------------------------------------------------------------

llvmirParser::FuncBodyContext::FuncBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::BasicBlockContext *> llvmirParser::FuncBodyContext::basicBlock() {
  return getRuleContexts<llvmirParser::BasicBlockContext>();
}

llvmirParser::BasicBlockContext* llvmirParser::FuncBodyContext::basicBlock(size_t i) {
  return getRuleContext<llvmirParser::BasicBlockContext>(i);
}


size_t llvmirParser::FuncBodyContext::getRuleIndex() const {
  return llvmirParser::RuleFuncBody;
}

void llvmirParser::FuncBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncBody(this);
}

void llvmirParser::FuncBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncBody(this);
}


std::any llvmirParser::FuncBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFuncBody(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FuncBodyContext* llvmirParser::funcBody() {
  FuncBodyContext *_localctx = _tracker.createInstance<FuncBodyContext>(_ctx, getState());
  enterRule(_localctx, 22, llvmirParser::RuleFuncBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(llvmirParser::T__19);
    setState(241); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(240);
      basicBlock();
      setState(243); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 432064089200525312) != 0) || _la == llvmirParser::LocalIdent

    || _la == llvmirParser::LabelIdent);
    setState(245);
    match(llvmirParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicBlockContext ------------------------------------------------------------------

llvmirParser::BasicBlockContext::BasicBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TerminatorContext* llvmirParser::BasicBlockContext::terminator() {
  return getRuleContext<llvmirParser::TerminatorContext>(0);
}

tree::TerminalNode* llvmirParser::BasicBlockContext::LabelIdent() {
  return getToken(llvmirParser::LabelIdent, 0);
}

std::vector<llvmirParser::InstructionContext *> llvmirParser::BasicBlockContext::instruction() {
  return getRuleContexts<llvmirParser::InstructionContext>();
}

llvmirParser::InstructionContext* llvmirParser::BasicBlockContext::instruction(size_t i) {
  return getRuleContext<llvmirParser::InstructionContext>(i);
}


size_t llvmirParser::BasicBlockContext::getRuleIndex() const {
  return llvmirParser::RuleBasicBlock;
}

void llvmirParser::BasicBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicBlock(this);
}

void llvmirParser::BasicBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicBlock(this);
}


std::any llvmirParser::BasicBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitBasicBlock(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::BasicBlockContext* llvmirParser::basicBlock() {
  BasicBlockContext *_localctx = _tracker.createInstance<BasicBlockContext>(_ctx, getState());
  enterRule(_localctx, 24, llvmirParser::RuleBasicBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == llvmirParser::LabelIdent) {
      setState(247);
      match(llvmirParser::LabelIdent);
    }
    setState(253);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 71776119010885632) != 0) || _la == llvmirParser::LocalIdent) {
      setState(250);
      instruction();
      setState(255);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(256);
    terminator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

llvmirParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::LocalDefInstContext* llvmirParser::InstructionContext::localDefInst() {
  return getRuleContext<llvmirParser::LocalDefInstContext>(0);
}

llvmirParser::ValueInstructionContext* llvmirParser::InstructionContext::valueInstruction() {
  return getRuleContext<llvmirParser::ValueInstructionContext>(0);
}

llvmirParser::StoreInstContext* llvmirParser::InstructionContext::storeInst() {
  return getRuleContext<llvmirParser::StoreInstContext>(0);
}


size_t llvmirParser::InstructionContext::getRuleIndex() const {
  return llvmirParser::RuleInstruction;
}

void llvmirParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void llvmirParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}


std::any llvmirParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::InstructionContext* llvmirParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 26, llvmirParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case llvmirParser::LocalIdent: {
        enterOuterAlt(_localctx, 1);
        setState(258);
        localDefInst();
        break;
      }

      case llvmirParser::T__23:
      case llvmirParser::T__25:
      case llvmirParser::T__26:
      case llvmirParser::T__27:
      case llvmirParser::T__28:
      case llvmirParser::T__29:
      case llvmirParser::T__30:
      case llvmirParser::T__31:
      case llvmirParser::T__32:
      case llvmirParser::T__33:
      case llvmirParser::T__34:
      case llvmirParser::T__35:
      case llvmirParser::T__37:
      case llvmirParser::T__38:
      case llvmirParser::T__39:
      case llvmirParser::T__40:
      case llvmirParser::T__41:
      case llvmirParser::T__42:
      case llvmirParser::T__43:
      case llvmirParser::T__44:
      case llvmirParser::T__45:
      case llvmirParser::T__46:
      case llvmirParser::T__48:
      case llvmirParser::T__49:
      case llvmirParser::T__50:
      case llvmirParser::T__51:
      case llvmirParser::T__52:
      case llvmirParser::T__53:
      case llvmirParser::T__54: {
        enterOuterAlt(_localctx, 2);
        setState(259);
        valueInstruction();
        break;
      }

      case llvmirParser::T__36: {
        enterOuterAlt(_localctx, 3);
        setState(260);
        storeInst();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminatorContext ------------------------------------------------------------------

llvmirParser::TerminatorContext::TerminatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::RetTermContext* llvmirParser::TerminatorContext::retTerm() {
  return getRuleContext<llvmirParser::RetTermContext>(0);
}

llvmirParser::BrTermContext* llvmirParser::TerminatorContext::brTerm() {
  return getRuleContext<llvmirParser::BrTermContext>(0);
}

llvmirParser::CondBrTermContext* llvmirParser::TerminatorContext::condBrTerm() {
  return getRuleContext<llvmirParser::CondBrTermContext>(0);
}


size_t llvmirParser::TerminatorContext::getRuleIndex() const {
  return llvmirParser::RuleTerminator;
}

void llvmirParser::TerminatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminator(this);
}

void llvmirParser::TerminatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminator(this);
}


std::any llvmirParser::TerminatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitTerminator(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::TerminatorContext* llvmirParser::terminator() {
  TerminatorContext *_localctx = _tracker.createInstance<TerminatorContext>(_ctx, getState());
  enterRule(_localctx, 28, llvmirParser::RuleTerminator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(263);
      retTerm();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(264);
      brTerm();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(265);
      condBrTerm();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalDefInstContext ------------------------------------------------------------------

llvmirParser::LocalDefInstContext::LocalDefInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::LocalDefInstContext::LocalIdent() {
  return getToken(llvmirParser::LocalIdent, 0);
}

llvmirParser::ValueInstructionContext* llvmirParser::LocalDefInstContext::valueInstruction() {
  return getRuleContext<llvmirParser::ValueInstructionContext>(0);
}


size_t llvmirParser::LocalDefInstContext::getRuleIndex() const {
  return llvmirParser::RuleLocalDefInst;
}

void llvmirParser::LocalDefInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalDefInst(this);
}

void llvmirParser::LocalDefInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalDefInst(this);
}


std::any llvmirParser::LocalDefInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitLocalDefInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::LocalDefInstContext* llvmirParser::localDefInst() {
  LocalDefInstContext *_localctx = _tracker.createInstance<LocalDefInstContext>(_ctx, getState());
  enterRule(_localctx, 30, llvmirParser::RuleLocalDefInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    match(llvmirParser::LocalIdent);
    setState(269);
    match(llvmirParser::T__0);
    setState(270);
    valueInstruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueInstructionContext ------------------------------------------------------------------

llvmirParser::ValueInstructionContext::ValueInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::AddInstContext* llvmirParser::ValueInstructionContext::addInst() {
  return getRuleContext<llvmirParser::AddInstContext>(0);
}

llvmirParser::FAddInstContext* llvmirParser::ValueInstructionContext::fAddInst() {
  return getRuleContext<llvmirParser::FAddInstContext>(0);
}

llvmirParser::SubInstContext* llvmirParser::ValueInstructionContext::subInst() {
  return getRuleContext<llvmirParser::SubInstContext>(0);
}

llvmirParser::FSubInstContext* llvmirParser::ValueInstructionContext::fSubInst() {
  return getRuleContext<llvmirParser::FSubInstContext>(0);
}

llvmirParser::MulInstContext* llvmirParser::ValueInstructionContext::mulInst() {
  return getRuleContext<llvmirParser::MulInstContext>(0);
}

llvmirParser::FMulInstContext* llvmirParser::ValueInstructionContext::fMulInst() {
  return getRuleContext<llvmirParser::FMulInstContext>(0);
}

llvmirParser::UDivInstContext* llvmirParser::ValueInstructionContext::uDivInst() {
  return getRuleContext<llvmirParser::UDivInstContext>(0);
}

llvmirParser::SDivInstContext* llvmirParser::ValueInstructionContext::sDivInst() {
  return getRuleContext<llvmirParser::SDivInstContext>(0);
}

llvmirParser::FDivInstContext* llvmirParser::ValueInstructionContext::fDivInst() {
  return getRuleContext<llvmirParser::FDivInstContext>(0);
}

llvmirParser::URemInstContext* llvmirParser::ValueInstructionContext::uRemInst() {
  return getRuleContext<llvmirParser::URemInstContext>(0);
}

llvmirParser::SRemInstContext* llvmirParser::ValueInstructionContext::sRemInst() {
  return getRuleContext<llvmirParser::SRemInstContext>(0);
}

llvmirParser::FRemInstContext* llvmirParser::ValueInstructionContext::fRemInst() {
  return getRuleContext<llvmirParser::FRemInstContext>(0);
}

llvmirParser::ShlInstContext* llvmirParser::ValueInstructionContext::shlInst() {
  return getRuleContext<llvmirParser::ShlInstContext>(0);
}

llvmirParser::LShrInstContext* llvmirParser::ValueInstructionContext::lShrInst() {
  return getRuleContext<llvmirParser::LShrInstContext>(0);
}

llvmirParser::AShrInstContext* llvmirParser::ValueInstructionContext::aShrInst() {
  return getRuleContext<llvmirParser::AShrInstContext>(0);
}

llvmirParser::AndInstContext* llvmirParser::ValueInstructionContext::andInst() {
  return getRuleContext<llvmirParser::AndInstContext>(0);
}

llvmirParser::OrInstContext* llvmirParser::ValueInstructionContext::orInst() {
  return getRuleContext<llvmirParser::OrInstContext>(0);
}

llvmirParser::XorInstContext* llvmirParser::ValueInstructionContext::xorInst() {
  return getRuleContext<llvmirParser::XorInstContext>(0);
}

llvmirParser::AllocaInstContext* llvmirParser::ValueInstructionContext::allocaInst() {
  return getRuleContext<llvmirParser::AllocaInstContext>(0);
}

llvmirParser::LoadInstContext* llvmirParser::ValueInstructionContext::loadInst() {
  return getRuleContext<llvmirParser::LoadInstContext>(0);
}

llvmirParser::GetElementPtrInstContext* llvmirParser::ValueInstructionContext::getElementPtrInst() {
  return getRuleContext<llvmirParser::GetElementPtrInstContext>(0);
}

llvmirParser::ZExtInstContext* llvmirParser::ValueInstructionContext::zExtInst() {
  return getRuleContext<llvmirParser::ZExtInstContext>(0);
}

llvmirParser::SExtInstContext* llvmirParser::ValueInstructionContext::sExtInst() {
  return getRuleContext<llvmirParser::SExtInstContext>(0);
}

llvmirParser::SiToFpInstContext* llvmirParser::ValueInstructionContext::siToFpInst() {
  return getRuleContext<llvmirParser::SiToFpInstContext>(0);
}

llvmirParser::FpToSiInstContext* llvmirParser::ValueInstructionContext::fpToSiInst() {
  return getRuleContext<llvmirParser::FpToSiInstContext>(0);
}

llvmirParser::BitCastInstContext* llvmirParser::ValueInstructionContext::bitCastInst() {
  return getRuleContext<llvmirParser::BitCastInstContext>(0);
}

llvmirParser::ICmpInstContext* llvmirParser::ValueInstructionContext::iCmpInst() {
  return getRuleContext<llvmirParser::ICmpInstContext>(0);
}

llvmirParser::FCmpInstContext* llvmirParser::ValueInstructionContext::fCmpInst() {
  return getRuleContext<llvmirParser::FCmpInstContext>(0);
}

llvmirParser::CallInstContext* llvmirParser::ValueInstructionContext::callInst() {
  return getRuleContext<llvmirParser::CallInstContext>(0);
}


size_t llvmirParser::ValueInstructionContext::getRuleIndex() const {
  return llvmirParser::RuleValueInstruction;
}

void llvmirParser::ValueInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueInstruction(this);
}

void llvmirParser::ValueInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueInstruction(this);
}


std::any llvmirParser::ValueInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitValueInstruction(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ValueInstructionContext* llvmirParser::valueInstruction() {
  ValueInstructionContext *_localctx = _tracker.createInstance<ValueInstructionContext>(_ctx, getState());
  enterRule(_localctx, 32, llvmirParser::RuleValueInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case llvmirParser::T__23: {
        enterOuterAlt(_localctx, 1);
        setState(272);
        addInst();
        break;
      }

      case llvmirParser::T__25: {
        enterOuterAlt(_localctx, 2);
        setState(273);
        fAddInst();
        break;
      }

      case llvmirParser::T__26: {
        enterOuterAlt(_localctx, 3);
        setState(274);
        subInst();
        break;
      }

      case llvmirParser::T__27: {
        enterOuterAlt(_localctx, 4);
        setState(275);
        fSubInst();
        break;
      }

      case llvmirParser::T__28: {
        enterOuterAlt(_localctx, 5);
        setState(276);
        mulInst();
        break;
      }

      case llvmirParser::T__29: {
        enterOuterAlt(_localctx, 6);
        setState(277);
        fMulInst();
        break;
      }

      case llvmirParser::T__30: {
        enterOuterAlt(_localctx, 7);
        setState(278);
        uDivInst();
        break;
      }

      case llvmirParser::T__31: {
        enterOuterAlt(_localctx, 8);
        setState(279);
        sDivInst();
        break;
      }

      case llvmirParser::T__32: {
        enterOuterAlt(_localctx, 9);
        setState(280);
        fDivInst();
        break;
      }

      case llvmirParser::T__33: {
        enterOuterAlt(_localctx, 10);
        setState(281);
        uRemInst();
        break;
      }

      case llvmirParser::T__34: {
        enterOuterAlt(_localctx, 11);
        setState(282);
        sRemInst();
        break;
      }

      case llvmirParser::T__35: {
        enterOuterAlt(_localctx, 12);
        setState(283);
        fRemInst();
        break;
      }

      case llvmirParser::T__37: {
        enterOuterAlt(_localctx, 13);
        setState(284);
        shlInst();
        break;
      }

      case llvmirParser::T__38: {
        enterOuterAlt(_localctx, 14);
        setState(285);
        lShrInst();
        break;
      }

      case llvmirParser::T__39: {
        enterOuterAlt(_localctx, 15);
        setState(286);
        aShrInst();
        break;
      }

      case llvmirParser::T__40: {
        enterOuterAlt(_localctx, 16);
        setState(287);
        andInst();
        break;
      }

      case llvmirParser::T__41: {
        enterOuterAlt(_localctx, 17);
        setState(288);
        orInst();
        break;
      }

      case llvmirParser::T__42: {
        enterOuterAlt(_localctx, 18);
        setState(289);
        xorInst();
        break;
      }

      case llvmirParser::T__43: {
        enterOuterAlt(_localctx, 19);
        setState(290);
        allocaInst();
        break;
      }

      case llvmirParser::T__44: {
        enterOuterAlt(_localctx, 20);
        setState(291);
        loadInst();
        break;
      }

      case llvmirParser::T__45: {
        enterOuterAlt(_localctx, 21);
        setState(292);
        getElementPtrInst();
        break;
      }

      case llvmirParser::T__48: {
        enterOuterAlt(_localctx, 22);
        setState(293);
        zExtInst();
        break;
      }

      case llvmirParser::T__49: {
        enterOuterAlt(_localctx, 23);
        setState(294);
        sExtInst();
        break;
      }

      case llvmirParser::T__50: {
        enterOuterAlt(_localctx, 24);
        setState(295);
        siToFpInst();
        break;
      }

      case llvmirParser::T__51: {
        enterOuterAlt(_localctx, 25);
        setState(296);
        fpToSiInst();
        break;
      }

      case llvmirParser::T__46: {
        enterOuterAlt(_localctx, 26);
        setState(297);
        bitCastInst();
        break;
      }

      case llvmirParser::T__52: {
        enterOuterAlt(_localctx, 27);
        setState(298);
        iCmpInst();
        break;
      }

      case llvmirParser::T__53: {
        enterOuterAlt(_localctx, 28);
        setState(299);
        fCmpInst();
        break;
      }

      case llvmirParser::T__54: {
        enterOuterAlt(_localctx, 29);
        setState(300);
        callInst();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OverflowFlagContext ------------------------------------------------------------------

llvmirParser::OverflowFlagContext::OverflowFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::OverflowFlagContext::getRuleIndex() const {
  return llvmirParser::RuleOverflowFlag;
}

void llvmirParser::OverflowFlagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOverflowFlag(this);
}

void llvmirParser::OverflowFlagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOverflowFlag(this);
}


std::any llvmirParser::OverflowFlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitOverflowFlag(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::OverflowFlagContext* llvmirParser::overflowFlag() {
  OverflowFlagContext *_localctx = _tracker.createInstance<OverflowFlagContext>(_ctx, getState());
  enterRule(_localctx, 34, llvmirParser::RuleOverflowFlag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    _la = _input->LA(1);
    if (!(_la == llvmirParser::T__21

    || _la == llvmirParser::T__22)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddInstContext ------------------------------------------------------------------

llvmirParser::AddInstContext::AddInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::AddInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::AddInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}

std::vector<llvmirParser::OverflowFlagContext *> llvmirParser::AddInstContext::overflowFlag() {
  return getRuleContexts<llvmirParser::OverflowFlagContext>();
}

llvmirParser::OverflowFlagContext* llvmirParser::AddInstContext::overflowFlag(size_t i) {
  return getRuleContext<llvmirParser::OverflowFlagContext>(i);
}


size_t llvmirParser::AddInstContext::getRuleIndex() const {
  return llvmirParser::RuleAddInst;
}

void llvmirParser::AddInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddInst(this);
}

void llvmirParser::AddInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddInst(this);
}


std::any llvmirParser::AddInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitAddInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::AddInstContext* llvmirParser::addInst() {
  AddInstContext *_localctx = _tracker.createInstance<AddInstContext>(_ctx, getState());
  enterRule(_localctx, 36, llvmirParser::RuleAddInst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(llvmirParser::T__23);
    setState(309);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == llvmirParser::T__21

    || _la == llvmirParser::T__22) {
      setState(306);
      overflowFlag();
      setState(311);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(312);
    typeValue();
    setState(313);
    match(llvmirParser::T__24);
    setState(314);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FAddInstContext ------------------------------------------------------------------

llvmirParser::FAddInstContext::FAddInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::FAddInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::FAddInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::FAddInstContext::getRuleIndex() const {
  return llvmirParser::RuleFAddInst;
}

void llvmirParser::FAddInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFAddInst(this);
}

void llvmirParser::FAddInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFAddInst(this);
}


std::any llvmirParser::FAddInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFAddInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FAddInstContext* llvmirParser::fAddInst() {
  FAddInstContext *_localctx = _tracker.createInstance<FAddInstContext>(_ctx, getState());
  enterRule(_localctx, 38, llvmirParser::RuleFAddInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(llvmirParser::T__25);
    setState(317);
    typeValue();
    setState(318);
    match(llvmirParser::T__24);
    setState(319);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubInstContext ------------------------------------------------------------------

llvmirParser::SubInstContext::SubInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::SubInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::SubInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}

std::vector<llvmirParser::OverflowFlagContext *> llvmirParser::SubInstContext::overflowFlag() {
  return getRuleContexts<llvmirParser::OverflowFlagContext>();
}

llvmirParser::OverflowFlagContext* llvmirParser::SubInstContext::overflowFlag(size_t i) {
  return getRuleContext<llvmirParser::OverflowFlagContext>(i);
}


size_t llvmirParser::SubInstContext::getRuleIndex() const {
  return llvmirParser::RuleSubInst;
}

void llvmirParser::SubInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubInst(this);
}

void llvmirParser::SubInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubInst(this);
}


std::any llvmirParser::SubInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitSubInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::SubInstContext* llvmirParser::subInst() {
  SubInstContext *_localctx = _tracker.createInstance<SubInstContext>(_ctx, getState());
  enterRule(_localctx, 40, llvmirParser::RuleSubInst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(llvmirParser::T__26);
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == llvmirParser::T__21

    || _la == llvmirParser::T__22) {
      setState(322);
      overflowFlag();
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(328);
    typeValue();
    setState(329);
    match(llvmirParser::T__24);
    setState(330);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FSubInstContext ------------------------------------------------------------------

llvmirParser::FSubInstContext::FSubInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::FSubInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::FSubInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::FSubInstContext::getRuleIndex() const {
  return llvmirParser::RuleFSubInst;
}

void llvmirParser::FSubInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFSubInst(this);
}

void llvmirParser::FSubInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFSubInst(this);
}


std::any llvmirParser::FSubInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFSubInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FSubInstContext* llvmirParser::fSubInst() {
  FSubInstContext *_localctx = _tracker.createInstance<FSubInstContext>(_ctx, getState());
  enterRule(_localctx, 42, llvmirParser::RuleFSubInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(llvmirParser::T__27);
    setState(333);
    typeValue();
    setState(334);
    match(llvmirParser::T__24);
    setState(335);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulInstContext ------------------------------------------------------------------

llvmirParser::MulInstContext::MulInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::MulInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::MulInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}

std::vector<llvmirParser::OverflowFlagContext *> llvmirParser::MulInstContext::overflowFlag() {
  return getRuleContexts<llvmirParser::OverflowFlagContext>();
}

llvmirParser::OverflowFlagContext* llvmirParser::MulInstContext::overflowFlag(size_t i) {
  return getRuleContext<llvmirParser::OverflowFlagContext>(i);
}


size_t llvmirParser::MulInstContext::getRuleIndex() const {
  return llvmirParser::RuleMulInst;
}

void llvmirParser::MulInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulInst(this);
}

void llvmirParser::MulInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulInst(this);
}


std::any llvmirParser::MulInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitMulInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::MulInstContext* llvmirParser::mulInst() {
  MulInstContext *_localctx = _tracker.createInstance<MulInstContext>(_ctx, getState());
  enterRule(_localctx, 44, llvmirParser::RuleMulInst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(llvmirParser::T__28);
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == llvmirParser::T__21

    || _la == llvmirParser::T__22) {
      setState(338);
      overflowFlag();
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(344);
    typeValue();
    setState(345);
    match(llvmirParser::T__24);
    setState(346);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FMulInstContext ------------------------------------------------------------------

llvmirParser::FMulInstContext::FMulInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::FMulInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::FMulInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::FMulInstContext::getRuleIndex() const {
  return llvmirParser::RuleFMulInst;
}

void llvmirParser::FMulInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFMulInst(this);
}

void llvmirParser::FMulInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFMulInst(this);
}


std::any llvmirParser::FMulInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFMulInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FMulInstContext* llvmirParser::fMulInst() {
  FMulInstContext *_localctx = _tracker.createInstance<FMulInstContext>(_ctx, getState());
  enterRule(_localctx, 46, llvmirParser::RuleFMulInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(llvmirParser::T__29);
    setState(349);
    typeValue();
    setState(350);
    match(llvmirParser::T__24);
    setState(351);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UDivInstContext ------------------------------------------------------------------

llvmirParser::UDivInstContext::UDivInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::UDivInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::UDivInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::UDivInstContext::getRuleIndex() const {
  return llvmirParser::RuleUDivInst;
}

void llvmirParser::UDivInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUDivInst(this);
}

void llvmirParser::UDivInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUDivInst(this);
}


std::any llvmirParser::UDivInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitUDivInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::UDivInstContext* llvmirParser::uDivInst() {
  UDivInstContext *_localctx = _tracker.createInstance<UDivInstContext>(_ctx, getState());
  enterRule(_localctx, 48, llvmirParser::RuleUDivInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    match(llvmirParser::T__30);
    setState(354);
    typeValue();
    setState(355);
    match(llvmirParser::T__24);
    setState(356);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SDivInstContext ------------------------------------------------------------------

llvmirParser::SDivInstContext::SDivInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::SDivInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::SDivInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::SDivInstContext::getRuleIndex() const {
  return llvmirParser::RuleSDivInst;
}

void llvmirParser::SDivInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSDivInst(this);
}

void llvmirParser::SDivInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSDivInst(this);
}


std::any llvmirParser::SDivInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitSDivInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::SDivInstContext* llvmirParser::sDivInst() {
  SDivInstContext *_localctx = _tracker.createInstance<SDivInstContext>(_ctx, getState());
  enterRule(_localctx, 50, llvmirParser::RuleSDivInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(llvmirParser::T__31);
    setState(359);
    typeValue();
    setState(360);
    match(llvmirParser::T__24);
    setState(361);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FDivInstContext ------------------------------------------------------------------

llvmirParser::FDivInstContext::FDivInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::FDivInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::FDivInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::FDivInstContext::getRuleIndex() const {
  return llvmirParser::RuleFDivInst;
}

void llvmirParser::FDivInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFDivInst(this);
}

void llvmirParser::FDivInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFDivInst(this);
}


std::any llvmirParser::FDivInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFDivInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FDivInstContext* llvmirParser::fDivInst() {
  FDivInstContext *_localctx = _tracker.createInstance<FDivInstContext>(_ctx, getState());
  enterRule(_localctx, 52, llvmirParser::RuleFDivInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    match(llvmirParser::T__32);
    setState(364);
    typeValue();
    setState(365);
    match(llvmirParser::T__24);
    setState(366);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- URemInstContext ------------------------------------------------------------------

llvmirParser::URemInstContext::URemInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::URemInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::URemInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::URemInstContext::getRuleIndex() const {
  return llvmirParser::RuleURemInst;
}

void llvmirParser::URemInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterURemInst(this);
}

void llvmirParser::URemInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitURemInst(this);
}


std::any llvmirParser::URemInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitURemInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::URemInstContext* llvmirParser::uRemInst() {
  URemInstContext *_localctx = _tracker.createInstance<URemInstContext>(_ctx, getState());
  enterRule(_localctx, 54, llvmirParser::RuleURemInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(llvmirParser::T__33);
    setState(369);
    typeValue();
    setState(370);
    match(llvmirParser::T__24);
    setState(371);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SRemInstContext ------------------------------------------------------------------

llvmirParser::SRemInstContext::SRemInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::SRemInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::SRemInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::SRemInstContext::getRuleIndex() const {
  return llvmirParser::RuleSRemInst;
}

void llvmirParser::SRemInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSRemInst(this);
}

void llvmirParser::SRemInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSRemInst(this);
}


std::any llvmirParser::SRemInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitSRemInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::SRemInstContext* llvmirParser::sRemInst() {
  SRemInstContext *_localctx = _tracker.createInstance<SRemInstContext>(_ctx, getState());
  enterRule(_localctx, 56, llvmirParser::RuleSRemInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    match(llvmirParser::T__34);
    setState(374);
    typeValue();
    setState(375);
    match(llvmirParser::T__24);
    setState(376);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FRemInstContext ------------------------------------------------------------------

llvmirParser::FRemInstContext::FRemInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::FRemInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::FRemInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::FRemInstContext::getRuleIndex() const {
  return llvmirParser::RuleFRemInst;
}

void llvmirParser::FRemInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFRemInst(this);
}

void llvmirParser::FRemInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFRemInst(this);
}


std::any llvmirParser::FRemInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFRemInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FRemInstContext* llvmirParser::fRemInst() {
  FRemInstContext *_localctx = _tracker.createInstance<FRemInstContext>(_ctx, getState());
  enterRule(_localctx, 58, llvmirParser::RuleFRemInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    match(llvmirParser::T__35);
    setState(379);
    typeValue();
    setState(380);
    match(llvmirParser::T__24);
    setState(381);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StoreInstContext ------------------------------------------------------------------

llvmirParser::StoreInstContext::StoreInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::TypeValueContext *> llvmirParser::StoreInstContext::typeValue() {
  return getRuleContexts<llvmirParser::TypeValueContext>();
}

llvmirParser::TypeValueContext* llvmirParser::StoreInstContext::typeValue(size_t i) {
  return getRuleContext<llvmirParser::TypeValueContext>(i);
}


size_t llvmirParser::StoreInstContext::getRuleIndex() const {
  return llvmirParser::RuleStoreInst;
}

void llvmirParser::StoreInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStoreInst(this);
}

void llvmirParser::StoreInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStoreInst(this);
}


std::any llvmirParser::StoreInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitStoreInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::StoreInstContext* llvmirParser::storeInst() {
  StoreInstContext *_localctx = _tracker.createInstance<StoreInstContext>(_ctx, getState());
  enterRule(_localctx, 60, llvmirParser::RuleStoreInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    match(llvmirParser::T__36);
    setState(384);
    typeValue();
    setState(385);
    match(llvmirParser::T__24);
    setState(386);
    typeValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShlInstContext ------------------------------------------------------------------

llvmirParser::ShlInstContext::ShlInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::ShlInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::ShlInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}

std::vector<llvmirParser::OverflowFlagContext *> llvmirParser::ShlInstContext::overflowFlag() {
  return getRuleContexts<llvmirParser::OverflowFlagContext>();
}

llvmirParser::OverflowFlagContext* llvmirParser::ShlInstContext::overflowFlag(size_t i) {
  return getRuleContext<llvmirParser::OverflowFlagContext>(i);
}


size_t llvmirParser::ShlInstContext::getRuleIndex() const {
  return llvmirParser::RuleShlInst;
}

void llvmirParser::ShlInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShlInst(this);
}

void llvmirParser::ShlInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShlInst(this);
}


std::any llvmirParser::ShlInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitShlInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ShlInstContext* llvmirParser::shlInst() {
  ShlInstContext *_localctx = _tracker.createInstance<ShlInstContext>(_ctx, getState());
  enterRule(_localctx, 62, llvmirParser::RuleShlInst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(llvmirParser::T__37);
    setState(392);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == llvmirParser::T__21

    || _la == llvmirParser::T__22) {
      setState(389);
      overflowFlag();
      setState(394);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(395);
    typeValue();
    setState(396);
    match(llvmirParser::T__24);
    setState(397);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LShrInstContext ------------------------------------------------------------------

llvmirParser::LShrInstContext::LShrInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::LShrInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::LShrInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::LShrInstContext::getRuleIndex() const {
  return llvmirParser::RuleLShrInst;
}

void llvmirParser::LShrInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLShrInst(this);
}

void llvmirParser::LShrInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLShrInst(this);
}


std::any llvmirParser::LShrInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitLShrInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::LShrInstContext* llvmirParser::lShrInst() {
  LShrInstContext *_localctx = _tracker.createInstance<LShrInstContext>(_ctx, getState());
  enterRule(_localctx, 64, llvmirParser::RuleLShrInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(llvmirParser::T__38);
    setState(400);
    typeValue();
    setState(401);
    match(llvmirParser::T__24);
    setState(402);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AShrInstContext ------------------------------------------------------------------

llvmirParser::AShrInstContext::AShrInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::AShrInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::AShrInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::AShrInstContext::getRuleIndex() const {
  return llvmirParser::RuleAShrInst;
}

void llvmirParser::AShrInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAShrInst(this);
}

void llvmirParser::AShrInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAShrInst(this);
}


std::any llvmirParser::AShrInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitAShrInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::AShrInstContext* llvmirParser::aShrInst() {
  AShrInstContext *_localctx = _tracker.createInstance<AShrInstContext>(_ctx, getState());
  enterRule(_localctx, 66, llvmirParser::RuleAShrInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    match(llvmirParser::T__39);
    setState(405);
    typeValue();
    setState(406);
    match(llvmirParser::T__24);
    setState(407);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndInstContext ------------------------------------------------------------------

llvmirParser::AndInstContext::AndInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::AndInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::AndInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::AndInstContext::getRuleIndex() const {
  return llvmirParser::RuleAndInst;
}

void llvmirParser::AndInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndInst(this);
}

void llvmirParser::AndInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndInst(this);
}


std::any llvmirParser::AndInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitAndInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::AndInstContext* llvmirParser::andInst() {
  AndInstContext *_localctx = _tracker.createInstance<AndInstContext>(_ctx, getState());
  enterRule(_localctx, 68, llvmirParser::RuleAndInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    match(llvmirParser::T__40);
    setState(410);
    typeValue();
    setState(411);
    match(llvmirParser::T__24);
    setState(412);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrInstContext ------------------------------------------------------------------

llvmirParser::OrInstContext::OrInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::OrInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::OrInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::OrInstContext::getRuleIndex() const {
  return llvmirParser::RuleOrInst;
}

void llvmirParser::OrInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrInst(this);
}

void llvmirParser::OrInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrInst(this);
}


std::any llvmirParser::OrInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitOrInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::OrInstContext* llvmirParser::orInst() {
  OrInstContext *_localctx = _tracker.createInstance<OrInstContext>(_ctx, getState());
  enterRule(_localctx, 70, llvmirParser::RuleOrInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(llvmirParser::T__41);
    setState(415);
    typeValue();
    setState(416);
    match(llvmirParser::T__24);
    setState(417);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorInstContext ------------------------------------------------------------------

llvmirParser::XorInstContext::XorInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::XorInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::XorInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::XorInstContext::getRuleIndex() const {
  return llvmirParser::RuleXorInst;
}

void llvmirParser::XorInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorInst(this);
}

void llvmirParser::XorInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorInst(this);
}


std::any llvmirParser::XorInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitXorInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::XorInstContext* llvmirParser::xorInst() {
  XorInstContext *_localctx = _tracker.createInstance<XorInstContext>(_ctx, getState());
  enterRule(_localctx, 72, llvmirParser::RuleXorInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(llvmirParser::T__42);
    setState(420);
    typeValue();
    setState(421);
    match(llvmirParser::T__24);
    setState(422);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllocaInstContext ------------------------------------------------------------------

llvmirParser::AllocaInstContext::AllocaInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeContext* llvmirParser::AllocaInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

llvmirParser::TypeValueContext* llvmirParser::AllocaInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}


size_t llvmirParser::AllocaInstContext::getRuleIndex() const {
  return llvmirParser::RuleAllocaInst;
}

void llvmirParser::AllocaInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAllocaInst(this);
}

void llvmirParser::AllocaInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAllocaInst(this);
}


std::any llvmirParser::AllocaInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitAllocaInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::AllocaInstContext* llvmirParser::allocaInst() {
  AllocaInstContext *_localctx = _tracker.createInstance<AllocaInstContext>(_ctx, getState());
  enterRule(_localctx, 74, llvmirParser::RuleAllocaInst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    match(llvmirParser::T__43);
    setState(425);
    type(0);
    setState(428);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == llvmirParser::T__24) {
      setState(426);
      match(llvmirParser::T__24);
      setState(427);
      typeValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadInstContext ------------------------------------------------------------------

llvmirParser::LoadInstContext::LoadInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeContext* llvmirParser::LoadInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

llvmirParser::TypeValueContext* llvmirParser::LoadInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}


size_t llvmirParser::LoadInstContext::getRuleIndex() const {
  return llvmirParser::RuleLoadInst;
}

void llvmirParser::LoadInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadInst(this);
}

void llvmirParser::LoadInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadInst(this);
}


std::any llvmirParser::LoadInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitLoadInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::LoadInstContext* llvmirParser::loadInst() {
  LoadInstContext *_localctx = _tracker.createInstance<LoadInstContext>(_ctx, getState());
  enterRule(_localctx, 76, llvmirParser::RuleLoadInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(llvmirParser::T__44);
    setState(431);
    type(0);
    setState(432);
    match(llvmirParser::T__24);
    setState(433);
    typeValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetElementPtrInstContext ------------------------------------------------------------------

llvmirParser::GetElementPtrInstContext::GetElementPtrInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeContext* llvmirParser::GetElementPtrInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

std::vector<llvmirParser::TypeValueContext *> llvmirParser::GetElementPtrInstContext::typeValue() {
  return getRuleContexts<llvmirParser::TypeValueContext>();
}

llvmirParser::TypeValueContext* llvmirParser::GetElementPtrInstContext::typeValue(size_t i) {
  return getRuleContext<llvmirParser::TypeValueContext>(i);
}

llvmirParser::InBoundsContext* llvmirParser::GetElementPtrInstContext::inBounds() {
  return getRuleContext<llvmirParser::InBoundsContext>(0);
}


size_t llvmirParser::GetElementPtrInstContext::getRuleIndex() const {
  return llvmirParser::RuleGetElementPtrInst;
}

void llvmirParser::GetElementPtrInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetElementPtrInst(this);
}

void llvmirParser::GetElementPtrInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetElementPtrInst(this);
}


std::any llvmirParser::GetElementPtrInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitGetElementPtrInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::GetElementPtrInstContext* llvmirParser::getElementPtrInst() {
  GetElementPtrInstContext *_localctx = _tracker.createInstance<GetElementPtrInstContext>(_ctx, getState());
  enterRule(_localctx, 78, llvmirParser::RuleGetElementPtrInst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(llvmirParser::T__45);
    setState(437);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == llvmirParser::T__92) {
      setState(436);
      inBounds();
    }
    setState(439);
    type(0);
    setState(440);
    match(llvmirParser::T__24);
    setState(441);
    typeValue();
    setState(446);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == llvmirParser::T__24) {
      setState(442);
      match(llvmirParser::T__24);
      setState(443);
      typeValue();
      setState(448);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitCastInstContext ------------------------------------------------------------------

llvmirParser::BitCastInstContext::BitCastInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::BitCastInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::TypeContext* llvmirParser::BitCastInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::BitCastInstContext::getRuleIndex() const {
  return llvmirParser::RuleBitCastInst;
}

void llvmirParser::BitCastInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitCastInst(this);
}

void llvmirParser::BitCastInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitCastInst(this);
}


std::any llvmirParser::BitCastInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitBitCastInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::BitCastInstContext* llvmirParser::bitCastInst() {
  BitCastInstContext *_localctx = _tracker.createInstance<BitCastInstContext>(_ctx, getState());
  enterRule(_localctx, 80, llvmirParser::RuleBitCastInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(llvmirParser::T__46);
    setState(450);
    typeValue();
    setState(451);
    match(llvmirParser::T__47);
    setState(452);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ZExtInstContext ------------------------------------------------------------------

llvmirParser::ZExtInstContext::ZExtInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::ZExtInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::TypeContext* llvmirParser::ZExtInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::ZExtInstContext::getRuleIndex() const {
  return llvmirParser::RuleZExtInst;
}

void llvmirParser::ZExtInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterZExtInst(this);
}

void llvmirParser::ZExtInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitZExtInst(this);
}


std::any llvmirParser::ZExtInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitZExtInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ZExtInstContext* llvmirParser::zExtInst() {
  ZExtInstContext *_localctx = _tracker.createInstance<ZExtInstContext>(_ctx, getState());
  enterRule(_localctx, 82, llvmirParser::RuleZExtInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    match(llvmirParser::T__48);
    setState(455);
    typeValue();
    setState(456);
    match(llvmirParser::T__47);
    setState(457);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SExtInstContext ------------------------------------------------------------------

llvmirParser::SExtInstContext::SExtInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::SExtInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::TypeContext* llvmirParser::SExtInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::SExtInstContext::getRuleIndex() const {
  return llvmirParser::RuleSExtInst;
}

void llvmirParser::SExtInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSExtInst(this);
}

void llvmirParser::SExtInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSExtInst(this);
}


std::any llvmirParser::SExtInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitSExtInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::SExtInstContext* llvmirParser::sExtInst() {
  SExtInstContext *_localctx = _tracker.createInstance<SExtInstContext>(_ctx, getState());
  enterRule(_localctx, 84, llvmirParser::RuleSExtInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    match(llvmirParser::T__49);
    setState(460);
    typeValue();
    setState(461);
    match(llvmirParser::T__47);
    setState(462);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SiToFpInstContext ------------------------------------------------------------------

llvmirParser::SiToFpInstContext::SiToFpInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::SiToFpInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::TypeContext* llvmirParser::SiToFpInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::SiToFpInstContext::getRuleIndex() const {
  return llvmirParser::RuleSiToFpInst;
}

void llvmirParser::SiToFpInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiToFpInst(this);
}

void llvmirParser::SiToFpInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiToFpInst(this);
}


std::any llvmirParser::SiToFpInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitSiToFpInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::SiToFpInstContext* llvmirParser::siToFpInst() {
  SiToFpInstContext *_localctx = _tracker.createInstance<SiToFpInstContext>(_ctx, getState());
  enterRule(_localctx, 86, llvmirParser::RuleSiToFpInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    match(llvmirParser::T__50);
    setState(465);
    typeValue();
    setState(466);
    match(llvmirParser::T__47);
    setState(467);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FpToSiInstContext ------------------------------------------------------------------

llvmirParser::FpToSiInstContext::FpToSiInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeValueContext* llvmirParser::FpToSiInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::TypeContext* llvmirParser::FpToSiInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::FpToSiInstContext::getRuleIndex() const {
  return llvmirParser::RuleFpToSiInst;
}

void llvmirParser::FpToSiInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFpToSiInst(this);
}

void llvmirParser::FpToSiInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFpToSiInst(this);
}


std::any llvmirParser::FpToSiInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFpToSiInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FpToSiInstContext* llvmirParser::fpToSiInst() {
  FpToSiInstContext *_localctx = _tracker.createInstance<FpToSiInstContext>(_ctx, getState());
  enterRule(_localctx, 88, llvmirParser::RuleFpToSiInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(llvmirParser::T__51);
    setState(470);
    typeValue();
    setState(471);
    match(llvmirParser::T__47);
    setState(472);
    type(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ICmpInstContext ------------------------------------------------------------------

llvmirParser::ICmpInstContext::ICmpInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::IPredContext* llvmirParser::ICmpInstContext::iPred() {
  return getRuleContext<llvmirParser::IPredContext>(0);
}

llvmirParser::TypeValueContext* llvmirParser::ICmpInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::ICmpInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::ICmpInstContext::getRuleIndex() const {
  return llvmirParser::RuleICmpInst;
}

void llvmirParser::ICmpInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterICmpInst(this);
}

void llvmirParser::ICmpInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitICmpInst(this);
}


std::any llvmirParser::ICmpInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitICmpInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ICmpInstContext* llvmirParser::iCmpInst() {
  ICmpInstContext *_localctx = _tracker.createInstance<ICmpInstContext>(_ctx, getState());
  enterRule(_localctx, 90, llvmirParser::RuleICmpInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(llvmirParser::T__52);
    setState(475);
    iPred();
    setState(476);
    typeValue();
    setState(477);
    match(llvmirParser::T__24);
    setState(478);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FCmpInstContext ------------------------------------------------------------------

llvmirParser::FCmpInstContext::FCmpInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::FPredContext* llvmirParser::FCmpInstContext::fPred() {
  return getRuleContext<llvmirParser::FPredContext>(0);
}

llvmirParser::TypeValueContext* llvmirParser::FCmpInstContext::typeValue() {
  return getRuleContext<llvmirParser::TypeValueContext>(0);
}

llvmirParser::ValueContext* llvmirParser::FCmpInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::FCmpInstContext::getRuleIndex() const {
  return llvmirParser::RuleFCmpInst;
}

void llvmirParser::FCmpInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFCmpInst(this);
}

void llvmirParser::FCmpInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFCmpInst(this);
}


std::any llvmirParser::FCmpInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFCmpInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FCmpInstContext* llvmirParser::fCmpInst() {
  FCmpInstContext *_localctx = _tracker.createInstance<FCmpInstContext>(_ctx, getState());
  enterRule(_localctx, 92, llvmirParser::RuleFCmpInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
    match(llvmirParser::T__53);
    setState(481);
    fPred();
    setState(482);
    typeValue();
    setState(483);
    match(llvmirParser::T__24);
    setState(484);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallInstContext ------------------------------------------------------------------

llvmirParser::CallInstContext::CallInstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeContext* llvmirParser::CallInstContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

llvmirParser::ValueContext* llvmirParser::CallInstContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}

llvmirParser::ArgsContext* llvmirParser::CallInstContext::args() {
  return getRuleContext<llvmirParser::ArgsContext>(0);
}


size_t llvmirParser::CallInstContext::getRuleIndex() const {
  return llvmirParser::RuleCallInst;
}

void llvmirParser::CallInstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallInst(this);
}

void llvmirParser::CallInstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallInst(this);
}


std::any llvmirParser::CallInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitCallInst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::CallInstContext* llvmirParser::callInst() {
  CallInstContext *_localctx = _tracker.createInstance<CallInstContext>(_ctx, getState());
  enterRule(_localctx, 94, llvmirParser::RuleCallInst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(llvmirParser::T__54);
    setState(487);
    type(0);
    setState(488);
    value();
    setState(489);
    match(llvmirParser::T__17);
    setState(490);
    args();
    setState(491);
    match(llvmirParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetTermContext ------------------------------------------------------------------

llvmirParser::RetTermContext::RetTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::ConcreteTypeContext* llvmirParser::RetTermContext::concreteType() {
  return getRuleContext<llvmirParser::ConcreteTypeContext>(0);
}

llvmirParser::ValueContext* llvmirParser::RetTermContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::RetTermContext::getRuleIndex() const {
  return llvmirParser::RuleRetTerm;
}

void llvmirParser::RetTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetTerm(this);
}

void llvmirParser::RetTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetTerm(this);
}


std::any llvmirParser::RetTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitRetTerm(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::RetTermContext* llvmirParser::retTerm() {
  RetTermContext *_localctx = _tracker.createInstance<RetTermContext>(_ctx, getState());
  enterRule(_localctx, 96, llvmirParser::RuleRetTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(499);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(493);
      match(llvmirParser::T__55);
      setState(494);
      match(llvmirParser::T__56);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(495);
      match(llvmirParser::T__55);
      setState(496);
      concreteType();
      setState(497);
      value();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BrTermContext ------------------------------------------------------------------

llvmirParser::BrTermContext::BrTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::LabelContext* llvmirParser::BrTermContext::label() {
  return getRuleContext<llvmirParser::LabelContext>(0);
}


size_t llvmirParser::BrTermContext::getRuleIndex() const {
  return llvmirParser::RuleBrTerm;
}

void llvmirParser::BrTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBrTerm(this);
}

void llvmirParser::BrTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBrTerm(this);
}


std::any llvmirParser::BrTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitBrTerm(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::BrTermContext* llvmirParser::brTerm() {
  BrTermContext *_localctx = _tracker.createInstance<BrTermContext>(_ctx, getState());
  enterRule(_localctx, 98, llvmirParser::RuleBrTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    match(llvmirParser::T__57);
    setState(502);
    label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondBrTermContext ------------------------------------------------------------------

llvmirParser::CondBrTermContext::CondBrTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::CondBrTermContext::IntType() {
  return getToken(llvmirParser::IntType, 0);
}

llvmirParser::ValueContext* llvmirParser::CondBrTermContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}

std::vector<llvmirParser::LabelContext *> llvmirParser::CondBrTermContext::label() {
  return getRuleContexts<llvmirParser::LabelContext>();
}

llvmirParser::LabelContext* llvmirParser::CondBrTermContext::label(size_t i) {
  return getRuleContext<llvmirParser::LabelContext>(i);
}


size_t llvmirParser::CondBrTermContext::getRuleIndex() const {
  return llvmirParser::RuleCondBrTerm;
}

void llvmirParser::CondBrTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondBrTerm(this);
}

void llvmirParser::CondBrTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondBrTerm(this);
}


std::any llvmirParser::CondBrTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitCondBrTerm(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::CondBrTermContext* llvmirParser::condBrTerm() {
  CondBrTermContext *_localctx = _tracker.createInstance<CondBrTermContext>(_ctx, getState());
  enterRule(_localctx, 100, llvmirParser::RuleCondBrTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(llvmirParser::T__57);
    setState(505);
    match(llvmirParser::IntType);
    setState(506);
    value();
    setState(507);
    match(llvmirParser::T__24);
    setState(508);
    label();
    setState(509);
    match(llvmirParser::T__24);
    setState(510);
    label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatKindContext ------------------------------------------------------------------

llvmirParser::FloatKindContext::FloatKindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::FloatKindContext::getRuleIndex() const {
  return llvmirParser::RuleFloatKind;
}

void llvmirParser::FloatKindContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatKind(this);
}

void llvmirParser::FloatKindContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatKind(this);
}


std::any llvmirParser::FloatKindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFloatKind(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FloatKindContext* llvmirParser::floatKind() {
  FloatKindContext *_localctx = _tracker.createInstance<FloatKindContext>(_ctx, getState());
  enterRule(_localctx, 102, llvmirParser::RuleFloatKind);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(512);
    _la = _input->LA(1);
    if (!(((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & 127) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeValueContext ------------------------------------------------------------------

llvmirParser::TypeValueContext::TypeValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::ConcreteTypeContext* llvmirParser::TypeValueContext::concreteType() {
  return getRuleContext<llvmirParser::ConcreteTypeContext>(0);
}

llvmirParser::ValueContext* llvmirParser::TypeValueContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::TypeValueContext::getRuleIndex() const {
  return llvmirParser::RuleTypeValue;
}

void llvmirParser::TypeValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeValue(this);
}

void llvmirParser::TypeValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeValue(this);
}


std::any llvmirParser::TypeValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitTypeValue(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::TypeValueContext* llvmirParser::typeValue() {
  TypeValueContext *_localctx = _tracker.createInstance<TypeValueContext>(_ctx, getState());
  enterRule(_localctx, 104, llvmirParser::RuleTypeValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    concreteType();
    setState(515);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConcreteTypeContext ------------------------------------------------------------------

llvmirParser::ConcreteTypeContext::ConcreteTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::IntTypeContext* llvmirParser::ConcreteTypeContext::intType() {
  return getRuleContext<llvmirParser::IntTypeContext>(0);
}

llvmirParser::FloatTypeContext* llvmirParser::ConcreteTypeContext::floatType() {
  return getRuleContext<llvmirParser::FloatTypeContext>(0);
}

llvmirParser::PointerTypeContext* llvmirParser::ConcreteTypeContext::pointerType() {
  return getRuleContext<llvmirParser::PointerTypeContext>(0);
}

llvmirParser::VectorTypeContext* llvmirParser::ConcreteTypeContext::vectorType() {
  return getRuleContext<llvmirParser::VectorTypeContext>(0);
}

llvmirParser::LabelTypeContext* llvmirParser::ConcreteTypeContext::labelType() {
  return getRuleContext<llvmirParser::LabelTypeContext>(0);
}

llvmirParser::ArrayTypeContext* llvmirParser::ConcreteTypeContext::arrayType() {
  return getRuleContext<llvmirParser::ArrayTypeContext>(0);
}

llvmirParser::StructTypeContext* llvmirParser::ConcreteTypeContext::structType() {
  return getRuleContext<llvmirParser::StructTypeContext>(0);
}

llvmirParser::NamedTypeContext* llvmirParser::ConcreteTypeContext::namedType() {
  return getRuleContext<llvmirParser::NamedTypeContext>(0);
}

llvmirParser::MmxTypeContext* llvmirParser::ConcreteTypeContext::mmxType() {
  return getRuleContext<llvmirParser::MmxTypeContext>(0);
}

llvmirParser::TokenTypeContext* llvmirParser::ConcreteTypeContext::tokenType() {
  return getRuleContext<llvmirParser::TokenTypeContext>(0);
}


size_t llvmirParser::ConcreteTypeContext::getRuleIndex() const {
  return llvmirParser::RuleConcreteType;
}

void llvmirParser::ConcreteTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConcreteType(this);
}

void llvmirParser::ConcreteTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConcreteType(this);
}


std::any llvmirParser::ConcreteTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitConcreteType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ConcreteTypeContext* llvmirParser::concreteType() {
  ConcreteTypeContext *_localctx = _tracker.createInstance<ConcreteTypeContext>(_ctx, getState());
  enterRule(_localctx, 106, llvmirParser::RuleConcreteType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(527);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(517);
      intType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(518);
      floatType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(519);
      pointerType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(520);
      vectorType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(521);
      labelType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(522);
      arrayType();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(523);
      structType();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(524);
      namedType();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(525);
      mmxType();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(526);
      tokenType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

llvmirParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::ConstantContext* llvmirParser::ValueContext::constant() {
  return getRuleContext<llvmirParser::ConstantContext>(0);
}

tree::TerminalNode* llvmirParser::ValueContext::LocalIdent() {
  return getToken(llvmirParser::LocalIdent, 0);
}

tree::TerminalNode* llvmirParser::ValueContext::GlobalIdent() {
  return getToken(llvmirParser::GlobalIdent, 0);
}


size_t llvmirParser::ValueContext::getRuleIndex() const {
  return llvmirParser::RuleValue;
}

void llvmirParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void llvmirParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any llvmirParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ValueContext* llvmirParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 108, llvmirParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(532);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case llvmirParser::T__19:
      case llvmirParser::T__65:
      case llvmirParser::T__66:
      case llvmirParser::T__67:
      case llvmirParser::T__68:
      case llvmirParser::T__69:
      case llvmirParser::T__71:
      case llvmirParser::T__93:
      case llvmirParser::IntLit:
      case llvmirParser::FloatLit: {
        enterOuterAlt(_localctx, 1);
        setState(529);
        constant();
        break;
      }

      case llvmirParser::LocalIdent: {
        enterOuterAlt(_localctx, 2);
        setState(530);
        match(llvmirParser::LocalIdent);
        break;
      }

      case llvmirParser::GlobalIdent: {
        enterOuterAlt(_localctx, 3);
        setState(531);
        match(llvmirParser::GlobalIdent);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

llvmirParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::BoolConstContext* llvmirParser::ConstantContext::boolConst() {
  return getRuleContext<llvmirParser::BoolConstContext>(0);
}

llvmirParser::IntConstContext* llvmirParser::ConstantContext::intConst() {
  return getRuleContext<llvmirParser::IntConstContext>(0);
}

llvmirParser::FloatConstContext* llvmirParser::ConstantContext::floatConst() {
  return getRuleContext<llvmirParser::FloatConstContext>(0);
}

llvmirParser::NullConstContext* llvmirParser::ConstantContext::nullConst() {
  return getRuleContext<llvmirParser::NullConstContext>(0);
}

llvmirParser::NoneConstContext* llvmirParser::ConstantContext::noneConst() {
  return getRuleContext<llvmirParser::NoneConstContext>(0);
}

llvmirParser::StructConstContext* llvmirParser::ConstantContext::structConst() {
  return getRuleContext<llvmirParser::StructConstContext>(0);
}

llvmirParser::ArrayConstContext* llvmirParser::ConstantContext::arrayConst() {
  return getRuleContext<llvmirParser::ArrayConstContext>(0);
}

llvmirParser::VectorConstContext* llvmirParser::ConstantContext::vectorConst() {
  return getRuleContext<llvmirParser::VectorConstContext>(0);
}

llvmirParser::ZeroInitializerConstContext* llvmirParser::ConstantContext::zeroInitializerConst() {
  return getRuleContext<llvmirParser::ZeroInitializerConstContext>(0);
}


size_t llvmirParser::ConstantContext::getRuleIndex() const {
  return llvmirParser::RuleConstant;
}

void llvmirParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void llvmirParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


std::any llvmirParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ConstantContext* llvmirParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 110, llvmirParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(543);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(534);
      boolConst();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(535);
      intConst();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(536);
      floatConst();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(537);
      nullConst();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(538);
      noneConst();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(539);
      structConst();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(540);
      arrayConst();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(541);
      vectorConst();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(542);
      zeroInitializerConst();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolConstContext ------------------------------------------------------------------

llvmirParser::BoolConstContext::BoolConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::BoolConstContext::getRuleIndex() const {
  return llvmirParser::RuleBoolConst;
}

void llvmirParser::BoolConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolConst(this);
}

void llvmirParser::BoolConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolConst(this);
}


std::any llvmirParser::BoolConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitBoolConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::BoolConstContext* llvmirParser::boolConst() {
  BoolConstContext *_localctx = _tracker.createInstance<BoolConstContext>(_ctx, getState());
  enterRule(_localctx, 112, llvmirParser::RuleBoolConst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    _la = _input->LA(1);
    if (!(_la == llvmirParser::T__65

    || _la == llvmirParser::T__66)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntConstContext ------------------------------------------------------------------

llvmirParser::IntConstContext::IntConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::IntConstContext::IntLit() {
  return getToken(llvmirParser::IntLit, 0);
}


size_t llvmirParser::IntConstContext::getRuleIndex() const {
  return llvmirParser::RuleIntConst;
}

void llvmirParser::IntConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntConst(this);
}

void llvmirParser::IntConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntConst(this);
}


std::any llvmirParser::IntConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitIntConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::IntConstContext* llvmirParser::intConst() {
  IntConstContext *_localctx = _tracker.createInstance<IntConstContext>(_ctx, getState());
  enterRule(_localctx, 114, llvmirParser::RuleIntConst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    match(llvmirParser::IntLit);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatConstContext ------------------------------------------------------------------

llvmirParser::FloatConstContext::FloatConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::FloatConstContext::FloatLit() {
  return getToken(llvmirParser::FloatLit, 0);
}


size_t llvmirParser::FloatConstContext::getRuleIndex() const {
  return llvmirParser::RuleFloatConst;
}

void llvmirParser::FloatConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatConst(this);
}

void llvmirParser::FloatConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatConst(this);
}


std::any llvmirParser::FloatConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFloatConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FloatConstContext* llvmirParser::floatConst() {
  FloatConstContext *_localctx = _tracker.createInstance<FloatConstContext>(_ctx, getState());
  enterRule(_localctx, 116, llvmirParser::RuleFloatConst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    match(llvmirParser::FloatLit);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullConstContext ------------------------------------------------------------------

llvmirParser::NullConstContext::NullConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::NullConstContext::getRuleIndex() const {
  return llvmirParser::RuleNullConst;
}

void llvmirParser::NullConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullConst(this);
}

void llvmirParser::NullConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullConst(this);
}


std::any llvmirParser::NullConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitNullConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::NullConstContext* llvmirParser::nullConst() {
  NullConstContext *_localctx = _tracker.createInstance<NullConstContext>(_ctx, getState());
  enterRule(_localctx, 118, llvmirParser::RuleNullConst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    match(llvmirParser::T__67);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoneConstContext ------------------------------------------------------------------

llvmirParser::NoneConstContext::NoneConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::NoneConstContext::getRuleIndex() const {
  return llvmirParser::RuleNoneConst;
}

void llvmirParser::NoneConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoneConst(this);
}

void llvmirParser::NoneConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoneConst(this);
}


std::any llvmirParser::NoneConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitNoneConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::NoneConstContext* llvmirParser::noneConst() {
  NoneConstContext *_localctx = _tracker.createInstance<NoneConstContext>(_ctx, getState());
  enterRule(_localctx, 120, llvmirParser::RuleNoneConst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(llvmirParser::T__68);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructConstContext ------------------------------------------------------------------

llvmirParser::StructConstContext::StructConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::TypeConstContext *> llvmirParser::StructConstContext::typeConst() {
  return getRuleContexts<llvmirParser::TypeConstContext>();
}

llvmirParser::TypeConstContext* llvmirParser::StructConstContext::typeConst(size_t i) {
  return getRuleContext<llvmirParser::TypeConstContext>(i);
}


size_t llvmirParser::StructConstContext::getRuleIndex() const {
  return llvmirParser::RuleStructConst;
}

void llvmirParser::StructConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructConst(this);
}

void llvmirParser::StructConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructConst(this);
}


std::any llvmirParser::StructConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitStructConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::StructConstContext* llvmirParser::structConst() {
  StructConstContext *_localctx = _tracker.createInstance<StructConstContext>(_ctx, getState());
  enterRule(_localctx, 122, llvmirParser::RuleStructConst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(581);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case llvmirParser::T__19: {
        enterOuterAlt(_localctx, 1);
        setState(555);
        match(llvmirParser::T__19);
        setState(564);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
          setState(556);
          typeConst();
          setState(561);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == llvmirParser::T__24) {
            setState(557);
            match(llvmirParser::T__24);
            setState(558);
            typeConst();
            setState(563);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(566);
        match(llvmirParser::T__20);
        break;
      }

      case llvmirParser::T__69: {
        enterOuterAlt(_localctx, 2);
        setState(567);
        match(llvmirParser::T__69);
        setState(568);
        match(llvmirParser::T__19);
        setState(577);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
          setState(569);
          typeConst();
          setState(574);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == llvmirParser::T__24) {
            setState(570);
            match(llvmirParser::T__24);
            setState(571);
            typeConst();
            setState(576);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(579);
        match(llvmirParser::T__20);
        setState(580);
        match(llvmirParser::T__70);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayConstContext ------------------------------------------------------------------

llvmirParser::ArrayConstContext::ArrayConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::TypeConstContext *> llvmirParser::ArrayConstContext::typeConst() {
  return getRuleContexts<llvmirParser::TypeConstContext>();
}

llvmirParser::TypeConstContext* llvmirParser::ArrayConstContext::typeConst(size_t i) {
  return getRuleContext<llvmirParser::TypeConstContext>(i);
}


size_t llvmirParser::ArrayConstContext::getRuleIndex() const {
  return llvmirParser::RuleArrayConst;
}

void llvmirParser::ArrayConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayConst(this);
}

void llvmirParser::ArrayConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayConst(this);
}


std::any llvmirParser::ArrayConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitArrayConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ArrayConstContext* llvmirParser::arrayConst() {
  ArrayConstContext *_localctx = _tracker.createInstance<ArrayConstContext>(_ctx, getState());
  enterRule(_localctx, 124, llvmirParser::RuleArrayConst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    match(llvmirParser::T__71);
    setState(592);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
      setState(584);
      typeConst();
      setState(589);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == llvmirParser::T__24) {
        setState(585);
        match(llvmirParser::T__24);
        setState(586);
        typeConst();
        setState(591);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(594);
    match(llvmirParser::T__72);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorConstContext ------------------------------------------------------------------

llvmirParser::VectorConstContext::VectorConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::TypeConstContext *> llvmirParser::VectorConstContext::typeConst() {
  return getRuleContexts<llvmirParser::TypeConstContext>();
}

llvmirParser::TypeConstContext* llvmirParser::VectorConstContext::typeConst(size_t i) {
  return getRuleContext<llvmirParser::TypeConstContext>(i);
}


size_t llvmirParser::VectorConstContext::getRuleIndex() const {
  return llvmirParser::RuleVectorConst;
}

void llvmirParser::VectorConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorConst(this);
}

void llvmirParser::VectorConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorConst(this);
}


std::any llvmirParser::VectorConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitVectorConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::VectorConstContext* llvmirParser::vectorConst() {
  VectorConstContext *_localctx = _tracker.createInstance<VectorConstContext>(_ctx, getState());
  enterRule(_localctx, 126, llvmirParser::RuleVectorConst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    match(llvmirParser::T__69);
    setState(605);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
      setState(597);
      typeConst();
      setState(602);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == llvmirParser::T__24) {
        setState(598);
        match(llvmirParser::T__24);
        setState(599);
        typeConst();
        setState(604);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(607);
    match(llvmirParser::T__70);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeConstContext ------------------------------------------------------------------

llvmirParser::TypeConstContext::TypeConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::ConcreteTypeContext* llvmirParser::TypeConstContext::concreteType() {
  return getRuleContext<llvmirParser::ConcreteTypeContext>(0);
}

llvmirParser::ConstantContext* llvmirParser::TypeConstContext::constant() {
  return getRuleContext<llvmirParser::ConstantContext>(0);
}


size_t llvmirParser::TypeConstContext::getRuleIndex() const {
  return llvmirParser::RuleTypeConst;
}

void llvmirParser::TypeConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeConst(this);
}

void llvmirParser::TypeConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeConst(this);
}


std::any llvmirParser::TypeConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitTypeConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::TypeConstContext* llvmirParser::typeConst() {
  TypeConstContext *_localctx = _tracker.createInstance<TypeConstContext>(_ctx, getState());
  enterRule(_localctx, 128, llvmirParser::RuleTypeConst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    concreteType();
    setState(610);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

llvmirParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::IntTypeContext* llvmirParser::TypeContext::intType() {
  return getRuleContext<llvmirParser::IntTypeContext>(0);
}

llvmirParser::FloatTypeContext* llvmirParser::TypeContext::floatType() {
  return getRuleContext<llvmirParser::FloatTypeContext>(0);
}

llvmirParser::OpaquePointerTypeContext* llvmirParser::TypeContext::opaquePointerType() {
  return getRuleContext<llvmirParser::OpaquePointerTypeContext>(0);
}

llvmirParser::VectorTypeContext* llvmirParser::TypeContext::vectorType() {
  return getRuleContext<llvmirParser::VectorTypeContext>(0);
}

llvmirParser::LabelTypeContext* llvmirParser::TypeContext::labelType() {
  return getRuleContext<llvmirParser::LabelTypeContext>(0);
}

llvmirParser::ArrayTypeContext* llvmirParser::TypeContext::arrayType() {
  return getRuleContext<llvmirParser::ArrayTypeContext>(0);
}

llvmirParser::StructTypeContext* llvmirParser::TypeContext::structType() {
  return getRuleContext<llvmirParser::StructTypeContext>(0);
}

llvmirParser::NamedTypeContext* llvmirParser::TypeContext::namedType() {
  return getRuleContext<llvmirParser::NamedTypeContext>(0);
}

llvmirParser::MmxTypeContext* llvmirParser::TypeContext::mmxType() {
  return getRuleContext<llvmirParser::MmxTypeContext>(0);
}

llvmirParser::TokenTypeContext* llvmirParser::TypeContext::tokenType() {
  return getRuleContext<llvmirParser::TokenTypeContext>(0);
}

llvmirParser::TypeContext* llvmirParser::TypeContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

llvmirParser::ParamsContext* llvmirParser::TypeContext::params() {
  return getRuleContext<llvmirParser::ParamsContext>(0);
}

llvmirParser::AddrSpaceContext* llvmirParser::TypeContext::addrSpace() {
  return getRuleContext<llvmirParser::AddrSpaceContext>(0);
}


size_t llvmirParser::TypeContext::getRuleIndex() const {
  return llvmirParser::RuleType;
}

void llvmirParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void llvmirParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any llvmirParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}


llvmirParser::TypeContext* llvmirParser::type() {
   return type(0);
}

llvmirParser::TypeContext* llvmirParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  llvmirParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  llvmirParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 130;
  enterRecursionRule(_localctx, 130, llvmirParser::RuleType, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(625);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(613);
      match(llvmirParser::T__56);
      break;
    }

    case 2: {
      setState(614);
      match(llvmirParser::T__73);
      break;
    }

    case 3: {
      setState(615);
      intType();
      break;
    }

    case 4: {
      setState(616);
      floatType();
      break;
    }

    case 5: {
      setState(617);
      opaquePointerType();
      break;
    }

    case 6: {
      setState(618);
      vectorType();
      break;
    }

    case 7: {
      setState(619);
      labelType();
      break;
    }

    case 8: {
      setState(620);
      arrayType();
      break;
    }

    case 9: {
      setState(621);
      structType();
      break;
    }

    case 10: {
      setState(622);
      namedType();
      break;
    }

    case 11: {
      setState(623);
      mmxType();
      break;
    }

    case 12: {
      setState(624);
      tokenType();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(639);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(637);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TypeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleType);
          setState(627);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(628);
          match(llvmirParser::T__17);
          setState(629);
          params();
          setState(630);
          match(llvmirParser::T__18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TypeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleType);
          setState(632);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(634);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == llvmirParser::T__81) {
            setState(633);
            addrSpace();
          }
          setState(636);
          match(llvmirParser::T__74);
          break;
        }

        default:
          break;
        } 
      }
      setState(641);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IntTypeContext ------------------------------------------------------------------

llvmirParser::IntTypeContext::IntTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::IntTypeContext::IntType() {
  return getToken(llvmirParser::IntType, 0);
}


size_t llvmirParser::IntTypeContext::getRuleIndex() const {
  return llvmirParser::RuleIntType;
}

void llvmirParser::IntTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntType(this);
}

void llvmirParser::IntTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntType(this);
}


std::any llvmirParser::IntTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitIntType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::IntTypeContext* llvmirParser::intType() {
  IntTypeContext *_localctx = _tracker.createInstance<IntTypeContext>(_ctx, getState());
  enterRule(_localctx, 132, llvmirParser::RuleIntType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(642);
    match(llvmirParser::IntType);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatTypeContext ------------------------------------------------------------------

llvmirParser::FloatTypeContext::FloatTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::FloatKindContext* llvmirParser::FloatTypeContext::floatKind() {
  return getRuleContext<llvmirParser::FloatKindContext>(0);
}


size_t llvmirParser::FloatTypeContext::getRuleIndex() const {
  return llvmirParser::RuleFloatType;
}

void llvmirParser::FloatTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatType(this);
}

void llvmirParser::FloatTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatType(this);
}


std::any llvmirParser::FloatTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFloatType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FloatTypeContext* llvmirParser::floatType() {
  FloatTypeContext *_localctx = _tracker.createInstance<FloatTypeContext>(_ctx, getState());
  enterRule(_localctx, 134, llvmirParser::RuleFloatType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    floatKind();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerTypeContext ------------------------------------------------------------------

llvmirParser::PointerTypeContext::PointerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeContext* llvmirParser::PointerTypeContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

llvmirParser::AddrSpaceContext* llvmirParser::PointerTypeContext::addrSpace() {
  return getRuleContext<llvmirParser::AddrSpaceContext>(0);
}

llvmirParser::OpaquePointerTypeContext* llvmirParser::PointerTypeContext::opaquePointerType() {
  return getRuleContext<llvmirParser::OpaquePointerTypeContext>(0);
}


size_t llvmirParser::PointerTypeContext::getRuleIndex() const {
  return llvmirParser::RulePointerType;
}

void llvmirParser::PointerTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerType(this);
}

void llvmirParser::PointerTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerType(this);
}


std::any llvmirParser::PointerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitPointerType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::PointerTypeContext* llvmirParser::pointerType() {
  PointerTypeContext *_localctx = _tracker.createInstance<PointerTypeContext>(_ctx, getState());
  enterRule(_localctx, 136, llvmirParser::RulePointerType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(653);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(646);
      type(0);
      setState(648);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == llvmirParser::T__81) {
        setState(647);
        addrSpace();
      }
      setState(650);
      match(llvmirParser::T__74);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(652);
      opaquePointerType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorTypeContext ------------------------------------------------------------------

llvmirParser::VectorTypeContext::VectorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::VectorTypeContext::IntLit() {
  return getToken(llvmirParser::IntLit, 0);
}

llvmirParser::TypeContext* llvmirParser::VectorTypeContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::VectorTypeContext::getRuleIndex() const {
  return llvmirParser::RuleVectorType;
}

void llvmirParser::VectorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorType(this);
}

void llvmirParser::VectorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorType(this);
}


std::any llvmirParser::VectorTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitVectorType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::VectorTypeContext* llvmirParser::vectorType() {
  VectorTypeContext *_localctx = _tracker.createInstance<VectorTypeContext>(_ctx, getState());
  enterRule(_localctx, 138, llvmirParser::RuleVectorType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(669);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(655);
      match(llvmirParser::T__69);
      setState(656);
      match(llvmirParser::IntLit);
      setState(657);
      match(llvmirParser::T__75);
      setState(658);
      type(0);
      setState(659);
      match(llvmirParser::T__70);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(661);
      match(llvmirParser::T__69);
      setState(662);
      match(llvmirParser::T__76);
      setState(663);
      match(llvmirParser::T__75);
      setState(664);
      match(llvmirParser::IntLit);
      setState(665);
      match(llvmirParser::T__75);
      setState(666);
      type(0);
      setState(667);
      match(llvmirParser::T__70);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelTypeContext ------------------------------------------------------------------

llvmirParser::LabelTypeContext::LabelTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::LabelTypeContext::getRuleIndex() const {
  return llvmirParser::RuleLabelType;
}

void llvmirParser::LabelTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelType(this);
}

void llvmirParser::LabelTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelType(this);
}


std::any llvmirParser::LabelTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitLabelType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::LabelTypeContext* llvmirParser::labelType() {
  LabelTypeContext *_localctx = _tracker.createInstance<LabelTypeContext>(_ctx, getState());
  enterRule(_localctx, 140, llvmirParser::RuleLabelType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    match(llvmirParser::T__77);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

llvmirParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::ArrayTypeContext::IntLit() {
  return getToken(llvmirParser::IntLit, 0);
}

llvmirParser::TypeContext* llvmirParser::ArrayTypeContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}


size_t llvmirParser::ArrayTypeContext::getRuleIndex() const {
  return llvmirParser::RuleArrayType;
}

void llvmirParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void llvmirParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


std::any llvmirParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ArrayTypeContext* llvmirParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 142, llvmirParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(673);
    match(llvmirParser::T__71);
    setState(674);
    match(llvmirParser::IntLit);
    setState(675);
    match(llvmirParser::T__75);
    setState(676);
    type(0);
    setState(677);
    match(llvmirParser::T__72);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructTypeContext ------------------------------------------------------------------

llvmirParser::StructTypeContext::StructTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::TypeContext *> llvmirParser::StructTypeContext::type() {
  return getRuleContexts<llvmirParser::TypeContext>();
}

llvmirParser::TypeContext* llvmirParser::StructTypeContext::type(size_t i) {
  return getRuleContext<llvmirParser::TypeContext>(i);
}


size_t llvmirParser::StructTypeContext::getRuleIndex() const {
  return llvmirParser::RuleStructType;
}

void llvmirParser::StructTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructType(this);
}

void llvmirParser::StructTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructType(this);
}


std::any llvmirParser::StructTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitStructType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::StructTypeContext* llvmirParser::structType() {
  StructTypeContext *_localctx = _tracker.createInstance<StructTypeContext>(_ctx, getState());
  enterRule(_localctx, 144, llvmirParser::RuleStructType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(705);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case llvmirParser::T__19: {
        enterOuterAlt(_localctx, 1);
        setState(679);
        match(llvmirParser::T__19);
        setState(688);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
          setState(680);
          type(0);
          setState(685);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == llvmirParser::T__24) {
            setState(681);
            match(llvmirParser::T__24);
            setState(682);
            type(0);
            setState(687);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(690);
        match(llvmirParser::T__20);
        break;
      }

      case llvmirParser::T__69: {
        enterOuterAlt(_localctx, 2);
        setState(691);
        match(llvmirParser::T__69);
        setState(692);
        match(llvmirParser::T__19);
        setState(701);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
          setState(693);
          type(0);
          setState(698);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == llvmirParser::T__24) {
            setState(694);
            match(llvmirParser::T__24);
            setState(695);
            type(0);
            setState(700);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(703);
        match(llvmirParser::T__20);
        setState(704);
        match(llvmirParser::T__70);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamedTypeContext ------------------------------------------------------------------

llvmirParser::NamedTypeContext::NamedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::NamedTypeContext::LocalIdent() {
  return getToken(llvmirParser::LocalIdent, 0);
}


size_t llvmirParser::NamedTypeContext::getRuleIndex() const {
  return llvmirParser::RuleNamedType;
}

void llvmirParser::NamedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamedType(this);
}

void llvmirParser::NamedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamedType(this);
}


std::any llvmirParser::NamedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitNamedType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::NamedTypeContext* llvmirParser::namedType() {
  NamedTypeContext *_localctx = _tracker.createInstance<NamedTypeContext>(_ctx, getState());
  enterRule(_localctx, 146, llvmirParser::RuleNamedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(707);
    match(llvmirParser::LocalIdent);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MmxTypeContext ------------------------------------------------------------------

llvmirParser::MmxTypeContext::MmxTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::MmxTypeContext::getRuleIndex() const {
  return llvmirParser::RuleMmxType;
}

void llvmirParser::MmxTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMmxType(this);
}

void llvmirParser::MmxTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMmxType(this);
}


std::any llvmirParser::MmxTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitMmxType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::MmxTypeContext* llvmirParser::mmxType() {
  MmxTypeContext *_localctx = _tracker.createInstance<MmxTypeContext>(_ctx, getState());
  enterRule(_localctx, 148, llvmirParser::RuleMmxType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(709);
    match(llvmirParser::T__78);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokenTypeContext ------------------------------------------------------------------

llvmirParser::TokenTypeContext::TokenTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::TokenTypeContext::getRuleIndex() const {
  return llvmirParser::RuleTokenType;
}

void llvmirParser::TokenTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTokenType(this);
}

void llvmirParser::TokenTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTokenType(this);
}


std::any llvmirParser::TokenTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitTokenType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::TokenTypeContext* llvmirParser::tokenType() {
  TokenTypeContext *_localctx = _tracker.createInstance<TokenTypeContext>(_ctx, getState());
  enterRule(_localctx, 150, llvmirParser::RuleTokenType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(711);
    match(llvmirParser::T__79);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaquePointerTypeContext ------------------------------------------------------------------

llvmirParser::OpaquePointerTypeContext::OpaquePointerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::AddrSpaceContext* llvmirParser::OpaquePointerTypeContext::addrSpace() {
  return getRuleContext<llvmirParser::AddrSpaceContext>(0);
}


size_t llvmirParser::OpaquePointerTypeContext::getRuleIndex() const {
  return llvmirParser::RuleOpaquePointerType;
}

void llvmirParser::OpaquePointerTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaquePointerType(this);
}

void llvmirParser::OpaquePointerTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaquePointerType(this);
}


std::any llvmirParser::OpaquePointerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitOpaquePointerType(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::OpaquePointerTypeContext* llvmirParser::opaquePointerType() {
  OpaquePointerTypeContext *_localctx = _tracker.createInstance<OpaquePointerTypeContext>(_ctx, getState());
  enterRule(_localctx, 152, llvmirParser::RuleOpaquePointerType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(713);
    match(llvmirParser::T__80);
    setState(715);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(714);
      addrSpace();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddrSpaceContext ------------------------------------------------------------------

llvmirParser::AddrSpaceContext::AddrSpaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::AddrSpaceContext::IntLit() {
  return getToken(llvmirParser::IntLit, 0);
}


size_t llvmirParser::AddrSpaceContext::getRuleIndex() const {
  return llvmirParser::RuleAddrSpace;
}

void llvmirParser::AddrSpaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddrSpace(this);
}

void llvmirParser::AddrSpaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddrSpace(this);
}


std::any llvmirParser::AddrSpaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitAddrSpace(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::AddrSpaceContext* llvmirParser::addrSpace() {
  AddrSpaceContext *_localctx = _tracker.createInstance<AddrSpaceContext>(_ctx, getState());
  enterRule(_localctx, 154, llvmirParser::RuleAddrSpace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(717);
    match(llvmirParser::T__81);
    setState(718);
    match(llvmirParser::T__17);
    setState(719);
    match(llvmirParser::IntLit);
    setState(720);
    match(llvmirParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

llvmirParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::ParamContext *> llvmirParser::ParamsContext::param() {
  return getRuleContexts<llvmirParser::ParamContext>();
}

llvmirParser::ParamContext* llvmirParser::ParamsContext::param(size_t i) {
  return getRuleContext<llvmirParser::ParamContext>(i);
}


size_t llvmirParser::ParamsContext::getRuleIndex() const {
  return llvmirParser::RuleParams;
}

void llvmirParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void llvmirParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}


std::any llvmirParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ParamsContext* llvmirParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 156, llvmirParser::RuleParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(730);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
      setState(722);
      param();
      setState(727);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == llvmirParser::T__24) {
        setState(723);
        match(llvmirParser::T__24);
        setState(724);
        param();
        setState(729);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

llvmirParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::TypeContext* llvmirParser::ParamContext::type() {
  return getRuleContext<llvmirParser::TypeContext>(0);
}

tree::TerminalNode* llvmirParser::ParamContext::LocalIdent() {
  return getToken(llvmirParser::LocalIdent, 0);
}


size_t llvmirParser::ParamContext::getRuleIndex() const {
  return llvmirParser::RuleParam;
}

void llvmirParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void llvmirParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any llvmirParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ParamContext* llvmirParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 158, llvmirParser::RuleParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    type(0);
    setState(734);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == llvmirParser::LocalIdent) {
      setState(733);
      match(llvmirParser::LocalIdent);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

llvmirParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* llvmirParser::LabelContext::LocalIdent() {
  return getToken(llvmirParser::LocalIdent, 0);
}


size_t llvmirParser::LabelContext::getRuleIndex() const {
  return llvmirParser::RuleLabel;
}

void llvmirParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void llvmirParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}


std::any llvmirParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::LabelContext* llvmirParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 160, llvmirParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(736);
    match(llvmirParser::T__77);
    setState(737);
    match(llvmirParser::LocalIdent);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IPredContext ------------------------------------------------------------------

llvmirParser::IPredContext::IPredContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::IPredContext::getRuleIndex() const {
  return llvmirParser::RuleIPred;
}

void llvmirParser::IPredContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIPred(this);
}

void llvmirParser::IPredContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIPred(this);
}


std::any llvmirParser::IPredContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitIPred(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::IPredContext* llvmirParser::iPred() {
  IPredContext *_localctx = _tracker.createInstance<IPredContext>(_ctx, getState());
  enterRule(_localctx, 162, llvmirParser::RuleIPred);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(739);
    _la = _input->LA(1);
    if (!(((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & 1023) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InBoundsContext ------------------------------------------------------------------

llvmirParser::InBoundsContext::InBoundsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::InBoundsContext::getRuleIndex() const {
  return llvmirParser::RuleInBounds;
}

void llvmirParser::InBoundsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInBounds(this);
}

void llvmirParser::InBoundsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInBounds(this);
}


std::any llvmirParser::InBoundsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitInBounds(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::InBoundsContext* llvmirParser::inBounds() {
  InBoundsContext *_localctx = _tracker.createInstance<InBoundsContext>(_ctx, getState());
  enterRule(_localctx, 164, llvmirParser::RuleInBounds);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(741);
    match(llvmirParser::T__92);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

llvmirParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<llvmirParser::ArgContext *> llvmirParser::ArgsContext::arg() {
  return getRuleContexts<llvmirParser::ArgContext>();
}

llvmirParser::ArgContext* llvmirParser::ArgsContext::arg(size_t i) {
  return getRuleContext<llvmirParser::ArgContext>(i);
}


size_t llvmirParser::ArgsContext::getRuleIndex() const {
  return llvmirParser::RuleArgs;
}

void llvmirParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void llvmirParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


std::any llvmirParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ArgsContext* llvmirParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 166, llvmirParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(751);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -432345564226519040) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 703687442023747) != 0)) {
      setState(743);
      arg();
      setState(748);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == llvmirParser::T__24) {
        setState(744);
        match(llvmirParser::T__24);
        setState(745);
        arg();
        setState(750);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

llvmirParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

llvmirParser::ConcreteTypeContext* llvmirParser::ArgContext::concreteType() {
  return getRuleContext<llvmirParser::ConcreteTypeContext>(0);
}

llvmirParser::ValueContext* llvmirParser::ArgContext::value() {
  return getRuleContext<llvmirParser::ValueContext>(0);
}


size_t llvmirParser::ArgContext::getRuleIndex() const {
  return llvmirParser::RuleArg;
}

void llvmirParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}

void llvmirParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}


std::any llvmirParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ArgContext* llvmirParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 168, llvmirParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(753);
    concreteType();
    setState(754);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ZeroInitializerConstContext ------------------------------------------------------------------

llvmirParser::ZeroInitializerConstContext::ZeroInitializerConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::ZeroInitializerConstContext::getRuleIndex() const {
  return llvmirParser::RuleZeroInitializerConst;
}

void llvmirParser::ZeroInitializerConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterZeroInitializerConst(this);
}

void llvmirParser::ZeroInitializerConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitZeroInitializerConst(this);
}


std::any llvmirParser::ZeroInitializerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitZeroInitializerConst(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::ZeroInitializerConstContext* llvmirParser::zeroInitializerConst() {
  ZeroInitializerConstContext *_localctx = _tracker.createInstance<ZeroInitializerConstContext>(_ctx, getState());
  enterRule(_localctx, 170, llvmirParser::RuleZeroInitializerConst);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(756);
    match(llvmirParser::T__93);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FPredContext ------------------------------------------------------------------

llvmirParser::FPredContext::FPredContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t llvmirParser::FPredContext::getRuleIndex() const {
  return llvmirParser::RuleFPred;
}

void llvmirParser::FPredContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFPred(this);
}

void llvmirParser::FPredContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<llvmirListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFPred(this);
}


std::any llvmirParser::FPredContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<llvmirVisitor*>(visitor))
    return parserVisitor->visitFPred(this);
  else
    return visitor->visitChildren(this);
}

llvmirParser::FPredContext* llvmirParser::fPred() {
  FPredContext *_localctx = _tracker.createInstance<FPredContext>(_ctx, getState());
  enterRule(_localctx, 172, llvmirParser::RuleFPred);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(758);
    _la = _input->LA(1);
    if (!(((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 549344772099) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool llvmirParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 65: return typeSempred(antlrcpp::downCast<TypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool llvmirParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 12);
    case 1: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

void llvmirParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  llvmirParserInitialize();
#else
  ::antlr4::internal::call_once(llvmirParserOnceFlag, llvmirParserInitialize);
#endif
}
