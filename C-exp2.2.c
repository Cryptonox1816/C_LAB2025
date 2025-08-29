/*WAP a C program to Convert temperature from Celsius to Fahrenheit using the 
formula: F = (C * 9/5) + 32*/
#include<stdio.h>

int main() {
    float cel;
    printf(" enter temp in celsius : ");
    scanf(" %f", &cel);
    printf("temp in fahrenheit is : %f\n", (cel * 9/5) + 32);



    return 0;
}