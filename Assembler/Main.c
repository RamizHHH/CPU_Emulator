#include "Assemble.h"
// #include <getopt.h>
// #include <unistd.h>

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

    while (fgets(line, sizeof(line), inputFile))
    {
        uint32_t instruction = AssembleLine(line);

        fwrite(&instruction, sizeof(instruction), 1, Output);
    }

    fclose(inputFile);
    fclose(Output);
    return 0;
}
