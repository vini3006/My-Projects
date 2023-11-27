#include <stdio.h>
#include <math.h>

int main(){

    float a;
    float b;
    float c;

    printf("\nHello! Welcome to the hypotenuse's calculator!\n");

    printf("\nEnter cathetus \"a\", in meters: ");
    scanf("%f", &a);

    printf("Enter cathetus \"b\", in meters: ");
    scanf("%f", &b);

    c = sqrt(a*a + b*b);

    printf("\nHypotenuse is %f meters\n", c);


    return 0;
}