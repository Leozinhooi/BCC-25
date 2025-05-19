#include <stdio.h>

int main() {
    char opcao;
    
    do {
        int n1, n2, i, j, primo;
        
      
        printf("\nDigite N1 (inicio): ");
        scanf("%d", &n1);
        printf("Digite N2 (fim): ");
        scanf("%d", &n2);
        
     
        if(n1 > n2) {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        
        printf("\nPrimos entre %d e %d:\n", n1, n2);
        
       
        for(i = n1; i <= n2; i++) {
            if(i < 2) continue; 
            
            primo = 1; 
            
            
            for(j = 2; j <= i/2; j++) {
                if(i % j == 0) {
                    primo = 0;
                    break;
                }
            }
            
            if(primo) {
                printf("%d ", i);
            }
        }
        
       
        printf("\n\nContinuar? (S/N): ");
        scanf(" %c", &opcao);
        
    } while(opcao == 'S' || opcao == 's');
    
    return 0;
}