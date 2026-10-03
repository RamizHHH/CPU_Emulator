
// Generated from Rex32.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Rex32Visitor.h"


/**
 * This class provides an empty implementation of Rex32Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Rex32BaseVisitor : public Rex32Visitor {
public:

  virtual std::any visitFile(Rex32Parser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImm_stat(Rex32Parser::Imm_statContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReg_instrs(Rex32Parser::Reg_instrsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImm_instr(Rex32Parser::Imm_instrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitL_and_s_intr(Rex32Parser::L_and_s_intrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBranch_instr(Rex32Parser::Branch_instrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJmp_instr(Rex32Parser::Jmp_instrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRet_instr(Rex32Parser::Ret_instrContext *ctx) override {
    return visitChildren(ctx);
  }


};

