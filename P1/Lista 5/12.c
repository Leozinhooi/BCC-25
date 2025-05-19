#include <stdio.h>

int main() {
    int altura, i, j, espacos, asteriscos;

    printf("Digite a altura do triângulo isósceles: ");
    scanf("%d", &altura);

    for(i = 1; i <= altura; i++) {
        espacos = altura - i;
        asteriscos = 2 * i - 1;
        
        for(j = 1; j <= espacos; j++) {
            printf(" ");
        }

        for(j = 1; j <= asteriscos; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
