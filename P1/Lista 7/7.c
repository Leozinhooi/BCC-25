#include <stdio.h>

int main() {
    int N, A, B, teste = 1;
    char jogador1[11], jogador2[11];
    
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;
        
        scanf("%s %s", jogador1, jogador2);
        printf("Teste %d\n", teste++);
        
        for(int i = 0; i < N; i++) {
            scanf("%d %d", &A, &B);
            if((A + B) % 2 == 0) {
                printf("%s\n", jogador1);
            } else {
                printf("%s\n", jogador2);
            }
        }
        
        printf("\n");
    }
    
    return 0;
}