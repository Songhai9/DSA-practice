#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int nbPaires = 0;
    
    // Premier rectangle
    int absBasGauche1 = 0;
    int ordBasGauche1 = 0;
    int largeur1 = 0;
    int hauteur1 = 0;

    // Deuxième rectangle
    int absBasGauche2 = 0;
    int ordBasGauche2 = 0;
    int largeur2 = 0;
    int hauteur2 = 0;

    scanf("%i", &nbPaires);

    for (int i = 0; i < nbPaires; i++) {
        scanf("%i", &absBasGauche1);
        scanf("%i", &ordBasGauche1);
        scanf("%i", &largeur1);
        scanf("%i", &hauteur1);

        scanf("%i", &absBasGauche2);
        scanf("%i", &ordBasGauche2);
        scanf("%i", &largeur2);
        scanf("%i", &hauteur2);

        bool condition1 = (absBasGauche1 + largeur1 <= absBasGauche2) || (ordBasGauche1 + hauteur1 <= ordBasGauche2);
        bool condition2 = (absBasGauche2 + largeur2 <= absBasGauche1) || (ordBasGauche2 + hauteur2 <= ordBasGauche2);

        if (!condition1 && !condition2)
            printf("OUI\n");
        else
            printf("NON\n");
    }

    return 0;
}