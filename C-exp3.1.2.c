/*WAP to compute the BMI Index of the person and print the BMI values as per the 
following ranges. You can use the following formula to compute BMI= 
weight(kgs)/Height(Mts)*Height(Mts).*/
#include<stdio.h>
int main() {

    float weight, height, bmi;
    printf(" enter weight, height and bmi respectively:\n");
    scanf("%f %f %f", &weight, &height, &bmi);
    bmi = weight / (height * height);
    if (bmi < 15){
        printf("starvation");

    }
    else if(15.1<bmi<17.5){
        printf("Anorexic ");

    }
    else if(17.6<bmi<18.5){
        printf("underweight ");

    }
    else if(18.6<bmi<24.9){
        printf("ideal ");

    }
    else if(25<bmi<25.9){
        printf("overweight ");

    }
    else if(30<bmi<39.9){
        printf("obese ");

    }
    else {
        printf("morbidly obese");
    }


        

    




    return 0;

}