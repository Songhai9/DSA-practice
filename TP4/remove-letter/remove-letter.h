#include <stdio.h>
#include <stdlib.h>

void removeLetter(char *str, char c) {
    if (str == NULL)
        return;

    int writeIndex = 0;

    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        if (str[readIndex] != c) {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }

    str[writeIndex] = '\0';
}