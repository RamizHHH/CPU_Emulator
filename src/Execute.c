#include "Execute.h"

void ExecuteInstr(Instruction *instr, uint32_t *Mem, CPU *cpu)
{
    if (instr->Type == 'R')
    {
        isRType(instr, Mem, cpu);
    }
    else if (instr->Type == 'I')
    {
        isIType(instr, Mem, cpu);
    }
    else if (instr->Type == 'S')
    {
        isSType(instr, Mem, cpu);
    }
    else if (instr->Type == 'B')
    {
        isBType(instr, Mem, cpu);
    }
    else if (instr->Type == 'J')
    {
        isJType(instr, Mem, cpu);
    }
    else if (instr->Type == 'P')
    {
        isPType(instr, Mem, cpu);
    }
    else
    {
        perror("Invalid Instruction");
        exit(1);
    }
}

void isRType(Instruction *instr, uint32_t *Mem, CPU *cpu)
{
    if (instr->Opcode == 0x01)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] + cpu->reg[instr->rs2];
        return;
    }
    else if (instr->Opcode == 0x02)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] - cpu->reg[instr->rs2];
        return;
    }
    else if (instr->Opcode == 0x03)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] & cpu->reg[instr->rs2];
        return;
    }
    else if (instr->Opcode == 0x04)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] | cpu->reg[instr->rs2];
        return;
    }
    else if (instr->Opcode == 0x05)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] ^ cpu->reg[instr->rs2];
        return;
    }
    else if (instr->Opcode == 0x06)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] << cpu->reg[instr->rs2];
        return;
    }
}

void isIType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isSType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isBType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isJType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isPType(Instruction *instr, uint32_t *Mem, CPU *cpu);