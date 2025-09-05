#include <stdio.h>
int main(){
    int year, days , leap;
    printf("enter year");
    scanf("%d",&year);
    leap = (year-1)/4-(year-1)/100+(year-1)/400; 
    days = 365*year + leap;
    if(days%7==0){
        printf("sunday");
    }
    else if(days%7==1){
        printf("monday");
    }
    else if(days%7==2){
        printf("tuesday");
    }
    else if(days%7==3){
        printf("wednesday");
    }
    else if(days%7==4){
        printf("thursday");
    }
    else if(days%7==5){
        printf("friday");
    }
    else if(days%7==6){
        printf("saturday");
    }
    

    return 0;
}