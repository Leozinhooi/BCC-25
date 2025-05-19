#include <stdio.h>

int main() {
    int M, n, inicio, i, j;

    printf("Digite o valor de M: ");
    scanf("%d", &M);

    inicio = 1;

    for(n = 1; n <= M; n++) {
        printf("%d^3 = ", n);
        
        for(j = 0; j < n; j++) {
            printf("%d", inicio + 2*j);
            if(j < n-1) printf("+");
        }
        
        printf(" = %d\n", n*n*n);
        inicio += 2*n;
    }

    return 0;
}