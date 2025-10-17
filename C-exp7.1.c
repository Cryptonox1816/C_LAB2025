#include <stdio.h>

// Structure to represent a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number
Complex readComplex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to print a complex number
void printComplex(Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

// Function to add two complex numbers
Complex addComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Main function
int main() {
    Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);

    printf("\nFirst complex number: ");
    printComplex(c1);

    printf("Second complex number: ");
    printComplex(c2);

    printf("Sum: ");
    printComplex(sum);

    printf("Difference: ");
    printComplex(diff);

    return 0;
}
