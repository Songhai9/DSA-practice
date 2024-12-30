#include <stdio.h>
#include <stdlib.h>

void copy(char *ch1, char **ch2) {
    if (ch1 == NULL) {
        *ch2 = NULL;
        return;
    }

    size_t length = 0;

    while(ch1[length] != '\0')
        length++;
    
    *ch2 = malloc(length * sizeof(char) + 1);
    if (*ch2 == NULL) {
        // printf("Erreur d'allocation");
        return;
    }

    for (size_t i = 0; i <= length; i++)
       (*ch2)[i] = ch1[i];
    
    return;
}