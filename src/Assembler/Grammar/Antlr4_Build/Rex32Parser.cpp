
// Generated from Rex32.g4 by ANTLR 4.13.0


#include "Rex32Listener.h"
#include "Rex32Visitor.h"

#include "Rex32Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Rex32ParserStaticData final {
  Rex32ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Rex32ParserStaticData(const Rex32ParserStaticData&) = delete;
  Rex32ParserStaticData(Rex32ParserStaticData&&) = delete;
  Rex32ParserStaticData& operator=(const Rex32ParserStaticData&) = delete;
  Rex32ParserStaticData& operator=(Rex32ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rex32ParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Rex32ParserStaticData *rex32ParserStaticData = nullptr;

void rex32ParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rex32ParserStaticData != nullptr) {
    return;
  }
#else
  assert(rex32ParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Rex32ParserStaticData>(
    std::vector<std::string>{
      "file", "imm_stat", "reg_instrs", "imm_instr", "l_and_s_intr", "branch_instr", 
      "jmp_instr", "ret_instr"
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
  	4,1,47,45,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,5,0,18,8,0,10,0,12,0,21,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,0,0,8,0,2,4,
  	6,8,10,12,14,0,5,1,0,4,18,1,0,19,28,1,0,29,36,1,0,37,42,1,0,43,45,37,
  	0,19,1,0,0,0,2,24,1,0,0,0,4,32,1,0,0,0,6,34,1,0,0,0,8,36,1,0,0,0,10,38,
  	1,0,0,0,12,40,1,0,0,0,14,42,1,0,0,0,16,18,3,2,1,0,17,16,1,0,0,0,18,21,
  	1,0,0,0,19,17,1,0,0,0,19,20,1,0,0,0,20,22,1,0,0,0,21,19,1,0,0,0,22,23,
  	5,0,0,1,23,1,1,0,0,0,24,25,3,6,3,0,25,26,5,3,0,0,26,27,5,1,0,0,27,28,
  	5,3,0,0,28,29,5,1,0,0,29,30,5,3,0,0,30,31,5,2,0,0,31,3,1,0,0,0,32,33,
  	7,0,0,0,33,5,1,0,0,0,34,35,7,1,0,0,35,7,1,0,0,0,36,37,7,2,0,0,37,9,1,
  	0,0,0,38,39,7,3,0,0,39,11,1,0,0,0,40,41,7,4,0,0,41,13,1,0,0,0,42,43,5,
  	46,0,0,43,15,1,0,0,0,1,19
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rex32ParserStaticData = staticData.release();
}

}

Rex32Parser::Rex32Parser(TokenStream *input) : Rex32Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

Rex32Parser::Rex32Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  Rex32Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rex32ParserStaticData->atn, rex32ParserStaticData->decisionToDFA, rex32ParserStaticData->sharedContextCache, options);
}

Rex32Parser::~Rex32Parser() {
  delete _interpreter;
}

const atn::ATN& Rex32Parser::getATN() const {
  return *rex32ParserStaticData->atn;
}

std::string Rex32Parser::getGrammarFileName() const {
  return "Rex32.g4";
}

const std::vector<std::string>& Rex32Parser::getRuleNames() const {
  return rex32ParserStaticData->ruleNames;
}

const dfa::Vocabulary& Rex32Parser::getVocabulary() const {
  return rex32ParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Rex32Parser::getSerializedATN() const {
  return rex32ParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

Rex32Parser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Rex32Parser::FileContext::EOF() {
  return getToken(Rex32Parser::EOF, 0);
}

std::vector<Rex32Parser::Imm_statContext *> Rex32Parser::FileContext::imm_stat() {
  return getRuleContexts<Rex32Parser::Imm_statContext>();
}

Rex32Parser::Imm_statContext* Rex32Parser::FileContext::imm_stat(size_t i) {
  return getRuleContext<Rex32Parser::Imm_statContext>(i);
}


size_t Rex32Parser::FileContext::getRuleIndex() const {
  return Rex32Parser::RuleFile;
}

void Rex32Parser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void Rex32Parser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


std::any Rex32Parser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::FileContext* Rex32Parser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, Rex32Parser::RuleFile);
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
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 536346624) != 0)) {
      setState(16);
      imm_stat();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(22);
    match(Rex32Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Imm_statContext ------------------------------------------------------------------

Rex32Parser::Imm_statContext::Imm_statContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Rex32Parser::Imm_instrContext* Rex32Parser::Imm_statContext::imm_instr() {
  return getRuleContext<Rex32Parser::Imm_instrContext>(0);
}

std::vector<tree::TerminalNode *> Rex32Parser::Imm_statContext::COMMA() {
  return getTokens(Rex32Parser::COMMA);
}

tree::TerminalNode* Rex32Parser::Imm_statContext::COMMA(size_t i) {
  return getToken(Rex32Parser::COMMA, i);
}

std::vector<tree::TerminalNode *> Rex32Parser::Imm_statContext::REG() {
  return getTokens(Rex32Parser::REG);
}

tree::TerminalNode* Rex32Parser::Imm_statContext::REG(size_t i) {
  return getToken(Rex32Parser::REG, i);
}

tree::TerminalNode* Rex32Parser::Imm_statContext::INT() {
  return getToken(Rex32Parser::INT, 0);
}


size_t Rex32Parser::Imm_statContext::getRuleIndex() const {
  return Rex32Parser::RuleImm_stat;
}

void Rex32Parser::Imm_statContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImm_stat(this);
}

void Rex32Parser::Imm_statContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImm_stat(this);
}


std::any Rex32Parser::Imm_statContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitImm_stat(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::Imm_statContext* Rex32Parser::imm_stat() {
  Imm_statContext *_localctx = _tracker.createInstance<Imm_statContext>(_ctx, getState());
  enterRule(_localctx, 2, Rex32Parser::RuleImm_stat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    imm_instr();
    setState(25);
    match(Rex32Parser::COMMA);
    setState(26);
    match(Rex32Parser::REG);
    setState(27);
    match(Rex32Parser::COMMA);
    setState(28);
    match(Rex32Parser::REG);
    setState(29);
    match(Rex32Parser::COMMA);
    setState(30);
    match(Rex32Parser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reg_instrsContext ------------------------------------------------------------------

Rex32Parser::Reg_instrsContext::Reg_instrsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::ADD() {
  return getToken(Rex32Parser::ADD, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::SUB() {
  return getToken(Rex32Parser::SUB, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::AND() {
  return getToken(Rex32Parser::AND, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::OR() {
  return getToken(Rex32Parser::OR, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::XOR() {
  return getToken(Rex32Parser::XOR, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::SHL() {
  return getToken(Rex32Parser::SHL, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::SHR() {
  return getToken(Rex32Parser::SHR, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::SAR() {
  return getToken(Rex32Parser::SAR, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::MUL() {
  return getToken(Rex32Parser::MUL, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::DIV() {
  return getToken(Rex32Parser::DIV, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::MOD() {
  return getToken(Rex32Parser::MOD, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::CMP() {
  return getToken(Rex32Parser::CMP, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::MOV() {
  return getToken(Rex32Parser::MOV, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::NOT() {
  return getToken(Rex32Parser::NOT, 0);
}

tree::TerminalNode* Rex32Parser::Reg_instrsContext::NEG() {
  return getToken(Rex32Parser::NEG, 0);
}


size_t Rex32Parser::Reg_instrsContext::getRuleIndex() const {
  return Rex32Parser::RuleReg_instrs;
}

void Rex32Parser::Reg_instrsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReg_instrs(this);
}

void Rex32Parser::Reg_instrsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReg_instrs(this);
}


std::any Rex32Parser::Reg_instrsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitReg_instrs(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::Reg_instrsContext* Rex32Parser::reg_instrs() {
  Reg_instrsContext *_localctx = _tracker.createInstance<Reg_instrsContext>(_ctx, getState());
  enterRule(_localctx, 4, Rex32Parser::RuleReg_instrs);
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
    setState(32);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 524272) != 0))) {
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

//----------------- Imm_instrContext ------------------------------------------------------------------

Rex32Parser::Imm_instrContext::Imm_instrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::ADDI() {
  return getToken(Rex32Parser::ADDI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::SUBI() {
  return getToken(Rex32Parser::SUBI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::ANDI() {
  return getToken(Rex32Parser::ANDI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::ORI() {
  return getToken(Rex32Parser::ORI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::XORI() {
  return getToken(Rex32Parser::XORI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::SHLI() {
  return getToken(Rex32Parser::SHLI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::SHRI() {
  return getToken(Rex32Parser::SHRI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::SARI() {
  return getToken(Rex32Parser::SARI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::CMPI() {
  return getToken(Rex32Parser::CMPI, 0);
}

tree::TerminalNode* Rex32Parser::Imm_instrContext::MOVI() {
  return getToken(Rex32Parser::MOVI, 0);
}


size_t Rex32Parser::Imm_instrContext::getRuleIndex() const {
  return Rex32Parser::RuleImm_instr;
}

void Rex32Parser::Imm_instrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImm_instr(this);
}

void Rex32Parser::Imm_instrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImm_instr(this);
}


std::any Rex32Parser::Imm_instrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitImm_instr(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::Imm_instrContext* Rex32Parser::imm_instr() {
  Imm_instrContext *_localctx = _tracker.createInstance<Imm_instrContext>(_ctx, getState());
  enterRule(_localctx, 6, Rex32Parser::RuleImm_instr);
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
    setState(34);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 536346624) != 0))) {
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

//----------------- L_and_s_intrContext ------------------------------------------------------------------

Rex32Parser::L_and_s_intrContext::L_and_s_intrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::LD() {
  return getToken(Rex32Parser::LD, 0);
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::LDH() {
  return getToken(Rex32Parser::LDH, 0);
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::LDB() {
  return getToken(Rex32Parser::LDB, 0);
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::LDUH() {
  return getToken(Rex32Parser::LDUH, 0);
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::LDUB() {
  return getToken(Rex32Parser::LDUB, 0);
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::ST() {
  return getToken(Rex32Parser::ST, 0);
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::STH() {
  return getToken(Rex32Parser::STH, 0);
}

tree::TerminalNode* Rex32Parser::L_and_s_intrContext::STB() {
  return getToken(Rex32Parser::STB, 0);
}


size_t Rex32Parser::L_and_s_intrContext::getRuleIndex() const {
  return Rex32Parser::RuleL_and_s_intr;
}

void Rex32Parser::L_and_s_intrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterL_and_s_intr(this);
}

void Rex32Parser::L_and_s_intrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitL_and_s_intr(this);
}


std::any Rex32Parser::L_and_s_intrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitL_and_s_intr(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::L_and_s_intrContext* Rex32Parser::l_and_s_intr() {
  L_and_s_intrContext *_localctx = _tracker.createInstance<L_and_s_intrContext>(_ctx, getState());
  enterRule(_localctx, 8, Rex32Parser::RuleL_and_s_intr);
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
    setState(36);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 136902082560) != 0))) {
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

//----------------- Branch_instrContext ------------------------------------------------------------------

Rex32Parser::Branch_instrContext::Branch_instrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Rex32Parser::Branch_instrContext::BEQ() {
  return getToken(Rex32Parser::BEQ, 0);
}

tree::TerminalNode* Rex32Parser::Branch_instrContext::BNE() {
  return getToken(Rex32Parser::BNE, 0);
}

tree::TerminalNode* Rex32Parser::Branch_instrContext::BLT() {
  return getToken(Rex32Parser::BLT, 0);
}

tree::TerminalNode* Rex32Parser::Branch_instrContext::BGE() {
  return getToken(Rex32Parser::BGE, 0);
}

tree::TerminalNode* Rex32Parser::Branch_instrContext::BLTU() {
  return getToken(Rex32Parser::BLTU, 0);
}

tree::TerminalNode* Rex32Parser::Branch_instrContext::BGEU() {
  return getToken(Rex32Parser::BGEU, 0);
}


size_t Rex32Parser::Branch_instrContext::getRuleIndex() const {
  return Rex32Parser::RuleBranch_instr;
}

void Rex32Parser::Branch_instrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranch_instr(this);
}

void Rex32Parser::Branch_instrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranch_instr(this);
}


std::any Rex32Parser::Branch_instrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitBranch_instr(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::Branch_instrContext* Rex32Parser::branch_instr() {
  Branch_instrContext *_localctx = _tracker.createInstance<Branch_instrContext>(_ctx, getState());
  enterRule(_localctx, 10, Rex32Parser::RuleBranch_instr);
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
    setState(38);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8658654068736) != 0))) {
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

//----------------- Jmp_instrContext ------------------------------------------------------------------

Rex32Parser::Jmp_instrContext::Jmp_instrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Rex32Parser::Jmp_instrContext::JMP() {
  return getToken(Rex32Parser::JMP, 0);
}

tree::TerminalNode* Rex32Parser::Jmp_instrContext::JAL() {
  return getToken(Rex32Parser::JAL, 0);
}

tree::TerminalNode* Rex32Parser::Jmp_instrContext::JALR() {
  return getToken(Rex32Parser::JALR, 0);
}


size_t Rex32Parser::Jmp_instrContext::getRuleIndex() const {
  return Rex32Parser::RuleJmp_instr;
}

void Rex32Parser::Jmp_instrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJmp_instr(this);
}

void Rex32Parser::Jmp_instrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJmp_instr(this);
}


std::any Rex32Parser::Jmp_instrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitJmp_instr(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::Jmp_instrContext* Rex32Parser::jmp_instr() {
  Jmp_instrContext *_localctx = _tracker.createInstance<Jmp_instrContext>(_ctx, getState());
  enterRule(_localctx, 12, Rex32Parser::RuleJmp_instr);
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
    setState(40);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 61572651155456) != 0))) {
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

//----------------- Ret_instrContext ------------------------------------------------------------------

Rex32Parser::Ret_instrContext::Ret_instrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Rex32Parser::Ret_instrContext::RET() {
  return getToken(Rex32Parser::RET, 0);
}


size_t Rex32Parser::Ret_instrContext::getRuleIndex() const {
  return Rex32Parser::RuleRet_instr;
}

void Rex32Parser::Ret_instrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRet_instr(this);
}

void Rex32Parser::Ret_instrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Rex32Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRet_instr(this);
}


std::any Rex32Parser::Ret_instrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Rex32Visitor*>(visitor))
    return parserVisitor->visitRet_instr(this);
  else
    return visitor->visitChildren(this);
}

Rex32Parser::Ret_instrContext* Rex32Parser::ret_instr() {
  Ret_instrContext *_localctx = _tracker.createInstance<Ret_instrContext>(_ctx, getState());
  enterRule(_localctx, 14, Rex32Parser::RuleRet_instr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(Rex32Parser::RET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void Rex32Parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rex32ParserInitialize();
#else
  ::antlr4::internal::call_once(rex32ParserOnceFlag, rex32ParserInitialize);
#endif
}
