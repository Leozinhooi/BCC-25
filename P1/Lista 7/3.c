#include <stdio.h>

int main() {
    int V, teste = 1;
    
    while(1) {
        scanf("%d", &V);
        if(V == 0) break;
        
        int I = V / 50;
        V %= 50;
        
        int J = V / 10;
        V %= 10;
        
        int K = V / 5;
        V %= 5;
        
        int L = V;
        
        printf("Teste %d\n%d %d %d %d\n\n", teste++, I, J, K, L);
    }
    
    return 0;
}