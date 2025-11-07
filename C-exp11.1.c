

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
    unsigned int a = 12;   // 00000000000000000000000000001100
    unsigned int b = 25;   // 00000000000000000000000000011001

    printf("a = %u in binary: ", a);
    printBinary(a);

    printf("b = %u in binary: ", b);
    printBinary(b);

    // Bitwise AND
    unsigned int andResult = a & b;
    printf("\nAND (a & b) = %u\nBinary: ", andResult);
    printBinary(andResult);

    // Bitwise OR
    unsigned int orResult = a | b;
    printf("\nOR (a | b) = %u\nBinary: ", orResult);
    printBinary(orResult);

    // Bitwise NOT
    unsigned int notResult = ~a;
    printf("\nNOT (~a) = %u\nBinary: ", notResult);
    printBinary(notResult);

    return 0;
}
