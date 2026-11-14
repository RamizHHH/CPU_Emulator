#include "Execute.h"

void ExecuteInstr(CPU *cpu, Pipeline_Reg *ID_EX_Current,
                  Pipeline_Reg *ID_EX_Next)
{

  ID_EX_Next->instr = ID_EX_Current->instr;

  ID_EX_Next->RawInstr = ID_EX_Current->RawInstr;

  ID_EX_Current->val = 0;

  if (ID_EX_Current->instr->Type == 'R')
  {

    isRType(cpu, ID_EX_Current, ID_EX_Next);
    return;
  }
  else if (ID_EX_Current->instr->Type == 'I')
  {

    isIType(cpu, ID_EX_Current, ID_EX_Next);
    return;
  }
  else if (ID_EX_Current->instr->Type == 'S')
  {

    isSType(cpu, ID_EX_Current, ID_EX_Next);
    return;
  }
  else if (ID_EX_Current->instr->Type == 'P')
  {

    isPType(cpu, ID_EX_Current);
    return;
  }
  else if (ID_EX_Current->instr->Type == 'B')
  {

    isBType(cpu, ID_EX_Current);
    return;
  }
  else if (ID_EX_Current->instr->Type == 'J')
  {

    isJType(cpu, ID_EX_Current, ID_EX_Next);
    return;
  }
  else
  {
    perror("Invalid Instruction\n");
  }
}

void isRType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next)
{
  switch (ID_EX_Current->instr->Opcode)
  {
  case OP_ADD:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1] +
                      cpu->reg[ID_EX_Current->instr->rs2];
    break;

  case OP_SUB:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1] -
                      cpu->reg[ID_EX_Current->instr->rs2];
    break;

  case OP_AND:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1] &
                      cpu->reg[ID_EX_Current->instr->rs2];
    break;

  case OP_OR:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1] |
                      cpu->reg[ID_EX_Current->instr->rs2];
    break;

  case OP_XOR:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1] ^
                      cpu->reg[ID_EX_Current->instr->rs2];
    break;

  case OP_SHL:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1]
                      << (cpu->reg[ID_EX_Current->instr->rs2] & 31);
    break;

  case OP_SHR:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1] >>
                      (cpu->reg[ID_EX_Current->instr->rs2] & 31);
    break;

  case OP_SAR:

    ID_EX_Next->val = (int32_t)cpu->reg[ID_EX_Current->instr->rs1] >>
                      (cpu->reg[ID_EX_Current->instr->rs2] & 31);
    break;

  case OP_MUL:
  {
    int16_t result = (int64_t)(int32_t)cpu->reg[ID_EX_Current->instr->rs2] *
                     (int64_t)(int32_t)cpu->reg[ID_EX_Current->instr->rs2];
    ID_EX_Next->val = (uint32_t)result;
    break;
  }

  case OP_DIV:

    if (cpu->reg[ID_EX_Current->instr->rs2] != 0)
    {
      ID_EX_Next->val =
          (uint32_t)((int32_t)cpu->reg[ID_EX_Current->instr->rs1] /
                     (int32_t)cpu->reg[ID_EX_Current->instr->rs2]);
      break;
    }
    else
    {
      // ADD TRAP HERE
      perror("Error divide by zero");
      exit(1);
    }

  case OP_MOD:

    if (cpu->reg[ID_EX_Current->instr->rs2] != 0)
    {
      ID_EX_Next->val =
          (uint32_t)((int32_t)cpu->reg[ID_EX_Current->instr->rs2] %
                     (int32_t)cpu->reg[ID_EX_Current->instr->rs2]);
      break;
    }
    else
    {
      // ADD TRAP HERE
      perror("Error divide by zero");
      exit(1);
    }

    // case 0x0C:  DO WHEN FLAGS ARE IMPLEMENTED
    //     break;

  case OP_MOV:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1];
    break;

  case OP_NOT:

    ID_EX_Next->val = ~(cpu->reg[ID_EX_Current->instr->rs1]);
    break;

  case OP_NEG:

    ID_EX_Next->val = 0 - (cpu->reg[ID_EX_Current->instr->rs1]);
    break;

  default:
    break;
  }
}

void isIType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next)
{

  switch (ID_EX_Current->instr->Opcode)
  {
  case OP_ADDI:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  case OP_SUBI:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] - ID_EX_Current->instr->imm;
    break;

  case OP_ANDI:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] & ID_EX_Current->instr->imm;
    break;

  case OP_ORI:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] | ID_EX_Current->instr->imm;
    break;

  case OP_XORI:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] ^ ID_EX_Current->instr->imm;
    break;

  case OP_SHLI:

    ID_EX_Next->val = cpu->reg[ID_EX_Current->instr->rs1]
                      << (ID_EX_Current->instr->imm & 31);
    break;

  case OP_SHRI:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] >> (ID_EX_Current->instr->imm & 31);
    break;

  case OP_SARI:

    ID_EX_Next->val = (int32_t)cpu->reg[ID_EX_Current->instr->rs1] >>
                      (ID_EX_Current->instr->imm & 31);
    break;

  case OP_MOVI:

    ID_EX_Next->val = ID_EX_Current->instr->imm;
    break;

  case OP_LD:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  case OP_LDH:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  case OP_LDB:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  case OP_LDUH:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  case OP_LDUB:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  default:
    break;
  }
}

void isSType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next)
{
  switch (ID_EX_Current->instr->Opcode)
  {

  case OP_ST:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  case OP_STH:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  case OP_STB:

    ID_EX_Next->val =
        cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm;
    break;

  default:
    break;
  }
}

void isBType(CPU *cpu, Pipeline_Reg *ID_EX_Current)
{
  if (ID_EX_Current->instr->Opcode == OP_BEQ)
  {

    if (cpu->reg[ID_EX_Current->instr->rs1] ==
        cpu->reg[ID_EX_Current->instr->rs2])
    {
      cpu->pc += ID_EX_Current->instr->imm;
    }
  }
  if (ID_EX_Current->instr->Opcode == OP_BNE)
  {

    if (cpu->reg[ID_EX_Current->instr->rs1] !=
        cpu->reg[ID_EX_Current->instr->rs2])
    {
      cpu->pc += ID_EX_Current->instr->imm;
    }
  }
  if (ID_EX_Current->instr->Opcode == OP_BLT)
  {

    if ((int32_t)cpu->reg[ID_EX_Current->instr->rs1] <=
        (int32_t)cpu->reg[ID_EX_Current->instr->rs2])
    {
      cpu->pc += ID_EX_Current->instr->imm;
    }
  }
  if (ID_EX_Current->instr->Opcode == OP_BGE)
  {

    if ((int32_t)cpu->reg[ID_EX_Current->instr->rs1] >=
        (int32_t)cpu->reg[ID_EX_Current->instr->rs2])
    {
      cpu->pc += ID_EX_Current->instr->imm;
    }
  }
  if (ID_EX_Current->instr->Opcode == OP_BLTU)
  {

    if (cpu->reg[ID_EX_Current->instr->rs1] <=
        cpu->reg[ID_EX_Current->instr->rs2])
    {
      cpu->pc += ID_EX_Current->instr->imm;
    }
  }
  if (ID_EX_Current->instr->Opcode == OP_BGEU)
  {

    if (cpu->reg[ID_EX_Current->instr->rs1] >=
        cpu->reg[ID_EX_Current->instr->rs2])
    {
      cpu->pc += ID_EX_Current->instr->imm;
    }
  }
}

void isJType(CPU *cpu, Pipeline_Reg *ID_EX_Current, Pipeline_Reg *ID_EX_Next)
{
  if (ID_EX_Current->instr->Opcode == OP_JMP)
  {

    cpu->pc += ID_EX_Current->instr->imm;
  }
  else if (ID_EX_Current->instr->Opcode == OP_JAL)
  {

    ID_EX_Next->val = cpu->pc;
    cpu->pc += ID_EX_Current->instr->imm;
  }
  else if (ID_EX_Current->instr->Opcode == OP_JALR)
  {

    ID_EX_Next->val = cpu->pc;
    cpu->pc =
        (cpu->reg[ID_EX_Current->instr->rs1] + ID_EX_Current->instr->imm) & ~1;
  }
}

void isPType(CPU *cpu, Pipeline_Reg *ID_EX_Current)
{

  if (ID_EX_Current->instr->Opcode == OP_HALT)
  {
    cpu->halted = 1;
  }
}
