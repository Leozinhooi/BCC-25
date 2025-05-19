#include <stdio.h>

int main() {
    int X1, Y1, X2, Y2, N, X, Y, cont, teste = 1;
    
    while(1) {
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
        if(X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0) break;
        
        scanf("%d", &N);
        cont = 0;
        
        for(int i = 0; i < N; i++) {
            scanf("%d %d", &X, &Y);
            if(X >= X1 && X <= X2 && Y <= Y1 && Y >= Y2) {
                cont++;
            }
        }
        
        printf("Teste %d\n%d\n\n", teste++, cont);
    }
    
    return 0;
}