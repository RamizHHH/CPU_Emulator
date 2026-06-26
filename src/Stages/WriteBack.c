#include "WriteBack.h"

void WriteBack(Instruction *instr, Execute_Register *reg, CPU *cpu, Memory_Register *memReg)
{

    switch (instr->Opcode)
    {
    case 0x1A:
        cpu->reg[instr->rd] = memReg->unsigned_int;
        break;

    case 0x1B:
        cpu->reg[instr->rd] = memReg->signed_half;
        break;

    case 0x1C:
        cpu->reg[instr->rd] = memReg->signed_byte;
        break;

    case 0x1D:
        cpu->reg[instr->rd] = memReg->unsigned_half;
        break;

    case 0x1E:
        cpu->reg[instr->rd] = memReg->unsigned_byte;
        break;
    default:
        if (cpu->halted != 1)
        {
            cpu->reg[instr->rd] = reg->value;
            cpu->reg[0] = 0;
        }
        // else if (cpu->halted == 1)
        // {
        //     printf("CPU Halted!\n");
        // }

        break;
    }
    FreeInstr(instr);
}
