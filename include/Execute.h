#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "CPU.h"

void ExecuteInstr(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isRType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isIType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isSType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isBType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isJType(Instruction *instr, uint32_t *Mem, CPU *cpu);

void isPType(Instruction *instr, uint32_t *Mem, CPU *cpu);