#include <stdio.h>
#include <stdlib.h>

void progressBar(int n) {
    printf("[");
    for(int i = 0; i < n; i++)
        printf("=");
    for (int i = n; i < 10; i++)
        printf(" ");
    printf("]\n");
}

int main() {
    int nbBar = 0;
    scanf("%i", &nbBar);

    if (nbBar <= 0)
        progressBar(0);
    else if (nbBar >= 10)
        progressBar(10);
    else
        progressBar(nbBar);
    
    return 0;
}