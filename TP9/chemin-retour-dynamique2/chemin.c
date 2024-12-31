#include <stdio.h>
#include <stdlib.h>

void deplacement_inverse(int deplacement_initial)
{
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

int main()
{

    int deplacement = -1;

    int *tabDeplacement = (int *)malloc(10 * sizeof(int));
    if (tabDeplacement == NULL) {
        printf("Erreur d'allocation\n");
        exit(-1);
    }
    int tabSize = 10;
    int idx = 0;

    do
    {
        scanf("%i", &deplacement);

        if (deplacement >= 0 && deplacement <= 5)
        {
            if (idx == tabSize)
            {
                tabSize *= 2;
                int *tmp = realloc(tabDeplacement, tabSize * sizeof(int));
                if (tmp == NULL)
                {
                    printf("Erreur d'allocation\n");
                    free(tabDeplacement);
                    return -1;
                }
                else
                {
                    tabDeplacement = tmp;
                }
            }
            tabDeplacement[idx] = deplacement;   
            idx++;        
        }
        else
            printf("Déplacement invalide\n");
    } while (deplacement != 0);

    for (int i = idx - 2; i >= 0; i--)
        deplacement_inverse(tabDeplacement[i]);

    free(tabDeplacement);
    return 0;
}