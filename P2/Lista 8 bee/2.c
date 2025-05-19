#include <stdio.h>

int main() {
    int N[10];
    int i;
    int y;

    scanf("%d", &i); 

    for(y = 0; y < 10; y++) {
        N[y] = i;
        printf("N[%d] = %d\n", y, N[y]);
        i *= 2;
    }

    return 0;
}
