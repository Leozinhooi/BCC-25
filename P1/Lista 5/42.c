#include <stdio.h>

int main() {
    float x, S;
    int sinal = -1;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    S = x;

    for (int i = 2; i <= 20; i++) {
        S += sinal * (x / i);
        sinal *= -1;
    }

    printf("O valor de S é: %.4f\n", S);
    return 0;
}
