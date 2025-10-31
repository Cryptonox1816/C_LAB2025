#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k, num;

    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            if(j == 0 || j == i)
                printf("1 ");
            else {
                num = 1;
                for(k = 0; k < j; k++) {
                    num = num * (i - k) / (k + 1);
                }
                printf("%d ", num);
            }
        }
        printf("\n");
    }
    return 0;
}