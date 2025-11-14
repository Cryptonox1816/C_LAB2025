#include<stdio.h>
#define PI 3.14
#define AREA(r) (PI*r*r)
int main(){
    int r;
    printf("enter radius of the circle : ");
    scanf("%d" , &r);
    printf("THE AREA IS : %f" , AREA(r));
    return 0;
}