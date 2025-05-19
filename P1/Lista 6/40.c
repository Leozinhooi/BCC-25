#include <stdio.h>

int main() {
    char c1, c2;
    
    printf("Digite 2 caracteres em ordem alfabética (ex: a g): ");
    scanf(" %c %c", &c1, &c2);
    
    printf("O número de caracteres entre eles é: %d\n", (c2 - c1) - 1);
    
    return 0;
}