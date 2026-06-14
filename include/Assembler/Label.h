#pragma once
#include <unistd.h>

#ifndef LABEL_H
#define LABEL_H

typedef struct
{
    char name[128];
    uint32_t address;
} Label;

int CheckLabel(const char *line);

void AddLabelToList(Label *label, char *line, Label **List, int currentAddress, int index);

#endif