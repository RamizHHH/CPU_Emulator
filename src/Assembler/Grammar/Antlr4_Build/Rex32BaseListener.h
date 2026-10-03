
// Generated from Rex32.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Rex32Listener.h"


/**
 * This class provides an empty implementation of Rex32Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Rex32BaseListener : public Rex32Listener {
public:

  virtual void enterFile(Rex32Parser::FileContext * /*ctx*/) override { }
  virtual void exitFile(Rex32Parser::FileContext * /*ctx*/) override { }

  virtual void enterImm_stat(Rex32Parser::Imm_statContext * /*ctx*/) override { }
  virtual void exitImm_stat(Rex32Parser::Imm_statContext * /*ctx*/) override { }

  virtual void enterReg_instrs(Rex32Parser::Reg_instrsContext * /*ctx*/) override { }
  virtual void exitReg_instrs(Rex32Parser::Reg_instrsContext * /*ctx*/) override { }

  virtual void enterImm_instr(Rex32Parser::Imm_instrContext * /*ctx*/) override { }
  virtual void exitImm_instr(Rex32Parser::Imm_instrContext * /*ctx*/) override { }

  virtual void enterL_and_s_intr(Rex32Parser::L_and_s_intrContext * /*ctx*/) override { }
  virtual void exitL_and_s_intr(Rex32Parser::L_and_s_intrContext * /*ctx*/) override { }

  virtual void enterBranch_instr(Rex32Parser::Branch_instrContext * /*ctx*/) override { }
  virtual void exitBranch_instr(Rex32Parser::Branch_instrContext * /*ctx*/) override { }

  virtual void enterJmp_instr(Rex32Parser::Jmp_instrContext * /*ctx*/) override { }
  virtual void exitJmp_instr(Rex32Parser::Jmp_instrContext * /*ctx*/) override { }

  virtual void enterRet_instr(Rex32Parser::Ret_instrContext * /*ctx*/) override { }
  virtual void exitRet_instr(Rex32Parser::Ret_instrContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

