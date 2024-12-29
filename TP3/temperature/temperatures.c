#include <stdio.h>
#include <stdlib.h>

int main() {

    int nbMesures;
    int tempMax;
    int tempMin;

    scanf("%i", &nbMesures);
    scanf("%i", &tempMin);
    scanf("%i", &tempMax);

    int tempMesure;

    for (int i = 0; i < nbMesures; i++) {
        scanf("%i", &tempMesure);
        if (tempMesure < tempMin || tempMesure > tempMax) {
            printf("Alerte !!\n");
            break;
        }
        else 
            printf("Rien à signaler\n");
    }

    return 0;
}