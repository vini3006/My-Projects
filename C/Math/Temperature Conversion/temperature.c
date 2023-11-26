#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nHello! Welcome to the temperature conversion program!\n");

    printf("\nIs the temperature in Celsius (C), Fahrenheit (F) or Kelvin (K)? ");
    scanf("%c", &unit);

    unit = toupper(unit);       // turn all the input in uppercase letters

    if(unit == 'C'){
        printf("\nEnter the temperature, in Celsius: ");
        scanf("%f", &temp);

        temp = temp + 273.15;

        printf("\nThe temperature in Kelvin is %.2f\n", temp);

        temp = (temp - 273.15) * 1.8 + 32;
        printf("The temperature in Fahrenheit is %.2f\n", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temperature, in Fahrenheit: ");
        scanf("%f", &temp);

        temp = (temp - 32) * 5/9;

        printf("\nThe temperature in Celsius is %.2f\n", temp);

        temp = temp + 273.15;
        printf("The temperature in Kelvin is %.2f\n", temp);
    }
    else if(unit == 'K'){
        printf("\nEnter the temperature, in Kelvin: ");
        scanf("%f", &temp);

        temp = temp - 273.15;

        printf("\nThe temperature in Celsius is %.2f\n", temp);

        temp = (temp * 9/5) + 32;
        printf("The temperature in Fahrenheit is %.2f\n", temp);
    }


    return 0;
}