
// Generated from Rex32.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Rex32Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Rex32Parser.
 */
class  Rex32Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Rex32Parser.
   */
    virtual std::any visitFile(Rex32Parser::FileContext *context) = 0;

    virtual std::any visitImm_stat(Rex32Parser::Imm_statContext *context) = 0;

    virtual std::any visitReg_instrs(Rex32Parser::Reg_instrsContext *context) = 0;

    virtual std::any visitImm_instr(Rex32Parser::Imm_instrContext *context) = 0;

    virtual std::any visitL_and_s_intr(Rex32Parser::L_and_s_intrContext *context) = 0;

    virtual std::any visitBranch_instr(Rex32Parser::Branch_instrContext *context) = 0;

    virtual std::any visitJmp_instr(Rex32Parser::Jmp_instrContext *context) = 0;

    virtual std::any visitRet_instr(Rex32Parser::Ret_instrContext *context) = 0;


};

