#include <stdio.h>

int main() {
    int y;
    int i;
    int minimo = 99999;
    int posicao;

    scanf("%d", &y);

    int X[y]; 

    for (i = 0; i < y; i++) {
        scanf("%d", &X[i]);
    }

    for (i = 0; i < y; i++) {
        if (X[i] < minimo) {
            minimo = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", minimo, posicao);

    return 0;
}
