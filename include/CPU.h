#include <stdio.h>
#include <stdint.h>

#ifndef CPU_H
#define CPU_H

typedef struct
{
    int halted;
    uint32_t reg[32];
    uint32_t pc;
} CPU;

typedef struct
{
    char Type;
    uint8_t Opcode;
    uint8_t rs1;
    uint8_t rs2;
    uint8_t rd;
    uint16_t imm;
    uint32_t OgInstr;

} Instruction;

CPU *initalizeCPU();
void freeCPU(CPU *cpu);

#endif