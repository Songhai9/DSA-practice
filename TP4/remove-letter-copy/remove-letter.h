#include <stdio.h>
#include <stdlib.h>

char *removeLetter(char *str, char c) {
    if (str == NULL)
        return NULL;

    size_t length = 0;
    size_t newLength = 0;

    while (str[length] != '\0') {
        if (str[length] != c) {
            newLength++;
        }
        length++;
    }

    int writeIndex = 0;
    char *strRemoveCopy = malloc((newLength * sizeof(char)) + 1);
    if (strRemoveCopy == NULL)
        return NULL;

    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        if (str[readIndex] != c) {
            strRemoveCopy[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }

    strRemoveCopy[writeIndex] = '\0';
    

    return strRemoveCopy;
}