#include <stdio.h>
#include <stdlib.h>

void minmax(int arr[], int length, int *min, int *max) {
    *min = arr[0];
    *max = arr[1];

    for (int i = 0; i < length; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}