#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    printf("Digite a data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

   
    if(mes < 3) {
        mes += 12;
        ano--;
    }
    
    
    int semana = (dia + 2*mes + 3*(mes+1)/5 + ano + ano/4 - ano/100 + ano/400) % 7;
    
    printf("Dia da semana: ");
    switch(semana) {
        case 0: printf("Domingo\n"); break;
        case 1: printf("Segunda\n"); break;
        case 2: printf("Terca\n"); break;
        case 3: printf("Quarta\n"); break;
        case 4: printf("Quinta\n"); break;
        case 5: printf("Sexta\n"); break;
        case 6: printf("Sabado\n"); break;
    }
    
    return 0;
}