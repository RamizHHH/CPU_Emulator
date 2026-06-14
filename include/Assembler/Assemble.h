#pragma once
#include <stdlib.h>
#include <stdint.h>
#include "Label.h"
#include <string.h>
#include <stdio.h>

#ifndef ASSEMBLE_H
#define ASSEMBLE_H

uint32_t AssembleLine(char *line, Label **list, int currentAddress);

typedef enum
{
    OP_ADD = 0x01,
    OP_SUB = 0x02,
    OP_AND = 0x03,
    OP_OR = 0x04,
    OP_XOR = 0x05,
    OP_SHL = 0x06,
    OP_SHR = 0x07,
    OP_MUL = 0x09,
    OP_DIV = 0x0A,
    OP_MOD = 0x0B,
    OP_CMP = 0x0C,
    OP_MOV = 0x0D,
    OP_NOT = 0x0E,
    OP_NEG = 0x0F,

    OP_ADDI = 0x10,
    OP_SUBI = 0x11,
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

    OP_HALT = 0x32

} Opcode;

int parseRegister(const char *str);

int16_t LabelEncode(char *label, Label **list, int currentAddress);

uint32_t EncodeR(uint8_t opcode, uint8_t rd, uint8_t rs1, uint8_t rs2);
uint32_t EncodeI(uint8_t opcode, uint8_t rd, uint8_t rs1, int16_t imm);
uint32_t EncodeS(uint8_t opcode, uint8_t rs2, uint8_t rs1, int16_t imm);
uint32_t EncodeP(uint8_t opcode);
uint32_t EncodeB(uint8_t opcode, uint8_t rs2, uint8_t rs1, int16_t LabelAddress);

#endif