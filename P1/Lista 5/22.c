#include <stdio.h>
int main(){
    int i = 1;
    int soma = 0;
    int quant = 0;
    for(i; i <= 700; i+=2){
        if(i%3 == 0){
            soma+=i;
            quant++;
        }
        


    }
    printf("\n%d %d", soma, quant);
}