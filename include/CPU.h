#include <stdio.h>
#include <stdint.h>

typedef struct
{
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

} Instruction;

CPU *initalizeCPU();
void freeCPU(CPU *cpu);
