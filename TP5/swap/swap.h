#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *a, void *b, size_t size) {
    char *tmp = (char *)malloc(size);
    if (tmp == NULL)
        return;

    char *pa = (char *)a;
    char *pb = (char *)b;
    for (size_t i = 0; i < size; i++) {
        tmp[i] = pa[i];
    }

    for (size_t i = 0; i < size; i++) {
        pa[i] = pb[i];
    }

    for (size_t i = 0; i < size; i++) {
        pb[i] = tmp[i];
    }

    free(tmp);
}
