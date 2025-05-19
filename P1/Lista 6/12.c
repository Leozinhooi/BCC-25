#include <stdio.h>
#include <math.h>
int main(){
    float par = 0; 
    double x, raiz;
    

    
        scanf("%lf", &x);
        raiz = sqrt(x);
for(par; raiz - par > 0; par+=2){

}
printf("%lf\n", raiz);
printf("%f\n", par);

}