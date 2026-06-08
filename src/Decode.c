#include "Decode.h"

Instruction *DecodeInstruction(uint32_t RawInstr)
{
    Instruction *instr = malloc(sizeof(instr));

    DecodeOpcode(RawInstr, instr);
    DecodeRs1(RawInstr, instr);
    DecodeRs2(RawInstr, instr);
    DecodeRd(RawInstr, instr);
    DecodeImm(RawInstr, instr);

    return instr;
}

void DecodeOpcode(uint32_t RawInstr, Instruction *instr)
{
    uint32_t RightShifted = RawInstr >> 26;
    uint32_t opcode = RightShifted & 0x1F;

    instr->Opcode = opcode;

    checkType(instr);
}

void DecodeRs1(uint32_t RawInstr, Instruction *instr)
{
    uint32_t RightShifted = RawInstr >> 16;
    uint32_t Rs1 = RightShifted & 0xF;

    switch (instr->Type)
    {
    case 'R':
        instr->rs1 = Rs1;
        break;

    case 'I':

        instr->rs1 = Rs1;
        break;

    case 'S':

        instr->rs1 = Rs1;
        break;

    case 'B':
        instr->rs1 = Rs1;
        break;

    case 'J':
        instr->rs1 = 0;
        break;

    case 'P':
        instr->rs1 = 0;
        break;

    default:
        break;
    }
}

void DecodeRs2(uint32_t RawInstr, Instruction *instr)
{

    uint32_t RightShifted = RawInstr >> 11;
    uint32_t Rs2 = RightShifted & 0xF;

    switch (instr->Type)
    {
    case 'R':
        instr->rs2 = Rs2;
        break;

    case 'I':
        instr->rs2 = 0;
        break;

    case 'S':

        instr->rs2 = Rs2;
        break;

    case 'B':

        instr->rs2 = Rs2;
        break;

    case 'J':
        instr->rs2 = 0;
        break;

    case 'P':
        instr->rs2 = 0;
        break;

    default:
        break;
    }
}

void DecodeRd(uint32_t RawInstr, Instruction *instr)
{

    uint32_t RightShifted = RawInstr >> 21;
    uint32_t Rd = RightShifted & 0xF;

    switch (instr->Type)
    {
    case 'R':
        instr->rs1 = Rd;
        break;

    case 'I':
        instr->rd = Rd;
        break;

    case 'S':

        instr->rd = Rd;
        break;

    case 'B':
        instr->rd = 0;
        break;

    case 'J':
        instr->rd = 0;
        break;

    case 'P':
        instr->rd = 0;
        break;

    default:
        break;
    }
}

void DecodeImm(uint32_t RawInstr, Instruction *instr)
{

    uint32_t Imm = RawInstr & 0x3FF;

    switch (instr->Type)
    {
    case 'R':
        instr->imm = Imm;
        break;

    case 'I':
        instr->imm = Imm;
        break;

    case 'S':
        instr->imm = Imm;
        break;

    case 'B':
        instr->imm = Imm;
        break;

    case 'J':
        instr->imm = 0;
        break;

    case 'P':
        instr->imm = 0;
        break;

    default:
        break;
    }
}

void checkType(Instruction *instr)
{
    if (instr->Opcode >= 0x01 && instr->Opcode <= 0xF)
    {
        instr->Type = 'R';
    }
    else if (instr->Opcode >= 0x10 && instr->Opcode <= 0x19)
    {
        instr->Type = 'I';
    }
    else if (instr->Opcode >= 0x1A && instr->Opcode <= 0x21)
    {
        instr->Type = 'S';
    }
    else if (instr->Opcode >= 0x22 && instr->Opcode <= 0x27)
    {
        instr->Type = 'B';
    }
    else if (instr->Opcode >= 0x28 && instr->Opcode <= 0x2A)
    {
        instr->Type = 'J';
    }

    else if (instr->Opcode >= 0x2B && instr->Opcode <= 0x33)
    {
        instr->Type = 'P';
    }
}

void FreeInstr(Instruction *instr)
{
    free(instr);
}