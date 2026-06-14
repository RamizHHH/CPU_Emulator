#include "Label.h"
#include <string.h>

int CheckLabel(const char *line)
{
    int len = strlen(line);

    while (len > 0 &&
           (line[len - 1] == '\n' ||
            line[len - 1] == '\r' ||
            line[len - 1] == ' ' ||
            line[len - 1] == '\t'))
    {
        len--;
    }

    return (len > 0 && line[len - 1] == ':');
}

void AddLabelToList(Label *label, char *line, Label **List, int currentAddress, int index)
{
    label->address = currentAddress;

    int len = strlen(line);

    while (len > 0 &&
           (line[len - 1] == '\n' ||
            line[len - 1] == '\r'))
    {
        line[--len] = '\0';
    }

    if (len > 0 && line[len - 1] == ':')
    {
        line[len - 1] = '\0';
    }

    strcpy(label->name, line);

    List[index] = label;
}