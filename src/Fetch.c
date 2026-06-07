#include "Fetch.h"

uint32_t FetchInstruction(uint32_t *Mem, uint32_t PC)
{
    return Mem[PC];
}