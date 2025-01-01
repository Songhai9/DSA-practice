
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    long long *cards = malloc(N * sizeof(long long));
    for(int i = 0; i < N; i++){
        scanf("%lld", &cards[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(cards[j] == cards[i]){
                printf("%lld\n", cards[i]);
                free(cards);
                return 0;
            }
        }
    }
    printf("-1\n");
    free(cards);
    return 0;
}