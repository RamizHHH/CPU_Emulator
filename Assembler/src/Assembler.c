#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "Parse.h"

int main(int argv, char **argc) {

  if (argv < 2) {
    perror("Insufficent Number of Arguments\n");
  }

  FILE *input_file = fopen(argc[1], "r");
  FILE *output_file = fopen("Program.bin", "wb");

  if (!input_file) {
    perror("Invalid File\n");
  }

  char buffer[1024];

  while (fgets(buffer, sizeof(buffer), input_file) != NULL) {
    uint32_t out = Parse(buffer, output_file);
    fprintf(out, output_file);
  }

  fclose(input_file);
  return 0;
}