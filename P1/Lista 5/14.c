#include <stdio.h>
int main(){
    int x;
    int total = 0;
    int Candidato_1 = 0;
    int Candidato_2 = 0;
    int Candidato_3 = 0;
    int Candidato_4 = 0;
    int nulo = 0;
    int branco = 0;

    while(scanf("%d", &x)&& x != 0){
        if(x >= 1 && x <= 4){
            total += x;
            switch(x){
                case 1:
                Candidato_1++;
                break;
                
                case 2:
                Candidato_2++;
                break;

                case 3:
                Candidato_3++;
                break;

                case 4:
                Candidato_4++;
                break;
            }
            
        }
        else if( x == 5){
            nulo++;
            total++;
        }
        else{
            branco++;
            total++;
        }
        printf("O total de votos para o candidato 1 eh %d\n", Candidato_1);
        printf("O total de votos para o candidato 2 eh %d\n", Candidato_2);
        printf("O total de votos para o candidato 3 eh %d\n", Candidato_3);
        printf("O total de votos para o candidato 4 eh %d\n", Candidato_4);

        printf("O total de votos nulos eh %d\n", nulo);
        printf("O porcentual de votos em branco eh %d %d\n", total*(branco/100), total*(nulo/100));
        if(Candidato_2 > Candidato_1+Candidato_3+Candidato_4){
            printf("O candidato 1 obteve mais votos que a soma dos demais\n");
        }
        if(Candidato_1 > Candidato_2+Candidato_3+Candidato_4){
            printf("O candidato 2 obteve mais votos que a soma dos demais\n");         
        }
        if(Candidato_3 > Candidato_2+Candidato_1+Candidato_4){
            printf("O candidato 3 obteve mais votos que a soma dos demais\n");
        }
        if(Candidato_4 > Candidato_2+Candidato_3+Candidato_1){
            printf("O candidato 4 obteve mais votos que a soma dos demais\n");
        }
        else{
            printf("O vencedor nao conseguiu ter mais votos que a soma dos outros candidatos");
        }
    }
}