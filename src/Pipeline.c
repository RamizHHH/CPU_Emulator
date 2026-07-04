#include "Pipeline.h"

void Pipeline(CPU *cpu, uint32_t *mem)
{
    Execute_Register *ExReg = malloc(sizeof(Execute_Register));
    Memory_Register *memReg = malloc(sizeof(Memory_Register));
    int cycle = 1;

    while (cpu->halted != 1)
    {

        printf("%d\n", cpu->reg[25]);

        uint32_t intsr = FetchInstruction(mem, cpu);

        Instruction *decodedInstr = DecodeStage(intsr);

        ExecuteStage(decodedInstr, cpu, ExReg);

        MemStageExecute(decodedInstr, ExReg, mem, cpu, memReg);

        WriteBackExecute(decodedInstr, ExReg, cpu, memReg);

        printInstrStages(cycle, cpu, intsr);

        cycle += 1;
    }

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

void printInstrStages(int Cycle, CPU *cpu, uint32_t instr)
{
    printf("====================================================\n"
           "\n");
    printf("Cycle: %d\n", Cycle);
    printf("PC: 0x%08x\n", cpu->pc);
    printf("Current Instr: 0x%08x\n"
           "\n",
           instr);
    printf("Registers\n----------------------------------------------------\n");
    printf("R1: %d R2: %d R3: %d R4: %d R5: %d\nR6: %d R7: %d R8: %d R9: %d R10: %d\n\n",
           cpu->reg[1], cpu->reg[2], cpu->reg[3], cpu->reg[4], cpu->reg[5], cpu->reg[6],
           cpu->reg[7], cpu->reg[8], cpu->reg[9], cpu->reg[10]);

    printf("====================================================\n"
           "\n");
}