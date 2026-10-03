
// Generated from Rex32.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Rex32Lexer : public antlr4::Lexer {
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

  explicit Rex32Lexer(antlr4::CharStream *input);

  ~Rex32Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

