#include <stdio.h>
#include "minmax.h" // <- la fonction permut doit se trouver dans ce fichier

int main(void) {

    int tn[] = { 12, 23, 36, 5, 46, 9, 25 };
    int min = 0;
    int max = 0;

    // Appeler la fonction minmax
    minmax(tn, 7, min, max);



    printf("min: %i max: %i\n", min, max); // doit afficher "min: 5 max:46"

}