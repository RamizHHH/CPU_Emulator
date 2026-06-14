#include "Label.h"
#include "Assemble.h"
#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[])
{
    if (agrc < 2)
    {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *inputPath = argv[1];

    FILE *inputFile = fopen(inputPath, "r");
    FILE *Output = fopen("Program.bin", "wb");

    if (!inputFile || !Output)
    {
        perror("Invalid Files");
        return EXIT_FAILURE;
    }

    char line[512];
    Label *list[512] = {0};
    int index = 0;
    int currentAddress = 0;

    while (fgets(line, sizeof(line), inputFile))
    {
        if (CheckLabel(line) == 1)
        {
            Label *label = malloc(sizeof(Label));
            AddLabelToList(label, line, list, currentAddress, index);
            index++;
            continue;
        }
        currentAddress += 4;
    }

    currentAddress = 0;

    rewind(inputFile);

    while (fgets(line, sizeof(line), inputFile))
    {
        if (CheckLabel(line))
        {
            continue;
        }

        uint32_t instruction = AssembleLine(line, list, currentAddress);

        currentAddress += 4;

        fwrite(&instruction, sizeof(instruction), 1, Output);
    }
    fclose(inputFile);
    fclose(Output);

    for (int i = 0; i < index; ++i)
    {
        free(list[i]);
    }

    return 0;
}
