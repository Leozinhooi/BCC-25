#include <stdio.h>

int main() {
    char c;
    
    printf("Digite uma letra minuscula: ");
    c = getchar();
    
    if(c >= 'a' && c <= 'z') {
        printf("Maiuscula: %c\n", c - 32);
    } else {
        printf("Nao e letra minuscula.\n");
    }
    
    return 0;
}