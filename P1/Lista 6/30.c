#include <stdio.h>

int main() {
    int n, i, j, contador = 0, numero = 0;
    
  
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    
    printf("Digite o valor de j: ");
    scanf("%d", &j);
    
    
    if(i == 0 || j == 0) {
        printf("Erro: i e j devem ser diferentes de 0.\n");
        return 1;
    }
    
    printf("Os %d primeiros multiplos de %d ou %d sao:\n", n, i, j);
    

    while(contador < n) {
        if(numero % i == 0 || numero % j == 0) {
            printf("%d", numero);
            contador++;
            
            
            if(contador < n) {
                printf(", ");
            }
        }
        numero++;
    }
    
    printf("\n");
    return 0;
}