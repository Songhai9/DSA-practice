#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: %s <string> <chain>\n", argv[0]);
        exit(42);
    }

    int offset = 0; 
    int position = -1;  

    char *str1 = argv[1];
    char *str2 = argv[2];

    while (str1[offset]) { 
        int i = 0;  
        while (str2[i] && str1[offset + i] && str1[offset + i] == str2[i]) {
            i++;
        }

        if (str2[i] == '\0') {  
            position = offset;
            break;
        }

        offset++;  
    }

    printf("%i\n", position);

    return 0;
}
