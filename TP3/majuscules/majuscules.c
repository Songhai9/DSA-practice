#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

void to_uppercase(char *str) {
    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}

int main(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        to_uppercase(argv[i]);
        printf("%s\n", argv[i]);
    }
}