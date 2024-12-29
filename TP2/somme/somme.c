#include <stdlib.h>
#include <stdio.h>

int main() {

    double n = 0;
    scanf("%lf", &n);
    long long somme = (long long)(n * (n + 1) / 2);
    printf("%lld\n", somme);

    return 0;
}