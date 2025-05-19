#include <stdio.h>

int main() {
    int m, num, res, teste = 1;
    char op;
    
    while(1) {
        scanf("%d", &m);
        if(m == 0) break;
        
        scanf("%d", &res);
        
        for(int i = 1; i < m; i++) {
            scanf(" %c%d", &op, &num);
            if(op == '+') {
                res += num;
            } else {
                res -= num;
            }
        }
        
        printf("Teste %d\n%d\n\n", teste++, res);
    }
    
    return 0;
}