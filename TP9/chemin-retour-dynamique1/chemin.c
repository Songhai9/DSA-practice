#include "pile.h"
#include <stdio.h>
#include <stdlib.h>

void deplacement_inverse(int deplacement_initial) {
    switch (deplacement_initial)
    {
    case 0:
        break;
    case 1:
        printf("2\n");
        break;
    case 2:
        printf("1\n");
        break;
    case 3:
        printf("3\n");
        break;
    case 4:
        printf("5\n");
        break;
    case 5:
        printf("4\n");
        break;
    }
}

int main() {
    Stack *s = stack_create();

    int deplacement = 10;

    do {
        scanf("%i", &deplacement);
        if (deplacement >= 0 && deplacement <= 5)
            stack_push(s, deplacement);
        else 
            printf("Déplacement invalide\n");
    } while (deplacement != 0);

    while(!stack_is_empty(s)) {
        deplacement_inverse(stack_pop(s));
    }

    stack_free(s);
    return 0;
}