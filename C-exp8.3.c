#include <stdio.h>

// Function that modifies values using pointers
void modifyValues(int *x, int *y) {
    *x = *x + 10;  // Add 10 to x
    *y = *y * 2;   // Double y
}

int main() {
    int a = 5, b = 7;

    printf("Before modification:\n");
    printf("a = %d, b = %d\n", a, b);

    // Pass variables by reference
    modifyValues(&a, &b);

    printf("After modification:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
