#include "CPU_Memory.h"

uint32_t *initalizeMemory(int size)
{
    uint32_t *mem = calloc((size_t)size, sizeof(uint32_t));
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

void freeMemory(uint32_t *mem)
{
    free(mem);
}

void loadProgram(uint32_t *mem, const char *filename, int Memory_size)
{

    if (!filename)
    {
        perror("Invalid Program");
        return;
    }

    FILE *program = fopen(filename, "rb");
    if (!program)
    {
        perror("Unable to open file");
        return;
    }

    size_t bytesRead = fread(mem, sizeof(uint32_t), (size_t)Memory_size, program);
    if (bytesRead == 0 && ferror(program))
    {
        perror("Error reading program");
    }

    printf("%u", mem[1]);

    fclose(program);
}
