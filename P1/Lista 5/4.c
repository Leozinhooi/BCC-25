#include <stdio.h>
int main(){
    int x,y,med1 = 0;
    int cont;
    scanf("%d %d", &x, &y);
    if(x>y){
        cont = x-y;
        for(y; y<=x ; y++){
        med1 += y;
        

        }
        
        printf("A media dos numeros eh %d\n", med1/cont);
    }
    else if(x<y){
        cont = y-x;
        for(x; x<=y; x++){
            med1 += x;
        }
        
        printf("A media dos numeros eh %d\n", med1/cont);
    }
    else{
        printf("Os numeros sao iguais.\n");
    }
    return 0;
}