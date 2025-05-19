#include <stdio.h>
int main(){
    int x=1,y=2,z=3;
    int a;
    scanf("%d", &a);
    int soma;
    for(int i = 0; soma < a; i++){
    soma = x*y*z;
    x++;
    y++;
    z++;


}
if(soma == a){

x--;
y--;
z--;
printf("Triangulo formado por: %d*%d*%d\n", x, y, z);
printf("Que tem como resultado: %d", soma);
}
else{
    printf("Nao eh triangular\n");
}
}