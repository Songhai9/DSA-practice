#include "matrix-In.h"


int **matrixI1(int n) {
    int **mat = (int **)malloc(n * sizeof(int *));
    if (mat == NULL)
        return NULL;

    for (int i = 0; i < n; i++) {
        mat[i] = (int *)malloc(n * sizeof(int));
        if (mat[i] == NULL) {
            for (int j = 0; j < i; j++) 
                free(mat[j]);
            free(mat);
            return NULL;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            mat[i][j] = (i == j) ? 1 : 0;
    }

    return mat;
}

void matrixI2(int n, int ***mat) {
    *mat = (int**)malloc(n * sizeof(int *));
    if (*mat == NULL) {
        *mat = NULL;
        return;
    }

    for (int i = 0; i < n; i++) {
        (*mat)[i] = (int *)malloc(n * sizeof(int));
        if ((*mat)[i] == NULL) {
            for (int j = 0; j < i; j++)
                free((*mat)[j]);
            free(*mat);
            *mat = NULL;
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            (*mat)[i][j] = (i == j) ? 1 : 0;
        }
    }

    return;
}

void freeMatrix(int n, int **mat) {
    
    for (int i = 0; i < n; i++) {
        free(mat[i]);
    }
    
    free(mat);
}

