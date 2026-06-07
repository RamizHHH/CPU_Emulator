#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#include "CPU_Memory.h"
#include "CPU.h"

#define MAX_MEMORY_SIZE 2048

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <program file>\n", argv[0]);
        return 1;
    }

    uint32_t *CPU_Mem = initalizeMemory(MAX_MEMORY_SIZE);
    if (CPU_Mem == NULL)
    {
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    CPU *cpu = initalizeCPU();
    if (cpu == NULL)
    {
        fprintf(stderr, "Failed to allocate CPU\n");
        freeMemory(CPU_Mem);
        return 1;
    }

    loadProgram(CPU_Mem, argv[1], MAX_MEMORY_SIZE);

    freeMemory(CPU_Mem);
    free(cpu);

    return 0;
}
