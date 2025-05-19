#include <stdio.h>
int main(){
    long int CPF,dp,renda,liq;
    int min = 1.518;
    int desc,ali;


    printf("Escreva seu CPF:\n");
    scanf("%d", &CPF);
    printf("Numeros de dependentes:\n");
    scanf("%d", &dp);
    printf("Renda mensal:\n");
    scanf("%d", &renda);

    desc = dp*(min*0.05);
    liq = renda-desc;

    if(liq < 2*min){
    ali = liq;
    }
     else if(liq >= 2*min && liq < 3*min){
    ali = liq-(liq*0.05);
    }
    else if(liq >= 3*min && liq < 5*min){
    ali = liq-(liq*0.10);
    }
    else if(liq >= 5*min && liq < 7*min){
    ali = liq-(liq*0.15);
    }
    else{
    ali = liq-(liq*0.20);
    }
    printf("O usuario de CPF: %d\n", CPF);
    printf("Com o total de dependentes: %d\n", dp);
    printf("Tem como salario liquido %d\n", ali);




}