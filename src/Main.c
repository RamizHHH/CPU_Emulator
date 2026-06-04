#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#include "CPU_Memory.h"
#include "CPU.h"

#define MAX_MEMORY_SIZE 1024

int main()
{
    uint32_t *CPU_Mem = initalizeMemory(MAX_MEMORY_SIZE);
    CPU *cpu = initalizeCPU();
}