#include <stdio.h>
#include "CPU_Memory.h"
#include <stdint.h>
#include <unistd.h>
#include "WriteBack.h"

#ifndef PIPELINE_H
#define PIPELINE_H

// typedef struct
// {

// } Pipeline;

void Pipeline(CPU *cpu, uint32_t *mem);

uint32_t FetchStage(uint32_t *Mem, CPU *cpu);

Instruction *DecodeStage(uint32_t Instr);

void ExecuteStage(Instruction *instr, CPU *cpu, Execute_Register *reg);

void MemStageExecute(Instruction *instr, Execute_Register *reg, uint32_t *mem, CPU *cpu, Memory_Register *MemReg);

void WriteBackExecute(Instruction *instr, Execute_Register *reg, CPU *cpu, Memory_Register *memReg);

void printInstrStages(int Cycle, CPU *cpu, uint32_t instr);

#endif