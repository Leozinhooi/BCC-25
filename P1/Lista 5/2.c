#include <stdio.h>

#define TIMES 5
#define JOGADORES 11

int main() {
    int i, j;
    int idade;
    float peso, altura;
    

    int menores18 = 0;
    int totalJogadores = TIMES * JOGADORES;
    float somaAlturas = 0;
    int acima80kg = 0;
    
    float somaIdadesTime1 = 0, somaIdadesTime2 = 0, somaIdadesTime3 = 0;
    float somaIdadesTime4 = 0, somaIdadesTime5 = 0;
    
    printf("ESTATISTICAS DO CAMPEONATO DE FUTEBOL\n\n");
    
    for (i = 1; i <= TIMES; i++) {
        printf("\nTIME %d:\n", i);
        
        for (j = 1; j <= JOGADORES; j++) {
            printf("\nJogador %d:\n", j);
            
            
            printf("Idade: ");
            scanf("%d", &idade);
            printf("Peso (kg): ");
            scanf("%f", &peso);
            printf("Altura (m): ");
            scanf("%f", &altura);
            
           
            if (idade < 18) menores18++;
            if (peso > 80) acima80kg++;
            somaAlturas += altura;
            
            
            switch(i) {
                case 1: somaIdadesTime1 += idade; break;
                case 2: somaIdadesTime2 += idade; break;
                case 3: somaIdadesTime3 += idade; break;
                case 4: somaIdadesTime4 += idade; break;
                case 5: somaIdadesTime5 += idade; break;
            }
        }
    }
    
  
    printf("\nJogadores com idade inferior a 18 anos: %d\n", menores18);
    
   
    printf("\nMedia de idades por time:\n");
    printf("Time 1: %.2f anos\n", somaIdadesTime1/JOGADORES);
    printf("Time 2: %.2f anos\n", somaIdadesTime2/JOGADORES);
    printf("Time 3: %.2f anos\n", somaIdadesTime3/JOGADORES);
    printf("Time 4: %.2f anos\n", somaIdadesTime4/JOGADORES);
    printf("Time 5: %.2f anos\n", somaIdadesTime5/JOGADORES);
    
    
    printf("\nMedia de altura de todos os jogadores: %.2f metros\n", somaAlturas/totalJogadores);
    
    
    float percentual80kg = ((float)acima80kg / totalJogadores) * 100;
    printf("\nPercentual de jogadores com mais de 80kg: %.2f%%\n", percentual80kg);
    
    return 0;
}