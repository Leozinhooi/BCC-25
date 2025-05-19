#include <stdio.h>
int main(){
    int N[1000];
    int x;
    int j = 0;

    scanf("%d", &x);
    
    


    for(int i = 0; i <1000; i++){
        if(j == x)
        j = 0;
        N[i] = j;
        j++;

        printf("N[%d] = %d\n", i, N[i]);


    }
}