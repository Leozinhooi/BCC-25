#include <stdio.h>

int main() {
    int a, b, resto;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    
    printf("\nMDC = %d\n", a);
    
    return 0;
}