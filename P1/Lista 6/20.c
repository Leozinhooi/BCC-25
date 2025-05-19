#include <stdio.h>
int main(){
    float preco,ingre;
    preco = 10.00;
    ingre = 120;
    float max;
    


    for(preco; preco >= 5.00; preco-=0.50){
        max = (preco*ingre)-200;
        printf("Valor R$: %.2f Numero de ingressos: %.0f Lucro total %.2f\n", preco, ingre, max);
        ingre+=26;
    }
    
}