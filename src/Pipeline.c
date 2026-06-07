#include "Pipeline.h"

uint32_t FetchStage(uint32_t *Mem, uint32_t PC)
{
    return FetchInstruction(*Mem, PC);
}

Instruction *DecodeStage(uint32_t Instr)
{
    return DecodeInstruction(Instr);
}