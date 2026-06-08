#include "Execute.h"

void ExecuteInstr(Instruction *instr, uint32_t *Mem, CPU *cpu)
{
    if (instr->Type == 'R')
    {
        isRType(instr, cpu);
        return;
    }
    else if (instr->Type == 'I')
    {
        isIType(instr, cpu);
        return;
    }
    else if (instr->Type == 'S')
    {
        isSType(instr, Mem, cpu);
        return;
    }
    else if (instr->Type == 'B')
    {
        isBType(instr, Mem, cpu);
        return;
    }
    else if (instr->Type == 'J')
    {
        isJType(instr, Mem, cpu);
        return;
    }
    else if (instr->Type == 'P')
    {
        isPType(instr, Mem, cpu);
        return;
    }
    else
    {
        perror("Invalid Instruction");
        exit(1);
    }
}

void isRType(Instruction *instr, CPU *cpu)
{
    switch (instr->Opcode)
    {
    case 0x01:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] + cpu->reg[instr->rs2];
            break;
        }
        else
        {
            cpu->reg[instr->rd] == 0;
            break;
        }
    case 0x02:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] - cpu->reg[instr->rs2];
            break;
        }
        else
        {
            cpu->reg[instr->rd] == 0;
            break;
        }

    case 0x03:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] & cpu->reg[instr->rs2];
            break;
        }
        else
        {
            cpu->reg[instr->rd] == 0;
            break;
        }

    case 0x04:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] | cpu->reg[instr->rs2];
            break;
        }
        else
        {
            cpu->reg[instr->rd] == 0;
            break;
        }

    case 0x05:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] ^ cpu->reg[instr->rs2];
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    default:
        break;
    }
}

void isIType(Instruction *instr, CPU *cpu)
{

    if (instr->Opcode == 0x10)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] + instr->imm;
        return;
    }
    else if (instr->Opcode == 0x11)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] - instr->imm;
        return;
    }
    else if (instr->Opcode == 0x12)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] & instr->imm;
        return;
    }
    else if (instr->Opcode == 0x13)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] | instr->imm;
        return;
    }
    else if (instr->Opcode == 0x14)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] ^ instr->imm;
        return;
    }
    else if (instr->Opcode == 0x15)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] << instr->imm;
        return;
    }
    else if (instr->Opcode == 0x16)
    {
        cpu->reg[instr->rd] = cpu->reg[instr->rs1] >> instr->imm;
        return;
    }
}

void isSType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isBType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isJType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isPType(Instruction *instr, uint32_t *Mem, CPU *cpu);