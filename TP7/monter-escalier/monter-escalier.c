#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        perror("Usage: ./monter-escalier <entier>");
        exit(42);
    }

    long n = atol(argv[1]);
    if (n <= 0)
    {
        perror("Mauvais argument. Vous devez entrer un nombre entier strictement positif");
        exit(42);
    }

    long dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    printf("%ld\n", dp[n]);

    return 0;
}
