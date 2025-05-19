#include <stdio.h>
int main(){
    int n,j,i;

    scanf("%d", &n);
    for(i = n; i >= 1; i--){
        for(j = n - i; j >=1; j--)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("%%");
            for(j = 2; j <= i; j++)
            printf("%%");
    printf("\n");
    }
}