#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#ifndef CPU_MEMORY_H
#define CPU_MEMORY_H

#define MAX_MEMORY_SIZE 2048
#define TEXT_START 0
#define TEXT_END 1024
#define STACK_TOP (MAX_MEMORY_SIZE)
#define STACK_SIZE 1024

uint32_t *initalizeMemory(int size);

uint32_t readMemory(uint32_t offset, uint32_t *mem);

void WriteMemory(uint32_t offset, uint32_t *mem, uint32_t value);

void freeMemory(uint32_t *mem);

void loadProgram(uint32_t *mem, const char *filename, int Memory_size);

#endif
