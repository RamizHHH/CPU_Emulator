#include "CPU_Memory.h"

uint32_t *initalizeMemory(int size)
{
    uint32_t *mem = calloc((size_t)size, sizeof(uint32_t));
    return mem;
}

uint32_t readMemory(uint32_t offset, uint32_t *mem)
{
    if (offset < TEXT_END || offset >= MAX_MEMORY_SIZE)
    {
        perror("Invalid Memory Location\n");
        exit(1);
    }

    uint32_t value = *(mem + offset);
    return value;
}

void WriteMemory(uint32_t offset, uint32_t *mem, uint32_t value)
{
    if (offset < TEXT_END || offset >= MAX_MEMORY_SIZE)
    {
        perror("Invalid Memory Location\n");
        exit(1);
    }
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

    fclose(program);
}
