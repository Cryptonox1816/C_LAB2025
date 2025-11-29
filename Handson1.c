#include<stdio.h>
#include<string.h>

struct lib {
    char member[50];
    char libname[50];
    int bookcount;
    char location[50];
};

int main(){
    struct lib myLib;
    printf("Enter member name: ");
    scanf("%s", &myLib.member);
    strcpy(myLib.libname, "Central Library");
    printf("Enter book count: ");
    scanf("%d", &myLib.bookcount);
    printf("Enter lib location: ");
    scanf("%s", &myLib.location);


    if(myLib.bookcount > 1000){
        printf("big library\n");
    } else {
        printf("small library\n");
    }

    return 0;
}