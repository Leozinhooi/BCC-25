#include <stdio.h>

int main() {
    double soma = 0;
    double fatorial = 1;
    
    for(int n = 1; n <= 20; n++) {
        fatorial *= n;
        soma += n / fatorial;
    }
    
    printf("Soma da serie: %.3lf\n", soma);
    return 0;
}