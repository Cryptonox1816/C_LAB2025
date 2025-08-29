/* 1. WAP to take check if the triangle is valid or not. If the validity is established, do 
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of 
the triangle as input from a user. */

#include<stdio.h>
int main() {
    int a , b, c;
    printf("enter sides of tringle : \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a){
        printf("it is a valid triangle:\n");
    }
    else{
        printf("it is not a valid triangle:\n");
    }
    if(a==b && a==c && b==c){
        printf("it is a equilateral triangle:\n");
    }
    else if(a==b || a==c || b==c){
        printf("it is a isosceles triangle:\n");
    }
    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        printf("it is a right angle triangle:\n");
    }
    else{
        printf("it is a Scalene triangle:\n");
    }







    return 0;
}