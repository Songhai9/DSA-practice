#include <stdio.h>
#include <stdlib.h>

int main() {
    int nbATrouver = 0;
    scanf("%i", &nbATrouver);

    int proposition = 0;
    int nbEssais = 0;
    do {
        nbEssais++;
        scanf("%i", &proposition);
        if (proposition < nbATrouver)
            printf("c'est plus\n");
        else if (proposition > nbATrouver)
            printf("c'est moins\n");
    } while (proposition != nbATrouver);

    printf("Nombre d'essais nécessaires :\n%i", nbEssais);

    return 0;
}