#include <stdio.h>

int main() {
    int idade1, idade2;
    char op;

    do {
        printf("Digite duas idades (em anos): ");
        scanf("%d %d", &idade1, &idade2);

        printf("\nPessoa 1 - %d anos:\n", idade1);
        printf("Meses: %d\n", idade1 * 12);
        printf("Dias: %d\n", idade1 * 365);
        printf("Horas: %d\n", idade1 * 365 * 24);
        printf("Minutos: %d\n", idade1 * 365 * 24 * 60);

        printf("\nPessoa 2 - %d anos:\n", idade2);
        printf("Meses: %d\n", idade2 * 12);
        printf("Dias: %d\n", idade2 * 365);
        printf("Horas: %d\n", idade2 * 365 * 24);
        printf("Minutos: %d\n", idade2 * 365 * 24 * 60);

        int dif = idade1 > idade2 ? idade1 - idade2 : idade2 - idade1;
        printf("\nDiferenca:\n");
        printf("Anos: %d\n", dif);
        printf("Meses: %d\n", dif * 12);
        printf("Dias: %d\n", dif * 365);
        printf("Horas: %d\n", dif * 365 * 24);
        printf("Minutos: %d\n", dif * 365 * 24 * 60);

        printf("\nCalcular novamente? (S/N): ");
        scanf(" %c", &op);

    } while(op == 'S' || op == 's');

    return 0;
}