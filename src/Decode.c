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
    switch (instr->Type)
    {
    case 'R':
        uint32_t RightShifted = RawInstr >> 16;
        uint32_t rs1 = RightShifted & 0xF;
        instr->rs1 = rs1;
        break;

    case 'I':
        uint32_t RightShifted = RawInstr >> 16;
        uint32_t rs1 = RightShifted & 0xF;
        instr->rs1 = rs1;
        break;

    case 'S':
        uint32_t RightShifted = RawInstr >> 16;
        uint32_t rs1 = RightShifted & 0xF;
        instr->rs1 = rs1;
        break;

    case 'B':
        uint32_t RightShifted = RawInstr >> 16;
        uint32_t rs1 = RightShifted & 0xF;
        instr->rs1 = rs1;
        break;

    case 'J':
        instr->rs1 = NULL;
        break;

    case 'P':
        instr->rs1 = NULL;
        break;

    default:
        break;
    }
}

void DecodeRs2(uint32_t RawInstr, Instruction *instr)
{
    switch (instr->Type)
    {
    case 'R':
        uint32_t RightShifted = RawInstr >> 11;
        uint32_t rs2 = RightShifted & 0xF;
        instr->rs2 = rs2;
        break;

    case 'I':
        instr->rs2 = NULL;
        break;

    case 'S':
        uint32_t RightShifted = RawInstr >> 11;
        uint32_t rs2 = RightShifted & 0xF;
        instr->rs2 = rs2;
        break;

    case 'B':
        uint32_t RightShifted = RawInstr >> 11;
        uint32_t rs2 = RightShifted & 0xF;
        instr->rs2 = rs2;
        break;

    case 'J':
        instr->rs2 = NULL;
        break;

    case 'P':
        instr->rs2 = NULL;
        break;

    default:
        break;
    }
}

void DecodeRd(uint32_t RawInstr, Instruction *instr)
{
    switch (instr->Type)
    {
    case 'R':
        uint32_t RightShifted = RawInstr >> 21;
        uint32_t rd = RightShifted & 0xF;
        instr->rs1 = rd;
        break;

    case 'I':
        uint32_t RightShifted = RawInstr >> 21;
        uint32_t rd = RightShifted & 0xF;
        instr->rs1 = rd;
        break;

    case 'S':
        uint32_t RightShifted = RawInstr >> 21;
        uint32_t rd = RightShifted & 0xF;
        instr->rd = rd;
        break;

    case 'B':
        instr->rd = NULL;
        break;

    case 'J':
        instr->rd = NULL;
        break;

    case 'P':
        instr->rd = NULL;
        break;

    default:
        break;
    }
}

void DecodeImm(uint32_t RawInstr, Instruction *instr)
{
    switch (instr->Type)
    {
    case 'R':
        uint32_t imm = RawInstr & 0x3FF;
        instr->imm = imm;
        break;

    case 'I':
        uint32_t imm = RawInstr & 0x3FF;
        instr->imm = imm;
        break;

    case 'S':
        uint32_t imm = RawInstr & 0x3FF;
        instr->imm = imm;
        break;

    case 'B':
        uint32_t imm = RawInstr & 0x3FF;
        instr->imm = imm;
        break;

    case 'J':
        instr->imm = NULL;
        break;

    case 'P':
        instr->imm = NULL;
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