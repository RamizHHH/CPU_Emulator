#include "Fetch.h"

uint32_t FetchInstruction(uint32_t *Mem, CPU *cpu)
{
    uint32_t val = Mem[cpu->pc / 4];
    cpu->pc += 4;
    return val;
}