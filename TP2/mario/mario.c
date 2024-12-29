#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%i", &n);
    if (n <= 0) {
        printf("IMPOSSIBLE");
        exit(EXIT_SUCCESS);
    }

    int line = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            if (j >= n - line - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
        line++;
    }

    return 0;
}