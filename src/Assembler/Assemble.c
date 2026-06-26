#include "Assemble.h"

#include <stdint.h>
#include <string.h>

uint32_t AssembleLine(char *line, Label **list, int currentAddress)
{
    char *tokens[8];

    int count = 0;

    char *token = strtok(line, " ,\t\n");

    while (token)
    {
        tokens[count++] = token;

        token = strtok(NULL, " ,\t\n");
    }

    if (count == 0)
    {
        return 0;
    }

    uint32_t instr = CheckInstr(tokens, list, currentAddress);

    return instr;
}

uint32_t CheckInstr(char **tokens, Label **list, int currentAddress)
{

    uint8_t opcode = checkOpcode(tokens[0]);

    if (opcode >= 0x01 && opcode <= 0x0F)
    {
        int rd = parseRegister(tokens[1]);
        int rs1 = parseRegister(tokens[2]);
        int rs2 = parseRegister(tokens[3]);

        return (EncodeR(opcode, rd, rs1, rs2));
    }
    else if (opcode >= 0x10 && opcode <= 0x19)
    {
        if (opcode == 0x19)
        {
            int rd = parseRegister(tokens[1]);
            int imm = strtol(tokens[2], NULL, 0);

            return (EncodeI(opcode, rd, 0, imm));
        }
        else
        {
            int rd = parseRegister(tokens[1]);
            int rs1 = parseRegister(tokens[2]);
            int imm = strtol(tokens[3], NULL, 0);

            return (EncodeI(opcode, rd, rs1, imm));
        }
    }
    else if (opcode >= 0x1A && opcode <= 0x1F)
    {
        if (opcode <= 0x1E)
        {
            int rd = parseRegister(tokens[1]);
            int rs1 = parseRegister(tokens[2]);
            int imm = strtol(tokens[3], NULL, 0);

            return (EncodeI(opcode, rd, rs1, imm));
        }
        else if (opcode > 0x1E && opcode <= 0x21)
        {
            int rs2 = parseRegister(tokens[1]);
            int rs1 = parseRegister(tokens[2]);
            int imm = strtol(tokens[3], NULL, 0);

            return (EncodeS(opcode, rs2, rs1, imm));
        }
    }
    else if (opcode >= 0x22 && opcode <= 0x27)
    {
        int rs2 = parseRegister(tokens[1]);
        int rs1 = parseRegister(tokens[2]);
        char *label = tokens[3];

        int16_t imm = LabelEncode(label, list, currentAddress);

        return (EncodeB(opcode, rs2, rs1, imm));
    }
    else if (opcode >= 0x28 && opcode <= 0x2A)
    {
        if (opcode == 0x28)
        {
            char *label = tokens[1];

            int16_t imm = LabelEncode(label, list, currentAddress);

            return (EncodeJ(opcode, 0, 0, imm));
        }
        else if (opcode == 0x29)
        {
            int rd = parseRegister(tokens[1]);
            char *label = tokens[2];

            int16_t imm = LabelEncode(label, list, currentAddress);

            return (EncodeJ(opcode, 0, rd, imm));
        }
        else if (opcode == 0x2A)
        {
            int rd = parseRegister(tokens[1]);
            int rs1 = parseRegister(tokens[2]);
            char *label = tokens[3];

            int16_t imm = LabelEncode(label, list, currentAddress);

            return (EncodeJ(opcode, rs1, rd, imm));
        }
    }
    else if (opcode >= 0x32)
    {
        return EncodeP(opcode);
    }
    return 0;
}

uint8_t checkOpcode(const char *opcode)
{
    size_t size = sizeof(opcodeTable) / sizeof(opcodeTable[0]);

    for (size_t i = 0; i < size; ++i)
    {
        if (strcmp(opcode, opcodeTable[i].name) == 0)
        {
            return opcodeTable[i].opcode;
        }
    }
    return -1;
}

int parseRegister(const char *str)
{
    if (str[0] != 'r')
    {
        return -1;
    }
    return atoi(str + 1);
}

int16_t LabelEncode(char *label, Label **list, int currentAddress)
{
    for (int i = 0; i < 512; ++i)
    {
        if (label == NULL)
        {
            continue;
        }
        if (strcmp(list[i]->name, label) == 0)
        {
            uint32_t temp = list[i]->address;
            int16_t actualAddress = temp - (currentAddress + 4);
            return actualAddress;
        }
    }
    printf("Undefined label: %s\n", label);
    exit(1);
}

uint32_t EncodeR(uint8_t opcode, uint8_t rd, uint8_t rs1, uint8_t rs2)
{
    return ((uint32_t)opcode << 26) | ((uint32_t)rd << 21) | ((uint32_t)rs1 << 16) | ((uint32_t)rs2 << 11);
}
uint32_t EncodeI(uint8_t opcode, uint8_t rd, uint8_t rs1, int16_t imm)
{
    return ((uint32_t)opcode << 26) | ((uint32_t)rd << 21) | ((uint32_t)rs1 << 16) | ((uint16_t)imm);
}
uint32_t EncodeP(uint8_t opcode)
{
    return ((uint32_t)opcode << 26);
}

uint32_t EncodeS(uint8_t opcode, uint8_t rs2, uint8_t rs1, int16_t imm)
{
    return ((uint32_t)opcode << 26) | ((uint32_t)rs2 << 21) | ((uint32_t)rs1 << 16) | ((uint16_t)imm);
}

uint32_t EncodeB(uint8_t opcode, uint8_t rs2, uint8_t rs1, int16_t LabelAddress)
{
    return ((uint32_t)opcode << 26) | ((uint32_t)rs2 << 21) | ((uint32_t)rs1 << 16) | ((uint16_t)LabelAddress);
}

uint32_t EncodeJ(uint8_t opcode, uint8_t rs1, uint8_t rd, int16_t LabelAddress)
{
    if (opcode == 0x28)
    {
        return ((uint32_t)opcode << 26) | ((uint32_t)0 << 21) | ((uint32_t)0 << 16) | (uint16_t)(LabelAddress);
    }
    else if (opcode == 0x29)
    {
        return ((uint32_t)opcode << 26) | ((uint32_t)rd << 21) | ((uint32_t)0 << 16) | (uint16_t)(LabelAddress);
    }
    else if (opcode == 0x2A)
    {
        return ((uint32_t)opcode << 26) | ((uint32_t)rd << 21) | ((uint32_t)rs1 << 16) | (uint16_t)(LabelAddress);
    }
    return 0;
}