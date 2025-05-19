#include <stdio.h>
#include <math.h>

int main() {
    int numerador = 1;
    int expoente = 15;
    float soma = 0.0;
    int sinal = 1;

    while (expoente >= 1) {
        int denominador = expoente * expoente;
        soma += sinal * ((float)numerador / denominador);

        numerador *= 2;
        expoente--;
        sinal *= -1;
    }

    printf("O valor de S é: %.4f\n", soma);

    return 0;
}
