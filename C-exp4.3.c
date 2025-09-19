/*Declare variables within different code blocks (enclosed by curly braces) and test 
their accessibility within and outside those blocks. */
#include <stdio.h>

int main() {
    int a = 10; // Accessible throughout main()

    {
        int b = 20; // Only accessible inside this block
        printf("Inside first block: a = %d, b = %d\n", a, b);
    }

    
    {
        int c = 30; // Only accessible inside this second block
        printf("Inside second block: a = %d, c = %d\n", a, c);
    }

    

    return 0;
}
