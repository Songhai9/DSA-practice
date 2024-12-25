#include <stdio.h>

int main() {
    double lon; // length
    double lar; // width

    printf("Longueur? ");
    scanf("%lf", &lon);

    printf("Largeur? ");
    scanf("%lf", &lar);

    printf("Aire = %lf\n", lar * lon);

    return 0;
}