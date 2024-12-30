#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 2)
        exit(42);

    int count = 0;
    size_t i = 0;
    while (argv[1][i] != '\0') {
        if (argv[1][i] == 'A')
            count++;
        i++;
    }

    printf("%i", count);

    return 0;
}