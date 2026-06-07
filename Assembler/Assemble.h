#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t AssembleLine(char *line);

typedef enum
{
    OP_ADD = 0x01,
    OP_SUB = 0x02,

    OP_ADDI = 0x10,
    OP_MOVI = 0x19,

    OP_HALT = 0x32
} Opcode;

int parseRegister(const char *str);

uint32_t EncodeR(uint8_t opcode, uint8_t rd, uint8_t rs1, uint8_t rs2);
uint32_t EncodeI(uint8_t opcode, uint8_t rd, uint8_t rs1, int16_t imm);
uint32_t EncodeP(uint8_t opcode);