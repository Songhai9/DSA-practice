#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int positionActuelle = 0;
    int nbVillages = 0;

    scanf("%i", &positionActuelle);
    scanf("%i", &nbVillages);

    int res = 0;

    for (int i = 0; i < nbVillages; i++) {
        int distanceVillage = 0;
        scanf("%i", &distanceVillage);
        if (abs(positionActuelle - distanceVillage) <= 50)
            res += 1;
    }

    printf("%i", res);
    return 0;
}