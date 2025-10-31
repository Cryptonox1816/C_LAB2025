#include <stdio.h>

int main() {
    int num, i;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing multiplication table
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
