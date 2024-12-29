#include <stdio.h>
#include <stdlib.h>

void permut(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}