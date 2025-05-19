#include <stdio.h>

int main() {
    int m, n, x, y, mx, my, max;
    
    scanf("%d %d", &m, &n);
    max = -999999;
    
    for(x = 0; x <= m; x++) {
        for(y = 0; y <= n; y++) {
            int val = x*y - x*x + y;
            if(val > max) {
                max = val;
                mx = x;
                my = y;
            }
        }
    }
    
    printf("(%d,%d)\n%d\n", mx, my, max);
    return 0;
}