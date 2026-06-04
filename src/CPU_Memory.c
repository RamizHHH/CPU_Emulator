#include "CPU_Memory.h"

uint32_t *initalizeMemory(int size)
{
    uint32_t *mem = malloc(size);
    return mem;
}

uint32_t readMemory(uint32_t offset, uint32_t *mem)
{
    uint32_t value = *(mem + offset);
    return value;
}

void WriteMemory(uint32_t offset, uint32_t *mem, uint32_t value)
{
    *(mem + offset) = value;
}