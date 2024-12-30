#include <stdio.h>
#include <stdlib.h>

int main() {
    int prix[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};

    int quantite = 0;
    int addition = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%i", &quantite);
        addition += quantite * prix[i];
    }
    printf("%i\n", addition);

    return 0;
}