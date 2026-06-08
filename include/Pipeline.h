#include <stdio.h>
#include "Fetch.h"
#include "CPU_Memory.h"
#include <stdint.h>
#include <unistd.h>
#include "Decode.h"

// typedef struct
// {

// } Pipeline;

uint32_t FetchStage(uint32_t *Mem, uint32_t PC);

Instruction *DecodeStage(uint32_t Instr);