#include <stdio.h>

int main() {
    int N, ingresso, posicao, ganhador, teste = 1;
    
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;
        
        for(int i = 1; i <= N; i++) {
            scanf("%d", &ingresso);
            if(ingresso == i) {
                ganhador = ingresso;
            }
        }
        
        printf("Teste %d\n%d\n\n", teste++, ganhador);
    }
    
    return 0;
}