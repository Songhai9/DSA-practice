#include <stdio.h>
#include "tonneaux.h"

int main() {
    remplir(3);
    transferer(3, 5);
    remplir(3);
    transferer(3, 5);
    vider(5);
    transferer(3, 5);
    remplir(3);
    transferer(3, 5);

    return 0;
}