#include <stdio.h>
int main(){
    int x, i = 1;
    int soma = 0;
    scanf("%d", &x);
    for(i; i <= x; i+=2){
        soma+=i;
        printf("%d ", i);
    }
    printf("\n%d", soma);
}