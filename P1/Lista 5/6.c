#include <stdio.h>
int main(){
    int x,y,soma;
    
    while(scanf("%d %d", &x, &y)&& x < y || x != y){
        soma = 0;
        for(x; x<=y; x++){
        soma += x;

        }
        printf("a soma dos numeros eh %d\n", soma);
    }
}