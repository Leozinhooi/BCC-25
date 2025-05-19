#include <stdio.h>

int main() {
    int N, J, Z, dif = 0, teste = 1;
    
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;
        
        printf("Teste %d\n", teste++);
        dif = 0;
        
        for(int i = 0; i < N; i++) {
            scanf("%d %d", &J, &Z);
            dif += (J - Z);
            printf("%d\n", dif);
        }
        
        printf("\n");
    }
    
    return 0;
}