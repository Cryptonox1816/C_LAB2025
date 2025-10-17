#include <stdio.h>

int main() {
    // Declare variables
    int i = 10;
    float f = 3.14;
    char c = 'A';

    // Declare pointers and initialize with addresses
    int *ip = &i;
    float *fp = &f;
    char *cp = &c;

    // Print pointer addresses and values they point to
    printf("Integer pointer address: %p, value: %d\n", ip, *ip);
    printf("Float pointer address  : %p, value: %.2f\n", fp, *fp);
    printf("Char pointer address   : %p, value: %c\n", cp, *cp);

    return 0;
}
