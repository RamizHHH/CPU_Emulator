#include "Pipeline.h"

void Pipeline(CPU *cpu, uint32_t *mem)
{
    Execute_Register *ExReg = malloc(sizeof(Execute_Register));
    Memory_Register *memReg = malloc(sizeof(Memory_Register));

    while (cpu->halted != 1)
    {
        uint32_t intsr = FetchInstruction(mem, cpu);
        Instruction *decodedInstr = DecodeStage(intsr);

        ExecuteStage(decodedInstr, cpu, ExReg);
        MemStageExecute(decodedInstr, ExReg, mem, cpu, memReg);
        WriteBackExecute(decodedInstr, ExReg, cpu, memReg);
    }

    printf("%u\n", cpu->reg[3]);

    freeExRegister(ExReg);
    MemRegFree(memReg);
    return;
}

uint32_t FetchStage(uint32_t *Mem, CPU *cpu)
{
    return FetchInstruction(Mem, cpu);
}

Instruction *DecodeStage(uint32_t Instr)
{
    return DecodeInstruction(Instr);
}

void ExecuteStage(Instruction *instr, CPU *cpu, Execute_Register *reg)
{
    ExecuteInstr(instr, cpu, reg);
}

void MemStageExecute(Instruction *instr, Execute_Register *reg, uint32_t *mem, CPU *cpu, Memory_Register *MemReg)
{
    MemStage(instr, reg, mem, cpu, MemReg);
}

void WriteBackExecute(Instruction *instr, Execute_Register *reg, CPU *cpu, Memory_Register *memReg)
{
    WriteBack(instr, reg, cpu, memReg);
}