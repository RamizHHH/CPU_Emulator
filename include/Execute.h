#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include "Decode.h"

#ifndef EXECUTE_H
#define EXECUTE_H

typedef struct
{
    uint32_t value;

} Execute_Register;

void ExecuteInstr(Instruction *instr, CPU *cpu, Execute_Register *reg);

void isRType(Instruction *instr, CPU *cpu, Execute_Register *reg);

void isIType(Instruction *instr, CPU *cpu, Execute_Register *reg);

void isSType(Instruction *instr, CPU *cpu, Execute_Register *reg);

// void isBType(Instruction *instr, CPU *cpu, Execute_Register *reg);

// void isJType(Instruction *instr, CPU *cpu, Execute_Register *reg);

void isPType(Instruction *instr, CPU *cpu);

void freeExRegister(Execute_Register *reg);

#endif