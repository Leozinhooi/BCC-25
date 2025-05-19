#include <stdio.h>
int main(){
    int x;
    int quad, i = 3;
    int soma;
    scanf("%d", &x);
    quad = x*x;
    printf("1");
    for(soma = 1; soma <quad; i+=2){
        printf("+%d",i);
        soma+=i;

    }
    printf("\n%d",soma);


}