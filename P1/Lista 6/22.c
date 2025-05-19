#include <stdio.h> 
int main(){
    int num1, num2;
    int cas1,cas2 = 0,m = 1;

    scanf("%d %d", &num1, &num2);
    printf("%d\nX%d\n", num1, num2);
    for(num2; num2>0; num2/=10){
        
    cas1 = (num2%10)*num1*m;
    printf("%d\n",cas1);
    cas2+= cas1;
    m*=10;

}
printf ("------\n");
printf("%d\n", cas2);
}