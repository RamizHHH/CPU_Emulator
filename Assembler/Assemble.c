#include "Assemble.h"

uint32_t AssembleLine(char *line)
{
    char *tokens[8];

    int count = 0;

    char *token = strtok(line, " ,\t\n");

    while (token)
    {
        tokens[count++] = token;

        token =
            strtok(NULL, " ,\t\n");
    }

    if (count == 0)
        return 0;

    if (strcmp(tokens[0], "MOVI") == 0)
    {
        int rd = parseRegister(tokens[1]);
        int imm = strtol(tokens[2], NULL, 0);

        return (EncodeI(OP_MOVI, rd, 0, imm));
    }

    if (strcmp(tokens[0], "ADD") == 0)
    {
        int rd = parseRegister(tokens[1]);
        int rs1 = parseRegister(tokens[2]);
        int rs2 = parseRegister(tokens[3]);

        return (EncodeR(OP_ADD, rd, rs1, rs2));
    }

    if (strcmp(tokens[0], "HALT") == 0)
    {
        return EncodeP(OP_HALT);
    }

    return 0;
}

int parseRegister(const char *str)
{
    if (str[0] != 'r')
    {
        return -1;
    }
    return atoi(str + 1);
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
