#include <stdio.h>
int main(){
    int maior = 0;
    int menor = 99999;
    int x;
    while(scanf("%d", &x)&& x >= 0){
        if(x > maior){
            maior = x;
        }
        if(x < menor){
            menor = x;
        }
        

    }
    printf("maior eh %d\nmenor eh %d\n", maior, menor);
}