#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    if (argc < 2)
        exit(42);

    char alphabet[26];
    for (int i = 0; i < 26; i++) 
        alphabet[i] = 'a' + i;
    
    int counts[26] = {0};
    
    for (int k = 1; k < argc ; k++) {
        for (int i = 0; argv[k][i] != '\0'; i++) {

            if (argv[k][i] >= 'A' && argv[k][i] <= 'Z')
                    argv[k][i] += 32;

            for (int j = 0; j < 26; j++) {

                if (argv[k][i] == alphabet[j]) {
                    counts[j]++;
                    break;;
                } 

            }
        }
    }
    
    for (int i = 0; i < 26; i++)
        printf("%c:%i\n", alphabet[i], counts[i]);
    
    return 0;
}