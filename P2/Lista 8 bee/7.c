#include <stdio.h>
int main(){
    double N[100];
    double x;
    int i;
    
    scanf("%lf", &x);
    N[0] = x;
    

    for(i = 0; i < 100; i++){
        if(i != 0)
        N[i] = N[i - 1]/ 2.0;
        
        

        printf("N[%d] = %.4lf\n", i, N[i]);
    }
}