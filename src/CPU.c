#include "CPU.h"
#include "CPU_Memory.h"
#include <stdlib.h>

CPU *initalizeCPU()
{
    CPU *cpu = malloc(sizeof(CPU));
    if (cpu == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < 32; i++)
    {
        cpu->reg[i] = 0;
    }
    cpu->pc = 0;
    cpu->reg[25] = STACK_TOP;
    cpu->halted = 0;

    return cpu;
}

void freeCPU(CPU *cpu)
{
    free(cpu);
}
