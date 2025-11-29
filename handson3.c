#include <stdio.h>

int main() {
    int rows, num = 1, space;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for(int i = 1; i <= rows; i++) {
        space = rows - i;
        for(int j = 1; j <= space; j++) {
            printf("  ");
        }
        
        for(int k = 1; k <= (rows - i + 1); k++) {
            printf("%2d ", num);
            num += 2;
        }
        
        printf("\n");
    }
    
    return 0;
}
