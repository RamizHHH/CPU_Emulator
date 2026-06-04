#include "CPU.h"

CPU *initalizeCPU()
{
    CPU *cpu;
    for (int i = 0; i < 32; i++)
    {
        cpu->reg[i] = 0;
    }
    cpu->pc = 0;
    return cpu;
}