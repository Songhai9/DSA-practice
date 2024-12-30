#include <stdio.h>
#include <stdlib.h>

int main() {
    int nbDeplacement = 0;
    scanf("%i", &nbDeplacement);
    int *deplacements = malloc(nbDeplacement * sizeof(int));
    if (deplacements == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        return 1;
    }

    for (int i = 0; i < nbDeplacement; i++) {
        scanf("%i", &deplacements[i]);
    }

    for (int i = nbDeplacement - 1; i >= 0; i--) {
        switch(deplacements[i]) {
            case 5:
                printf("%i\n", 4);
                break;
            case 4:
                printf("%i\n", 5);
                break;
            case 3:
                printf("%i\n", 3);
                break;
            case 2:
                printf("%i\n", 1);
                break;
            case 1:
                printf("%i\n", 2);
                break;
        }
    }

    free(deplacements);

    return 0;
}