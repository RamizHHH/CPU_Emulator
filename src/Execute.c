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
            cpu->reg[instr->rd] = 0;
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
            cpu->reg[instr->rd] = 0;
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
            cpu->reg[instr->rd] = 0;
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
            cpu->reg[instr->rd] = 0;
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

    case 0x06:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] << (cpu->reg[instr->rs2] & 31);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x07:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] >> (cpu->reg[instr->rs2] & 31);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x08:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = (int32_t)cpu->reg[instr->rs1] >> (cpu->reg[instr->rs2] & 31);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }
    case 0x09:
        if (instr->rd != 0)
        {
            int64_t result = (int64_t)(int32_t)cpu->reg[instr->rs1] * (int64_t)(int32_t)cpu->reg[instr->rs2];
            cpu->reg[instr->rd] = (uint32_t)result;
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0A:
        if (instr->rd != 0)
        {
            if (cpu->reg[instr->rs2] != 0)
            {
                cpu->reg[instr->rd] = (uint32_t)((int32_t)cpu->reg[instr->rs1] / (int32_t)cpu->reg[instr->rs2]);
                break;
            }
            else
            {
                // ADD TRAP HERE
                perror("Error divide by zero");
                exit(1);
            }
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0B:
        if (instr->rd != 0)
        {
            if (cpu->reg[instr->rs2] != 0)
            {
                cpu->reg[instr->rd] = (uint32_t)((int32_t)cpu->reg[instr->rs1] % (int32_t)cpu->reg[instr->rs2]);
                break;
            }
            else
            {
                // ADD TRAP HERE
                perror("Error divide by zero");
                exit(1);
            }
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

        // case 0x0C:  DO WHEN FLAGS ARE IMPLEMENTED
        //     break;

    case 0x0D:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1];
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0E:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = ~(cpu->reg[instr->rs1]);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0F:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = 0 - (cpu->reg[instr->rs1]);
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

    switch (instr->Opcode)
    {
    case 0x10:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] + instr->imm;
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }
    case 0x11:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] - instr->imm;
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x12:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] & instr->imm;
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
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
            cpu->reg[instr->rd] = 0;
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

    case 0x06:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] << (cpu->reg[instr->rs2] & 31);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x07:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1] >> (cpu->reg[instr->rs2] & 31);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x08:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = (int32_t)cpu->reg[instr->rs1] >> (cpu->reg[instr->rs2] & 31);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }
    case 0x09:
        if (instr->rd != 0)
        {
            int64_t result = (int64_t)(int32_t)cpu->reg[instr->rs1] * (int64_t)(int32_t)cpu->reg[instr->rs2];
            cpu->reg[instr->rd] = (uint32_t)result;
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0A:
        if (instr->rd != 0)
        {
            if (cpu->reg[instr->rs2] != 0)
            {
                cpu->reg[instr->rd] = (uint32_t)((int32_t)cpu->reg[instr->rs1] / (int32_t)cpu->reg[instr->rs2]);
                break;
            }
            else
            {
                // ADD TRAP HERE
                perror("Error divide by zero");
                exit(1);
            }
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0B:
        if (instr->rd != 0)
        {
            if (cpu->reg[instr->rs2] != 0)
            {
                cpu->reg[instr->rd] = (uint32_t)((int32_t)cpu->reg[instr->rs1] % (int32_t)cpu->reg[instr->rs2]);
                break;
            }
            else
            {
                // ADD TRAP HERE
                perror("Error divide by zero");
                exit(1);
            }
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

        // case 0x0C:  DO WHEN FLAGS ARE IMPLEMENTED
        //     break;

    case 0x0D:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = cpu->reg[instr->rs1];
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0E:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = ~(cpu->reg[instr->rs1]);
            break;
        }
        else
        {
            cpu->reg[instr->rd] = 0;
            break;
        }

    case 0x0F:
        if (instr->rd != 0)
        {
            cpu->reg[instr->rd] = 0 - (cpu->reg[instr->rs1]);
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

void isSType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isBType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isJType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isPType(Instruction *instr, uint32_t *Mem, CPU *cpu);
