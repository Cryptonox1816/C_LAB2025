#include <stdio.h>

// Function to print binary representation of an integer
void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        unsigned int mask = 1 << i;
        printf("%d", (n & mask) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    unsigned int a = 8;   // Binary: 00000000000000000000000000001000

    printf("Original value of a = %u\nBinary: ", a);
    printBinary(a);

    // Left shift by 2 (multiply by 4)
    unsigned int leftShift = a << 2;
    printf("\nLeft Shift (a << 2) = %u\nBinary: ", leftShift);
    printBinary(leftShift);

    // Right shift by 2 (divide by 4)
    unsigned int rightShift = a >> 2;
    printf("\nRight Shift (a >> 2) = %u\nBinary: ", rightShift);
    printBinary(rightShift);

    return 0;
}
