#include <stdio.h>

int main() {
    // Arrays for demonstration
    int intArr[] = {10, 20, 30};
    float floatArr[] = {1.1, 2.2, 3.3};
    char charArr[] = {'A', 'B', 'C'};

    // Pointers to first elements
    int *ip = intArr;
    float *fp = floatArr;
    char *cp = charArr;

    // Integer pointer arithmetic
    printf("Integer Pointer:\n");
    printf("Address: %p, Value: %d\n", ip, *ip);
    ip++;  // Move to next int
    printf("After increment: %p, Value: %d\n", ip, *ip);
    ip--;  // Move back
    printf("After decrement: %p, Value: %d\n", ip, *ip);

    // Float pointer arithmetic
    printf("\nFloat Pointer:\n");
    printf("Address: %p, Value: %.1f\n", fp, *fp);
    fp++;
    printf("After increment: %p, Value: %.1f\n", fp, *fp);
    fp--;
    printf("After decrement: %p, Value: %.1f\n", fp, *fp);

    // Char pointer arithmetic
    printf("\nChar Pointer:\n");
    printf("Address: %p, Value: %c\n", cp, *cp);
    cp++;
    printf("After increment: %p, Value: %c\n", cp, *cp);
    cp--;
    printf("After decrement: %p, Value: %c\n", cp, *cp);

    return 0;
}
