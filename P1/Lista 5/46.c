#include <stdio.h>

int main() {
    float salario = 1250.0;
    float percentual = 2.5;


    salario += salario * (percentual / 100);


    for (int ano = 2022; ano <= 2025; ano++) {
        percentual *= 2;
        salario += salario * (percentual / 100);
    }

    printf("O salário atual em 2025 é: R$%.2f\n", salario);
    return 0;
}
