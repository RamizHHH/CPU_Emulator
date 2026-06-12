#include <stdio.h>
#include <unistd.h>
#include "CPU_Memory.h"
#include "CPU.h"

#ifndef FETCH_H
#define FETCH_H

uint32_t FetchInstruction(uint32_t *Mem, CPU *cpu);

#endif