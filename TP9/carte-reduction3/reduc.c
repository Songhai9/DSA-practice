
#include <stdio.h>
#include <stdbool.h>

static bool used[11881376];

int code2int(const char *s) {
    int v = 0;
    for(int i = 0; i < 5; i++) {
        v = v * 26 + (s[i] - 'A');
    }
    return v;
}

int main(void) {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        char code[6];
        scanf("%5s", code);
        int idx = code2int(code);
        if(used[idx]) {
            printf("%s\n", code);
            return 0;
        }
        used[idx] = true;
    }
    printf("-1\n");
    return 0;
}