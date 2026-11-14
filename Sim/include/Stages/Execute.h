#include "Decode.h"
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef EXECUTE_H
#define EXECUTE_H

typedef struct {
  uint32_t value;

} Execute_Register;

void ExecuteInstr(CPU *cpu, Pipeline_Reg *ID_EX_Current,
                  Pipeline_Reg *ID_EX_Next);

void isRType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next);

void isIType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next);

void isSType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next);

void isBType(CPU *cpu, Pipeline_Reg *ID_EX_Current);

void isJType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next);

void isPType(CPU *cpu, Pipeline_Reg *ID_EX_Current);

typedef enum {
  OP_ADD = 0x01,
  OP_SUB = 0x02,
  OP_AND = 0x03,
  OP_OR = 0x04,
  OP_XOR = 0x05,
  OP_SHL = 0x06,
  OP_SHR = 0x07,
  OP_SAR = 0x08,
  OP_MUL = 0x09,
  OP_DIV = 0x0A,
  OP_MOD = 0x0B,
  OP_CMP = 0x0C,
  OP_MOV = 0x0D,
  OP_NOT = 0x0E,
  OP_NEG = 0x0F,

  OP_ADDI = 0x10,
  OP_SUBI = 0x11,
  OP_ANDI = 0x12,
  OP_ORI = 0x13,
  OP_XORI = 0x14,
  OP_SHLI = 0x15,
  OP_SHRI = 0x16,
  OP_SARI = 0x17,
  OP_CMPI = 0x18,
  OP_MOVI = 0x19,

  OP_LD = 0x1A,
  OP_LDH = 0x1B,
  OP_LDB = 0x1C,
  OP_LDUH = 0x1D,
  OP_LDUB = 0x1E,

  OP_ST = 0x1F,
  OP_STH = 0x20,
  OP_STB = 0x21,

  OP_BEQ = 0x22,
  OP_BNE = 0x23,
  OP_BLT = 0x24,
  OP_BGE = 0x25,
  OP_BLTU = 0x26,
  OP_BGEU = 0x27,

  OP_JMP = 0x28,
  OP_JAL = 0x29,
  OP_JALR = 0x2A,

  OP_RET = 0x2E,

  OP_HALT = 0x32

} Opcode;

// void freeExRegister(Execute_Register *reg);

#endif