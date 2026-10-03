
// Generated from Rex32.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Rex32Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Rex32Parser.
 */
class  Rex32Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(Rex32Parser::FileContext *ctx) = 0;
  virtual void exitFile(Rex32Parser::FileContext *ctx) = 0;

  virtual void enterImm_stat(Rex32Parser::Imm_statContext *ctx) = 0;
  virtual void exitImm_stat(Rex32Parser::Imm_statContext *ctx) = 0;

  virtual void enterReg_instrs(Rex32Parser::Reg_instrsContext *ctx) = 0;
  virtual void exitReg_instrs(Rex32Parser::Reg_instrsContext *ctx) = 0;

  virtual void enterImm_instr(Rex32Parser::Imm_instrContext *ctx) = 0;
  virtual void exitImm_instr(Rex32Parser::Imm_instrContext *ctx) = 0;

  virtual void enterL_and_s_intr(Rex32Parser::L_and_s_intrContext *ctx) = 0;
  virtual void exitL_and_s_intr(Rex32Parser::L_and_s_intrContext *ctx) = 0;

  virtual void enterBranch_instr(Rex32Parser::Branch_instrContext *ctx) = 0;
  virtual void exitBranch_instr(Rex32Parser::Branch_instrContext *ctx) = 0;

  virtual void enterJmp_instr(Rex32Parser::Jmp_instrContext *ctx) = 0;
  virtual void exitJmp_instr(Rex32Parser::Jmp_instrContext *ctx) = 0;

  virtual void enterRet_instr(Rex32Parser::Ret_instrContext *ctx) = 0;
  virtual void exitRet_instr(Rex32Parser::Ret_instrContext *ctx) = 0;


};

