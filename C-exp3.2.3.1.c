#include <stdio.h>

int main() {
    int i, j, num = 1;   // start counting from 1

    // outer loop for rows
    for (i = 1; i <= 3; i++) {
        // inner loop for numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;   // increase number each time
        }
        printf("\n");  // new line after each row
    }

    return 0;
}