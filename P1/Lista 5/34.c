#include <stdio.h>

int main() {
    int numerador = 480;
    int denominador = 10;
    int termos = 15;
    float soma = 0.0;
    int sinal = 1; 

    for (int i = 0; i < termos; i++) {
        soma += sinal * ((float)numerador / denominador);

        
        numerador -= 5;
        denominador += 1;
        sinal *= -1;
    }

    printf("A soma dos 15 primeiros termos da serie e: %.2f\n", soma);

    return 0;
}
