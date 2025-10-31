#include <stdio.h>

// Global variable
int globalVar = 10;

void myFunction() {
    // Local variable
    int localVar = 20;

    printf("Inside function: localVar = %d\n", localVar);
    printf("Inside function: globalVar = %d\n", globalVar);
}

int main() {
    myFunction();

    // Trying to access localVar here will cause an error
    // printf("Outside function: localVar = %d\n", localVar); // ❌ Error

    printf("Outside function: globalVar = %d\n", globalVar); // ✅ Works
    return 0;
}
