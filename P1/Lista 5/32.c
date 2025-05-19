#include <stdio.h>
int main(){
    int x = 997, y = 2;
    int i = 1;
    int soma = 1000;
    for(i; i<=20; i++){
        printf("%d/%d ", x, y);
        soma -= x/y;
        x -= 3;
        y ++;
    }
    printf("%d", soma);
}