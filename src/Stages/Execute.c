#include "Execute.h"

void ExecuteInstr(Instruction *instr, CPU *cpu, Execute_Register *reg)
{
    reg->value = 0;

    if (instr->Type == 'R')
    {
        isRType(instr, cpu, reg);
        return;
    }
    else if (instr->Type == 'I')
    {
        isIType(instr, cpu, reg);
        return;
    }
    else if (instr->Type == 'S')
    {
        isSType(instr, cpu, reg);
        return;
    }
    else if (instr->Type == 'P')
    {
        isPType(instr, cpu);
        return;
    }
    else if (instr->Type == 'B')
    {
        isBType(instr, cpu);
        return;
    }
    else if (instr->Type == 'J')
    {
        isJType(instr, cpu, reg);
        return;
    }
    else
    {
        perror("Invalid Instruction");
        exit(1);
    }
}

void isRType(Instruction *instr, CPU *cpu, Execute_Register *reg)
{
    switch (instr->Opcode)
    {
    case 0x01:

        reg->value = cpu->reg[instr->rs1] + cpu->reg[instr->rs2];
        break;

    case 0x02:

        reg->value = cpu->reg[instr->rs1] - cpu->reg[instr->rs2];
        break;

    case 0x03:

        reg->value = cpu->reg[instr->rs1] & cpu->reg[instr->rs2];
        break;

    case 0x04:

        reg->value = cpu->reg[instr->rs1] | cpu->reg[instr->rs2];
        break;

    case 0x05:

        reg->value = cpu->reg[instr->rs1] ^ cpu->reg[instr->rs2];
        break;

    case 0x06:

        reg->value = cpu->reg[instr->rs1] << (cpu->reg[instr->rs2] & 31);
        break;

    case 0x07:

        reg->value = cpu->reg[instr->rs1] >> (cpu->reg[instr->rs2] & 31);
        break;

    case 0x08:

        reg->value = (int32_t)cpu->reg[instr->rs1] >> (cpu->reg[instr->rs2] & 31);
        break;

    case 0x09:
    {
        int16_t result = (int64_t)(int32_t)cpu->reg[instr->rs1] * (int64_t)(int32_t)cpu->reg[instr->rs2];
        reg->value = (uint32_t)result;
        break;
    }

    case 0x0A:

        if (cpu->reg[instr->rs2] != 0)
        {
            reg->value = (uint32_t)((int32_t)cpu->reg[instr->rs1] / (int32_t)cpu->reg[instr->rs2]);
            break;
        }
        else
        {
            // ADD TRAP HERE
            perror("Error divide by zero");
            exit(1);
        }

    case 0x0B:

        if (cpu->reg[instr->rs2] != 0)
        {
            reg->value = (uint32_t)((int32_t)cpu->reg[instr->rs1] % (int32_t)cpu->reg[instr->rs2]);
            break;
        }
        else
        {
            // ADD TRAP HERE
            perror("Error divide by zero");
            exit(1);
        }

        // case 0x0C:  DO WHEN FLAGS ARE IMPLEMENTED
        //     break;

    case 0x0D:

        reg->value = cpu->reg[instr->rs1];
        break;

    case 0x0E:

        reg->value = ~(cpu->reg[instr->rs1]);
        break;

    case 0x0F:

        reg->value = 0 - (cpu->reg[instr->rs1]);
        break;

    default:
        break;
    }
}

void isIType(Instruction *instr, CPU *cpu, Execute_Register *reg)
{

    switch (instr->Opcode)
    {
    case 0x10:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    case 0x11:

        reg->value = cpu->reg[instr->rs1] - instr->imm;
        break;

    case 0x12:

        reg->value = cpu->reg[instr->rs1] & instr->imm;
        break;

    case 0x13:

        reg->value = cpu->reg[instr->rs1] | instr->imm;
        break;

    case 0x14:

        reg->value = cpu->reg[instr->rs1] ^ instr->imm;
        break;

    case 0x15:

        reg->value = cpu->reg[instr->rs1] << (instr->imm & 31);
        break;

    case 0x16:

        reg->value = cpu->reg[instr->rs1] >> (instr->imm & 31);
        break;

    case 0x17:

        reg->value = (int32_t)cpu->reg[instr->rs1] >> (instr->imm & 31);
        break;

    case 0x19:

        reg->value = instr->imm;
        break;

    case 0x1A:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    case 0x1B:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    case 0x1C:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    case 0x1D:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    case 0x1E:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    default:
        break;
    }
}

void isSType(Instruction *instr, CPU *cpu, Execute_Register *reg)
{
    switch (instr->Opcode)
    {

    case 0x1F:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    case 0x20:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    case 0x21:

        reg->value = cpu->reg[instr->rs1] + instr->imm;
        break;

    default:
        break;
    }
}

void isBType(Instruction *instr, CPU *cpu)
{
    if (instr->Opcode == 0x22)
    {
        if (cpu->reg[instr->rs1] == cpu->reg[instr->rs2])
        {
            cpu->pc += instr->imm;
        }
    }
    if (instr->Opcode == 0x23)
    {
        if (cpu->reg[instr->rs1] != cpu->reg[instr->rs2])
        {
            cpu->pc += instr->imm;
        }
    }
    if (instr->Opcode == 0x24)
    {
        if ((int32_t)cpu->reg[instr->rs1] <= (int32_t)cpu->reg[instr->rs2])
        {
            cpu->pc += instr->imm;
        }
    }
    if (instr->Opcode == 0x25)
    {
        if ((int32_t)cpu->reg[instr->rs1] >= (int32_t)cpu->reg[instr->rs2])
        {
            cpu->pc += instr->imm;
        }
    }
    if (instr->Opcode == 0x26)
    {
        if (cpu->reg[instr->rs1] <= cpu->reg[instr->rs2])
        {
            cpu->pc += instr->imm;
        }
    }
    if (instr->Opcode == 0x27)
    {
        if (cpu->reg[instr->rs1] >= cpu->reg[instr->rs2])
        {
            cpu->pc += instr->imm;
        }
    }
}

void isJType(Instruction *instr, CPU *cpu, Execute_Register *reg)
{
    if (instr->Opcode == 0x28)
    {
        cpu->pc += instr->imm;
    }
    else if (instr->Opcode == 0x29)
    {

        reg->value = cpu->pc + 4;
        cpu->pc += instr->imm;
    }
    else if (instr->Opcode == 0x2A)
    {
        reg->value = cpu->pc + 4;
        cpu->pc += (cpu->reg[instr->rs1] + instr->imm) & ~1;
    }
}

void isPType(Instruction *instr, CPU *cpu)
{
    if (instr->Opcode == 0x32)
    {
        cpu->halted = 1;
        return;
    }
}

void freeExRegister(Execute_Register *reg)
{
    free(reg);
    return;
}