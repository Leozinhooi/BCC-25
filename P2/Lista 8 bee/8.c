#include <stdio.h>

int main() {
    int x;
    int y = 15;
    int z[5]; 
    int c[5]; 
    int vetor = 0;
    int vetor1 = 0;

    while (y--) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            z[vetor] = x;
            vetor++;
        } else {
            c[vetor1] = x;
            vetor1++;
        }

        if (vetor == 5) {
            for (int i = 0; i < 5; i++) {
                printf("par[%d] = %d\n", i, z[i]);
            }
            vetor = 0; 
        }

        if (vetor1 == 5) {
            for (int i = 0; i < 5; i++) {
                printf("impar[%d] = %d\n", i, c[i]);
            }
            vetor1 = 0; 
        }
    }

    for (int i = 0; i < vetor1; i++) {
        printf("impar[%d] = %d\n", i, c[i]);
    }
    for (int i = 0; i < vetor; i++) {
        printf("par[%d] = %d\n", i, z[i]);
    }

    return 0;
}
