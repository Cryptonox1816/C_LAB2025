//
#include<stdio.h>
int main(){
    char a ;
     printf("enter char y if you want to stop the program:\n ");
        scanf(" %c",&a);
    int i, p =0,n=0,z=0;
    while(a!='y'){
        printf("enter number\n");
        scanf("%d",&i);
        if(i>0){
            p++;
        }
        else if(i<0){
            n++;
        }
        else{
            z++;
        }
        printf("enter char y if you want to stop the program:\n ");
        scanf(" %c",&a);

     }

     printf("postive numbers are:\n%d\n",p);
     printf("negative numbers are:\n%d\n",n);
     printf("zero%d", z);
    return 0;
}