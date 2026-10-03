
// Generated from Rex32.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Rex32Parser : public antlr4::Parser {
public:
  enum {
    REG = 1, INT = 2, COMMA = 3, ADD = 4, SUB = 5, AND = 6, OR = 7, XOR = 8, 
    SHL = 9, SHR = 10, SAR = 11, MUL = 12, DIV = 13, MOD = 14, CMP = 15, 
    MOV = 16, NOT = 17, NEG = 18, ADDI = 19, SUBI = 20, ANDI = 21, ORI = 22, 
    XORI = 23, SHLI = 24, SHRI = 25, SARI = 26, CMPI = 27, MOVI = 28, LD = 29, 
    LDH = 30, LDB = 31, LDUH = 32, LDUB = 33, ST = 34, STH = 35, STB = 36, 
    BEQ = 37, BNE = 38, BLT = 39, BGE = 40, BLTU = 41, BGEU = 42, JMP = 43, 
    JAL = 44, JALR = 45, RET = 46, COMMENT = 47
  };

  enum {
    RuleFile = 0, RuleImm_stat = 1, RuleReg_instrs = 2, RuleImm_instr = 3, 
    RuleL_and_s_intr = 4, RuleBranch_instr = 5, RuleJmp_instr = 6, RuleRet_instr = 7
  };

  explicit Rex32Parser(antlr4::TokenStream *input);

  Rex32Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Rex32Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileContext;
  class Imm_statContext;
  class Reg_instrsContext;
  class Imm_instrContext;
  class L_and_s_intrContext;
  class Branch_instrContext;
  class Jmp_instrContext;
  class Ret_instrContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Imm_statContext *> imm_stat();
    Imm_statContext* imm_stat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  Imm_statContext : public antlr4::ParserRuleContext {
  public:
    Imm_statContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Imm_instrContext *imm_instr();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REG();
    antlr4::tree::TerminalNode* REG(size_t i);
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Imm_statContext* imm_stat();

  class  Reg_instrsContext : public antlr4::ParserRuleContext {
  public:
    Reg_instrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();
    antlr4::tree::TerminalNode *SAR();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *CMP();
    antlr4::tree::TerminalNode *MOV();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NEG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reg_instrsContext* reg_instrs();

  class  Imm_instrContext : public antlr4::ParserRuleContext {
  public:
    Imm_instrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDI();
    antlr4::tree::TerminalNode *SUBI();
    antlr4::tree::TerminalNode *ANDI();
    antlr4::tree::TerminalNode *ORI();
    antlr4::tree::TerminalNode *XORI();
    antlr4::tree::TerminalNode *SHLI();
    antlr4::tree::TerminalNode *SHRI();
    antlr4::tree::TerminalNode *SARI();
    antlr4::tree::TerminalNode *CMPI();
    antlr4::tree::TerminalNode *MOVI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Imm_instrContext* imm_instr();

  class  L_and_s_intrContext : public antlr4::ParserRuleContext {
  public:
    L_and_s_intrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LD();
    antlr4::tree::TerminalNode *LDH();
    antlr4::tree::TerminalNode *LDB();
    antlr4::tree::TerminalNode *LDUH();
    antlr4::tree::TerminalNode *LDUB();
    antlr4::tree::TerminalNode *ST();
    antlr4::tree::TerminalNode *STH();
    antlr4::tree::TerminalNode *STB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  L_and_s_intrContext* l_and_s_intr();

  class  Branch_instrContext : public antlr4::ParserRuleContext {
  public:
    Branch_instrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEQ();
    antlr4::tree::TerminalNode *BNE();
    antlr4::tree::TerminalNode *BLT();
    antlr4::tree::TerminalNode *BGE();
    antlr4::tree::TerminalNode *BLTU();
    antlr4::tree::TerminalNode *BGEU();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Branch_instrContext* branch_instr();

  class  Jmp_instrContext : public antlr4::ParserRuleContext {
  public:
    Jmp_instrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JMP();
    antlr4::tree::TerminalNode *JAL();
    antlr4::tree::TerminalNode *JALR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Jmp_instrContext* jmp_instr();

  class  Ret_instrContext : public antlr4::ParserRuleContext {
  public:
    Ret_instrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ret_instrContext* ret_instr();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

