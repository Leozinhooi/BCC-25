#include <stdio.h>
int main(){
   int x, y, media = 0;
   int num = 0;
   int maior = 0;
   int menor = 99999;

   while(scanf("%d %d", &x, &y)&& y != 0){
    media += x;
    media += y;
    num++;
    if(x > maior){
        maior = x;
    }
    if(y > maior){
        maior = y;
    }
    if(x < menor){
        menor = x;
    }
    if(y < menor){
        menor = y;
    }

   } 
   printf("%d\n", media/num);
   printf("%d\n", maior/menor);

}