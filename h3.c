#include <stdio.h>

int main() {
    int rows, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    //this is to calculate total width(using odd alignment)

    
    for (int i = 1; i <= rows; i++) {
        //sir this isused to centre the pyramid.
        
        for (int s = 1; s < i; s++) {
            printf("   "); 
        }

        // Print odd numbers, count decreases from rows to 1
        for (int j = rows - i + 1; j >= 1; j--) {
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
    }

    return 0;
}
