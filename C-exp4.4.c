#include <stdio.h>

int counterFunction() {
    static int count = 0; // Initialized only once
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counterFunction(); // Output: Function called 1 times
    counterFunction(); // Output: Function called 2 times
    counterFunction(); // Output: Function called 3 times
    return 0;
}
