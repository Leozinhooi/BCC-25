#include<stdio.h>
int main(){
    float x= 1;
    int soma = 0;
    int i = 1;
    float y = 1;

    for(i; i <= 50; i++){
        soma+= x/y;
        x += 2;
        y++;
    }
    printf("S = %d\n", soma);

}