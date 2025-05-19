#include <stdio.h>
#include <math.h>

int main() {
    float x, S = 0.0;
    int sinal = 1;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    for (int i = 0; i < 25; i++) {
        int expoente = 25 - i;
        int denominador = i + 1;
        S += sinal * (pow(x, expoente) / denominador);
        sinal *= -1;
    }

    printf("O valor de S é: %.4f\n", S);
    return 0;
}
