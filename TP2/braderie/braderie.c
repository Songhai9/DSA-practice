#include <stdio.h>
#include <stdlib.h>

int main () {
    int positionDepart = 0;
    int largeurEmplacement = 0;
    int nbVendeur = 0;

    scanf("%i", &positionDepart);
    scanf("%i", &largeurEmplacement);
    scanf("%i", &nbVendeur);

    for (int i = 0; i <= nbVendeur; i++) {
        printf("%i\n", positionDepart + i * largeurEmplacement);
    }
    
    return 0;
}