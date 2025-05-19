#include <stdio.h>
int main(){
   float altura,n = 0, maior = 0, menor = 99999999,h = 0, m = 0;
   int med = 0;
   char sexo;
   printf("Escreva a sua altura e seu sexo\nExemplo(1.80 M)\n");
   while(n < 5){
    scanf("%f %c", &altura, &sexo);
    if(altura > maior){
        maior = altura;
    }
    if(altura < menor){
        menor = altura;
    }
    if(sexo = 'M'){
        h++;
    }
    if(sexo = 'F'){
        m++;
        med += altura;
    }
 n++;
   } 
   printf("A maior altura eh %.2f\nA menor altura eh %.2f\n", maior, menor);
   printf("A media de altura das mulheres eh %.2f\n", med/m);
   if(h > m){
   printf("A diferença percentual entre os dois generos eh %.3f\n", h-m/(h+m*100));
   }
   else if(m > h){
       printf("A diferença percentual entre os dois generos eh %.3f\n", m-h/(h+m*100));
       }
}