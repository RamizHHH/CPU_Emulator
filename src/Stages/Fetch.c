#include "Fetch.h"

uint32_t FetchInstruction(uint32_t *Mem, CPU *cpu)
{
    if ((cpu->pc / 4) >= TEXT_END)
    {
        perror("Invalid Fetch Location\n");
        exit(1);
    }

    uint32_t val = Mem[cpu->pc / 4];
    cpu->pc += 4;
    return val;
}
