#include <stdio.h>
int main(){
int X[10];
int i = 0, y = 0;
int j;

while(y <= 10){
    scanf("%d", &X[i]);
    if(X[i] == 0 || X[i] < 0){
    j = 1;
    }
    else{
        j = X[i];
    }
    printf("X[%d] = %d\n", y, j);
    y++;


    
}

}