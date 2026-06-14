#include <stdio.h>
#include <unistd.h>
#include "Memory_Stage.h"
#include "Fetch.h"

#ifndef WRITEBACK_H
#define WRITEBACK_H

void WriteBack(Instruction *instr, Execute_Register *reg, CPU *cpu, Memory_Register *memReg);

#endif