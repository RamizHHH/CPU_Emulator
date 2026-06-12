#include "Memory_Stage.h"

void MemStage(Instruction *instr, Execute_Register *reg, uint32_t *mem, CPU *cpu, Memory_Register *MemReg)
{
    memset(MemReg, 0, sizeof(Memory_Register));

    if (instr->Type == 'S' || instr->Type == 'I')
    {

        switch (instr->Opcode)
        {
        case 0x1A:
            MemReg->unsigned_int = LD_Instr(reg, mem);
            break;

        case 0x1B:
            MemReg->signed_half = LDH_Instr(reg, mem);
            break;

        case 0x1C:
            MemReg->signed_byte = LDB_Instr(reg, mem);
            break;

        case 0x1D:
            MemReg->unsigned_half = LDUH_Instr(reg, mem);
            break;

        case 0x1E:
            MemReg->unsigned_byte = LDUB_Instr(reg, mem);
            break;

        case 0x1F:
            ST_Instr(reg, instr, mem, cpu);
            break;

        case 0x20:
            STH_Instr(reg, instr, mem, cpu);
            break;

        case 0x21:
            STB_Instr(reg, instr, mem, cpu);
            break;

        default:
            break;
        }
    }
    else
    {
        return;
    }
}

uint32_t LD_Instr(Execute_Register *reg, uint32_t *mem)
{

    uint32_t v = readMemory(reg->value, mem);
    return v;
}

int16_t LDH_Instr(Execute_Register *reg, uint32_t *mem)
{
    return (int16_t)(readMemory(reg->value, mem));
}

int8_t LDB_Instr(Execute_Register *reg, uint32_t *mem)
{
    return (int8_t)(readMemory(reg->value, mem));
}

uint16_t LDUH_Instr(Execute_Register *reg, uint32_t *mem)
{
    return (uint16_t)(readMemory(reg->value, mem));
}

uint8_t LDUB_Instr(Execute_Register *reg, uint32_t *mem)
{
    return (uint8_t)(readMemory(reg->value, mem));
}

void ST_Instr(Execute_Register *reg, Instruction *instr, uint32_t *mem, CPU *cpu)
{
    WriteMemory(reg->value, mem, cpu->reg[instr->rs2]);
    return;
}

void STH_Instr(Execute_Register *reg, Instruction *instr, uint32_t *mem, CPU *cpu)
{
    WriteMemory(reg->value, mem, (uint16_t)cpu->reg[instr->rs2]);
    return;
}

void STB_Instr(Execute_Register *reg, Instruction *instr, uint32_t *mem, CPU *cpu)
{
    WriteMemory(reg->value, mem, (uint8_t)cpu->reg[instr->rs2]);
    return;
}

void MemRegFree(Memory_Register *reg)
{
    free(reg);
}