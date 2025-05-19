#include <stdio.h>
int main(){
    int fahr;
    float graus;

    for(fahr = 50; fahr <= 150; fahr += 5){
        graus = 5.0/9.0*(fahr-32);

        printf("%d %.2f\n", fahr, graus);
    }
}