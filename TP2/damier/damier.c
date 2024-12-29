#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%i", &n);

    int line = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (line % 2 == 0) {
                if (j % 2 == 0)
                    printf("#");
                else
                    printf(".");
            }
            else {
                if (j % 2 == 0)
                    printf(".");
                else
                    printf("#");
            }   
        }
        line++;
        printf("\n");
    }

    return 0;
}