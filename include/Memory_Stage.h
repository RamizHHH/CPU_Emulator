#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "CPU_Memory.h"
#include "Execute.h"
#include <string.h>

#ifndef MEMORY_STAGE_H
#define MEMORY_STAGE_H

typedef struct
{
    uint32_t unsigned_int;
    int16_t signed_half;
    int8_t signed_byte;
    uint16_t unsigned_half;
    uint8_t unsigned_byte;

} Memory_Register;

void MemStage(Instruction *instr, Execute_Register *reg, uint32_t *mem, CPU *cpu, Memory_Register *MemReg);

uint32_t LD_Instr(Execute_Register *reg, uint32_t *mem);

int16_t LDH_Instr(Execute_Register *reg, uint32_t *mem);

int8_t LDB_Instr(Execute_Register *reg, uint32_t *mem);

uint16_t LDUH_Instr(Execute_Register *reg, uint32_t *mem);

uint8_t LDUB_Instr(Execute_Register *reg, uint32_t *mem);

void ST_Instr(Execute_Register *reg, Instruction *instr, uint32_t *mem, CPU *cpu);

void STH_Instr(Execute_Register *reg, Instruction *instr, uint32_t *mem, CPU *cpu);

void STB_Instr(Execute_Register *reg, Instruction *instr, uint32_t *mem, CPU *cpu);

void MemRegFree(Memory_Register *reg);

#endif