#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    printf("Digite a data no formato dd mm aaaa: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    
 
    printf("\n%d de ", dia);
    
   
    switch(mes) {
        case 1: printf("Janeiro"); break;
        case 2: printf("Fevereiro"); break;
        case 3: printf("Março"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Maio"); break;
        case 6: printf("Junho"); break;
        case 7: printf("Julho"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Setembro"); break;
        case 10: printf("Outubro"); break;
        case 11: printf("Novembro"); break;
        case 12: printf("Dezembro"); break;
        default: printf("Mês inválido"); break;
    }
    

    printf(" de %d", ano);
    
  
    if((ano % 400 == 0) || (ano % 100 != 0 && ano % 4 == 0)) {
        printf("\nO ano %d é bissexto.", ano);
    } else {
        printf("\nO ano %d não é bissexto.", ano);
    }
    
    return 0;
}