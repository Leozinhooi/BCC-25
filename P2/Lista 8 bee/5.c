#include <stdio.h>
int main(){
  long long int vetor [61];
  int x;
  

  vetor [0] = 0;
  vetor [1] = 1;



  for(int i = 2; i < 61; i++){
    vetor[i] = vetor[i-1] + vetor[i-2];
  }

  scanf("%d", &x);

  while(x--){
    int pos;
    scanf("%d", &pos);
    printf("Fib(%d) = %lld\n", pos, vetor[pos]);
  }



}