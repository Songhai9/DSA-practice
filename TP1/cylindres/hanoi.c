#include <stdlib.h>
#include <stdio.h>
#include "hanoi.h"

int main() {
    deplacer(1, 2);
    deplacer(1, 3);
    deplacer(2, 3);
    deplacer(1, 2);
    deplacer(3, 1);
    deplacer(3, 2);
    deplacer(1, 2);
    deplacer(1, 3);
    deplacer(2, 1);
    deplacer(2, 3);
    deplacer(1, 2);
    deplacer(3, 1);
    deplacer(2, 1);
    deplacer(2, 3);
    deplacer(1, 2);
    deplacer(1, 3);
    deplacer(2, 3);
    
    return 0;
}