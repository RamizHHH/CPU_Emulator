
// Generated from Rex32.g4 by ANTLR 4.13.0


#include "Rex32Lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Rex32LexerStaticData final {
  Rex32LexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Rex32LexerStaticData(const Rex32LexerStaticData&) = delete;
  Rex32LexerStaticData(Rex32LexerStaticData&&) = delete;
  Rex32LexerStaticData& operator=(const Rex32LexerStaticData&) = delete;
  Rex32LexerStaticData& operator=(Rex32LexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag rex32lexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Rex32LexerStaticData *rex32lexerLexerStaticData = nullptr;

void rex32lexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rex32lexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(rex32lexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Rex32LexerStaticData>(
    std::vector<std::string>{
      "REG", "INT", "COMMA", "ADD", "SUB", "AND", "OR", "XOR", "SHL", "SHR", 
      "SAR", "MUL", "DIV", "MOD", "CMP", "MOV", "NOT", "NEG", "ADDI", "SUBI", 
      "ANDI", "ORI", "XORI", "SHLI", "SHRI", "SARI", "CMPI", "MOVI", "LD", 
      "LDH", "LDB", "LDUH", "LDUB", "ST", "STH", "STB", "BEQ", "BNE", "BLT", 
      "BGE", "BLTU", "BGEU", "JMP", "JAL", "JALR", "RET", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "','", "'ADD'", "'SUB'", "'AND'", "'OR'", "'XOR'", "'SHL'", 
      "'SHR'", "'SAR'", "'MUL'", "'DIV'", "'MOD'", "'CMP'", "'MOV'", "'NOT'", 
      "'NEG'", "'ADDI'", "'SUBI'", "'ANDI'", "'ORI'", "'XORI'", "'SHLI'", 
      "'SHRI'", "'SARI'", "'CMPI'", "'MOVI'", "'LD'", "'LDH'", "'LDB'", 
      "'LDUH'", "'LDUB'", "'ST'", "'STH'", "'STB'", "'BEQ'", "'BNE'", "'BLT'", 
      "'BGE'", "'BLTU'", "'BGEU'", "'JMP'", "'JAL'", "'JALR'", "'RET'"
    },
    std::vector<std::string>{
      "", "REG", "INT", "COMMA", "ADD", "SUB", "AND", "OR", "XOR", "SHL", 
      "SHR", "SAR", "MUL", "DIV", "MOD", "CMP", "MOV", "NOT", "NEG", "ADDI", 
      "SUBI", "ANDI", "ORI", "XORI", "SHLI", "SHRI", "SARI", "CMPI", "MOVI", 
      "LD", "LDH", "LDB", "LDUH", "LDUB", "ST", "STH", "STB", "BEQ", "BNE", 
      "BLT", "BGE", "BLTU", "BGEU", "JMP", "JAL", "JALR", "RET", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,47,299,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,1,0,1,0,1,0,1,1,4,1,100,
  	8,1,11,1,12,1,101,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,
  	1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,20,
  	1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,
  	1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,
  	1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,29,
  	1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,32,1,32,
  	1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,
  	1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,39,1,39,
  	1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,1,42,1,42,
  	1,42,1,42,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,44,1,45,1,45,1,45,
  	1,45,1,46,1,46,1,46,1,46,5,46,293,8,46,10,46,12,46,296,9,46,1,46,1,46,
  	0,0,47,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,
  	73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,1,0,
  	3,1,0,114,114,1,0,48,57,2,0,10,10,13,13,300,0,1,1,0,0,0,0,3,1,0,0,0,0,
  	5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,
  	0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,
  	0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,
  	1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,
  	0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,
  	0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,
  	1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,
  	0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,
  	0,91,1,0,0,0,0,93,1,0,0,0,1,95,1,0,0,0,3,99,1,0,0,0,5,103,1,0,0,0,7,105,
  	1,0,0,0,9,109,1,0,0,0,11,113,1,0,0,0,13,117,1,0,0,0,15,120,1,0,0,0,17,
  	124,1,0,0,0,19,128,1,0,0,0,21,132,1,0,0,0,23,136,1,0,0,0,25,140,1,0,0,
  	0,27,144,1,0,0,0,29,148,1,0,0,0,31,152,1,0,0,0,33,156,1,0,0,0,35,160,
  	1,0,0,0,37,164,1,0,0,0,39,169,1,0,0,0,41,174,1,0,0,0,43,179,1,0,0,0,45,
  	183,1,0,0,0,47,188,1,0,0,0,49,193,1,0,0,0,51,198,1,0,0,0,53,203,1,0,0,
  	0,55,208,1,0,0,0,57,213,1,0,0,0,59,216,1,0,0,0,61,220,1,0,0,0,63,224,
  	1,0,0,0,65,229,1,0,0,0,67,234,1,0,0,0,69,237,1,0,0,0,71,241,1,0,0,0,73,
  	245,1,0,0,0,75,249,1,0,0,0,77,253,1,0,0,0,79,257,1,0,0,0,81,261,1,0,0,
  	0,83,266,1,0,0,0,85,271,1,0,0,0,87,275,1,0,0,0,89,279,1,0,0,0,91,284,
  	1,0,0,0,93,288,1,0,0,0,95,96,7,0,0,0,96,97,3,3,1,0,97,2,1,0,0,0,98,100,
  	7,1,0,0,99,98,1,0,0,0,100,101,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,
  	102,4,1,0,0,0,103,104,5,44,0,0,104,6,1,0,0,0,105,106,5,65,0,0,106,107,
  	5,68,0,0,107,108,5,68,0,0,108,8,1,0,0,0,109,110,5,83,0,0,110,111,5,85,
  	0,0,111,112,5,66,0,0,112,10,1,0,0,0,113,114,5,65,0,0,114,115,5,78,0,0,
  	115,116,5,68,0,0,116,12,1,0,0,0,117,118,5,79,0,0,118,119,5,82,0,0,119,
  	14,1,0,0,0,120,121,5,88,0,0,121,122,5,79,0,0,122,123,5,82,0,0,123,16,
  	1,0,0,0,124,125,5,83,0,0,125,126,5,72,0,0,126,127,5,76,0,0,127,18,1,0,
  	0,0,128,129,5,83,0,0,129,130,5,72,0,0,130,131,5,82,0,0,131,20,1,0,0,0,
  	132,133,5,83,0,0,133,134,5,65,0,0,134,135,5,82,0,0,135,22,1,0,0,0,136,
  	137,5,77,0,0,137,138,5,85,0,0,138,139,5,76,0,0,139,24,1,0,0,0,140,141,
  	5,68,0,0,141,142,5,73,0,0,142,143,5,86,0,0,143,26,1,0,0,0,144,145,5,77,
  	0,0,145,146,5,79,0,0,146,147,5,68,0,0,147,28,1,0,0,0,148,149,5,67,0,0,
  	149,150,5,77,0,0,150,151,5,80,0,0,151,30,1,0,0,0,152,153,5,77,0,0,153,
  	154,5,79,0,0,154,155,5,86,0,0,155,32,1,0,0,0,156,157,5,78,0,0,157,158,
  	5,79,0,0,158,159,5,84,0,0,159,34,1,0,0,0,160,161,5,78,0,0,161,162,5,69,
  	0,0,162,163,5,71,0,0,163,36,1,0,0,0,164,165,5,65,0,0,165,166,5,68,0,0,
  	166,167,5,68,0,0,167,168,5,73,0,0,168,38,1,0,0,0,169,170,5,83,0,0,170,
  	171,5,85,0,0,171,172,5,66,0,0,172,173,5,73,0,0,173,40,1,0,0,0,174,175,
  	5,65,0,0,175,176,5,78,0,0,176,177,5,68,0,0,177,178,5,73,0,0,178,42,1,
  	0,0,0,179,180,5,79,0,0,180,181,5,82,0,0,181,182,5,73,0,0,182,44,1,0,0,
  	0,183,184,5,88,0,0,184,185,5,79,0,0,185,186,5,82,0,0,186,187,5,73,0,0,
  	187,46,1,0,0,0,188,189,5,83,0,0,189,190,5,72,0,0,190,191,5,76,0,0,191,
  	192,5,73,0,0,192,48,1,0,0,0,193,194,5,83,0,0,194,195,5,72,0,0,195,196,
  	5,82,0,0,196,197,5,73,0,0,197,50,1,0,0,0,198,199,5,83,0,0,199,200,5,65,
  	0,0,200,201,5,82,0,0,201,202,5,73,0,0,202,52,1,0,0,0,203,204,5,67,0,0,
  	204,205,5,77,0,0,205,206,5,80,0,0,206,207,5,73,0,0,207,54,1,0,0,0,208,
  	209,5,77,0,0,209,210,5,79,0,0,210,211,5,86,0,0,211,212,5,73,0,0,212,56,
  	1,0,0,0,213,214,5,76,0,0,214,215,5,68,0,0,215,58,1,0,0,0,216,217,5,76,
  	0,0,217,218,5,68,0,0,218,219,5,72,0,0,219,60,1,0,0,0,220,221,5,76,0,0,
  	221,222,5,68,0,0,222,223,5,66,0,0,223,62,1,0,0,0,224,225,5,76,0,0,225,
  	226,5,68,0,0,226,227,5,85,0,0,227,228,5,72,0,0,228,64,1,0,0,0,229,230,
  	5,76,0,0,230,231,5,68,0,0,231,232,5,85,0,0,232,233,5,66,0,0,233,66,1,
  	0,0,0,234,235,5,83,0,0,235,236,5,84,0,0,236,68,1,0,0,0,237,238,5,83,0,
  	0,238,239,5,84,0,0,239,240,5,72,0,0,240,70,1,0,0,0,241,242,5,83,0,0,242,
  	243,5,84,0,0,243,244,5,66,0,0,244,72,1,0,0,0,245,246,5,66,0,0,246,247,
  	5,69,0,0,247,248,5,81,0,0,248,74,1,0,0,0,249,250,5,66,0,0,250,251,5,78,
  	0,0,251,252,5,69,0,0,252,76,1,0,0,0,253,254,5,66,0,0,254,255,5,76,0,0,
  	255,256,5,84,0,0,256,78,1,0,0,0,257,258,5,66,0,0,258,259,5,71,0,0,259,
  	260,5,69,0,0,260,80,1,0,0,0,261,262,5,66,0,0,262,263,5,76,0,0,263,264,
  	5,84,0,0,264,265,5,85,0,0,265,82,1,0,0,0,266,267,5,66,0,0,267,268,5,71,
  	0,0,268,269,5,69,0,0,269,270,5,85,0,0,270,84,1,0,0,0,271,272,5,74,0,0,
  	272,273,5,77,0,0,273,274,5,80,0,0,274,86,1,0,0,0,275,276,5,74,0,0,276,
  	277,5,65,0,0,277,278,5,76,0,0,278,88,1,0,0,0,279,280,5,74,0,0,280,281,
  	5,65,0,0,281,282,5,76,0,0,282,283,5,82,0,0,283,90,1,0,0,0,284,285,5,82,
  	0,0,285,286,5,69,0,0,286,287,5,84,0,0,287,92,1,0,0,0,288,289,5,47,0,0,
  	289,290,5,47,0,0,290,294,1,0,0,0,291,293,8,2,0,0,292,291,1,0,0,0,293,
  	296,1,0,0,0,294,292,1,0,0,0,294,295,1,0,0,0,295,297,1,0,0,0,296,294,1,
  	0,0,0,297,298,6,46,0,0,298,94,1,0,0,0,3,0,101,294,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rex32lexerLexerStaticData = staticData.release();
}

}

Rex32Lexer::Rex32Lexer(CharStream *input) : Lexer(input) {
  Rex32Lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *rex32lexerLexerStaticData->atn, rex32lexerLexerStaticData->decisionToDFA, rex32lexerLexerStaticData->sharedContextCache);
}

Rex32Lexer::~Rex32Lexer() {
  delete _interpreter;
}

std::string Rex32Lexer::getGrammarFileName() const {
  return "Rex32.g4";
}

const std::vector<std::string>& Rex32Lexer::getRuleNames() const {
  return rex32lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& Rex32Lexer::getChannelNames() const {
  return rex32lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& Rex32Lexer::getModeNames() const {
  return rex32lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& Rex32Lexer::getVocabulary() const {
  return rex32lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Rex32Lexer::getSerializedATN() const {
  return rex32lexerLexerStaticData->serializedATN;
}

const atn::ATN& Rex32Lexer::getATN() const {
  return *rex32lexerLexerStaticData->atn;
}




void Rex32Lexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rex32lexerLexerInitialize();
#else
  ::antlr4::internal::call_once(rex32lexerLexerOnceFlag, rex32lexerLexerInitialize);
#endif
}
