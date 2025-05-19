#include <stdio.h>
int main(){
    int N, i, x, po = 0;
    float med;
    int resp;
    do{
    scanf("%d", &N);
    while(N > i){
        scanf("%d", &x);
        if(x%2 ==0){
            po+=x;
            i++;
        }
    }
    
    
    med = po/i;
    printf("%f", med);

    do{
        printf("Deseja fazer novamnete? (1 - sim/0 - nao)\n");
        scanf("%d", &resp);
        if(resp != 0 && resp != 1){
            printf("Resposta invalida\n");
        }
    }while(resp != 0 && resp != 1);

}while(resp != 0);

}