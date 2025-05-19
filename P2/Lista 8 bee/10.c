#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int rpm[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &rpm[i]);
    }

    for (int i = 1; i < N; i++) {
        if (rpm[i] < rpm[i - 1]) {
            printf("%d\n", i + 1); 
            return 0;
        }
    }

    printf("0\n"); 
    return 0;
}
