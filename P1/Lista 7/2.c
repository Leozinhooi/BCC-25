#include <stdio.h>

int main() {
    int N, X, Y, melhor_A = 1, melhor_B = 1, max_saldo = -1000, saldo = 0, teste = 1;
    
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;
        
        max_saldo = -1000;
        saldo = 0;
        int A = 1, B = 1;
        
        for(int i = 1; i <= N; i++) {
            scanf("%d %d", &X, &Y);
            saldo += (X - Y);
            
            if(saldo > max_saldo) {
                max_saldo = saldo;
                melhor_A = A;
                melhor_B = i;
            } else if(saldo == max_saldo && (i - A) > (melhor_B - melhor_A)) {
                melhor_A = A;
                melhor_B = i;
            }
            
            if(saldo < 0) {
                saldo = 0;
                A = i + 1;
            }
        }
        
        printf("Teste %d\n", teste++);
        if(max_saldo <= 0) {
            printf("nenhum\n\n");
        } else {
            printf("%d %d\n\n", melhor_A, melhor_B);
        }
    }
    
    return 0;
}