#include<stdio.h>

int main(){
    char name[50] ; int age;
    printf("ENTER YOUR NAME :\n");
    scanf("%s" , &name);
    printf("YOUR NAME IS :%s\n" , name);
    printf("ENTER YOUR AGE :\n");
    scanf("%d" , &age);
    printf("YOUR AGE IS :%d\n" , age);
    return 0;
}