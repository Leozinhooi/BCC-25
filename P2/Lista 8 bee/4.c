#include <stdio.h>
int main(){
    int N[20];
    int i;
    int y = 0;

    for(i = 0; i < 20; i++){
        scanf("%d", &N[i]);

    }
    for(i = 19; i >= 0; i--){
        printf("N[%d] = %d\n", y, N[i]);
        y++;
    }
}