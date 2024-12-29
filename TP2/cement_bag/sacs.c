#include <stdio.h>
#include <math.h>

int main() {
    float cement_needed = 0.0;
    scanf("%f", &cement_needed);

    int sac = (int)(cement_needed / 60);

    if (fmod(cement_needed, 60) != 0)
        sac += 1;
        
    int prix = sac * 45;

    printf("%i\n", prix);

    return 0;
}