#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int tricheur(int N, int *M)
{
    int i,j;
    
    for (i = N - 1; i > 0; i--)
    {
        for (j = i - 1 ; j >= 0; j--)
        {

            if (M[i] == M[j])
            {
                return M[i];
            }
        }
    }
    
    return -1;
}

int main()
{
    int N;
    int i;
    int *M;
    scanf("%i", &N);

    M = (int *)malloc(N*sizeof(int));
    if (M == NULL)
    {
        return -1;
    }

    for (i = 0; i < N; i++)
    {
        scanf("%i", &M[i]);
    }

    printf("%i\n", tricheur(N, M));
   
    free(M);

    return 0;
}