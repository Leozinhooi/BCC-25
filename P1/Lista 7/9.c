#include <stdio.h>

int main() {
    int R, A, B, totalA = 0, totalB = 0, teste = 1;
    
    while(1) {
        scanf("%d", &R);
        if(R == 0) break;
        
        totalA = 0;
        totalB = 0;
        
        for(int i = 0; i < R; i++) {
            scanf("%d %d", &A, &B);
            totalA += A;
            totalB += B;
        }
        
        printf("Teste %d\n", teste++);
        if(totalA > totalB) {
            printf("Aldo\n\n");
        } else {
            printf("Beto\n\n");
        }
    }
    
    return 0;
}