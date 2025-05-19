#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float a, b, c, resultado;

    do {
        printf("\nMENU DE CALCULOS GEOMETRICOS\n");
        printf("1. Diagonal do paralelepipedo\n");
        printf("2. Area do paralelepipedo\n");
        printf("3. Area do triangulo\n");
        printf("4. Area do quadrado\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 0) break;

        switch(opcao) {
            case 1:
                do {
                    printf("\nDigite as 3 dimensoes (A B C): ");
                    scanf("%f %f %f", &a, &b, &c);
                    if(a <= 0 || b <= 0 || c <= 0)
                        printf("Valores invalidos! Todos devem ser positivos.\n");
                } while(a <= 0 || b <= 0 || c <= 0);
                
                resultado = sqrt(a*a + b*b + c*c);
                printf("Diagonal: %.2f\n", resultado);
                break;

            case 2:
                do {
                    printf("\nDigite as 3 dimensoes (A B C): ");
                    scanf("%f %f %f", &a, &b, &c);
                    if(a <= 0 || b <= 0 || c <= 0)
                        printf("Valores invalidos! Todos devem ser positivos.\n");
                } while(a <= 0 || b <= 0 || c <= 0);
                
                resultado = 2*(a*b + a*c + b*c);
                printf("Area do paralelepipedo: %.2f\n", resultado);
                break;

            case 3:
                do {
                    printf("\nDigite os 2 lados (A B): ");
                    scanf("%f %f", &a, &b);
                    if(a <= 0 || b <= 0)
                        printf("Valores invalidos! Ambos devem ser positivos.\n");
                } while(a <= 0 || b <= 0);
                
                resultado = (a * b) / 2;
                printf("Area do triangulo: %.2f\n", resultado);
                break;

            case 4:
                do {
                    printf("\nDigite o lado: ");
                    scanf("%f", &a);
                    if(a <= 0)
                        printf("Valor invalido! Deve ser positivo.\n");
                } while(a <= 0);
                
                resultado = a * a;
                printf("Area do quadrado: %.2f\n", resultado);
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}