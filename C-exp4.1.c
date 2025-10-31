#include <stdio.h>

// Global variable declaration
int globalVar = 100;

void functionOne() {
    printf("Inside functionOne: globalVar = %d\n", globalVar);
    globalVar += 10;  // Modify global variable
}

void functionTwo() {
    printf("Inside functionTwo: globalVar = %d\n", globalVar);
    globalVar *= 2;   // Modify global variable
}

int main() {
    printf("In main before functions: globalVar = %d\n", globalVar);

    functionOne();  // Access and modify globalVar
    functionTwo();  // Access and modify globalVar again

    printf("In main after functions: globalVar = %d\n", globalVar);

    return 0;
}
