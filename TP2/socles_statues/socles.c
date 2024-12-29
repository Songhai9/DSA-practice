#include <stdio.h>
#include <stdlib.h>

int main() {
    int premier_etage = 0;
    int dernier_etage = 0;
    int dimensions = 0;

    scanf("%i", &premier_etage);
    scanf("%i", &dernier_etage);

    if (dernier_etage > premier_etage) {
        printf("Dimensions invalides");
        exit(EXIT_FAILURE);
    }

    else if (dernier_etage == premier_etage) {
        dimensions = dernier_etage * premier_etage;
    }
    else {
        for (int i = premier_etage; i >= dernier_etage; i--) {
            dimensions += i * i;
        }
    }

    printf("%i\n", dimensions);

    return 0;
}