
#include <stdio.h>

int deplacement_inverse(int deplacement_initial)
{
    switch (deplacement_initial)
    {
    case 0:
        return 0;
    case 1:
        return 2;
    case 2:
        return 1;
    case 3:
       return 3;
    case 4:
        return 5;
    case 5:
       return 4;
    }
}

void readAndReverse() {
    int x;
    if(scanf("%d", &x) != 1) 
        return;
    if(x == 0) 
        return;
    if (x >= 0 && x <= 5)
        readAndReverse();
    printf("%d\n", deplacement_inverse(x));
}

int main() {
    readAndReverse();
    return 0;
}