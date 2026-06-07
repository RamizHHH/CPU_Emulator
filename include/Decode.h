#include <stdio.h>
#include <unistd.h>
#include "CPU_Memory.h"
#include "CPU.h"

Instruction *DecodeInstruction(uint32_t RawInstr);

void DecodeOpcode(uint32_t RawInstr, Instruction *instr);

void DecodeRs1(uint32_t RawInstr, Instruction *instr);

void DecodeRs2(uint32_t RawInstr, Instruction *instr);

void DecodeRd(uint32_t RawInstr, Instruction *instr);

void DecodeImm(uint32_t RawInstr, Instruction *instr);

void checkType(Instruction *instr);

void FreeInstr(Instruction *instr);