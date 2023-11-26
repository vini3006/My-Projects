#include <stdio.h>

int main(){

    float weight;
    float height;
    float IMC;

    printf("\nHello! Welcome to the IMC/BMI calculator!\n");
    printf("Let's calculate your Body Mass Index (IMC/BMI), in kilograms per square meter, by doing: IMC = weight / (height*height)\n");
    printf("\nWARNING: Use \".\" for decimal values!\n");

    printf("\n\nHow much do you weigh, in kilograms? ");
    scanf("%f", &weight);

    printf("How tall are you, in meters? ");
    scanf("%f", &height);

    IMC = weight / (height * height);

    printf("\nYour IMC/BMI is %f kilograms per square meter\n", IMC);

    if(IMC < 18.5){
        printf("\nYou're in an underweight situation!\n");
    }
    else if(IMC < 25.1){
        printf("\nYou're in an optimal weight situation!\n");
    }
    else if(IMC < 30.1){
        printf("\nYou're in an overweight situation!\n");
    } 
    else if(IMC < 40){
        printf("\nYou're in an obesity situation!\n");
    }
    else{
        printf("\nYou're in a severe obesity situation!\n");
    }

    printf("\n\nIMC/BMI < 18.5            ------>     Underweight\n");
    printf("18.5 <= IMC/BMI < 25.1    ------>     Optimal weight\n");
    printf("25.1 <= IMC/BMI < 30.1    ------>     Overweight\n");
    printf("30.1 <= IMC/BMI < 40      ------>     Obesity\n");
    printf("IMC >= 40                 ------>     Severe obesity\n");


    return 0;
}