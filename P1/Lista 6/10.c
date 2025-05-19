#include <stdio.h>
#include <math.h> 

int main() {
    char continuar;
    
    do {
        double x, termo, cos_serie = 1.0;
        int n, i, j;
        long long fatorial;
        
        printf("\nCalculo do cosseno pela serie:\n");
        printf("-----------------------------\n");
        

        printf("Digite x (em radianos): ");
        scanf("%lf", &x);
        

        printf("Digite o numero de termos (incluindo o 1º termo 1): ");
        scanf("%d", &n);
        
        
        cos_serie = 1.0; 
        for(i = 1; i < n; i++) {
           
            int expoente = 2 * i;
            
           
            termo = 1.0;
            for(j = 0; j < expoente; j++) {
                termo *= x;
            }
            
          
            fatorial = 1;
            for(j = 1; j <= expoente; j++) {
                fatorial *= j;
            }
            
          
            if(i % 2 == 1) {
                cos_serie -= termo / (double)fatorial;
            } else {
                cos_serie += termo / (double)fatorial;
            }
        }
        

        printf("\nResultado pela serie: %.15f\n", cos_serie);
        printf("Resultado pela math.h: %.15f\n", cos(x));
        printf("Diferenca: %.15f\n", fabs(cos_serie - cos(x)));
        
        
        printf("\nCalcular novamente? (S/N): ");
        scanf(" %c", &continuar);
        
    } while(continuar == 'S' || continuar == 's');
    
    return 0;
}