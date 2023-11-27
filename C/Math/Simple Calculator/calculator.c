#include <stdio.h>

int main(){

    char operator;
    double n1, n2, result;

    printf("\nHello! Welcome to the simple calculator program!\n");
    printf("\nWARNING! Only use rational numbers!\n");

    printf("\nEnter what operator will be used (+) (-) (*) (/): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%f", &n1);

    printf("Enter number 2: ");
    scanf("%f", &n2);

    switch(operator){
        case '+':
            result = n1 + n2;
            printf("\nResult: %f\n", result);
            break;
        case '-':
            result = n1 - n2;
            printf("\nResult: %f\n", result);
            break;
        case '*':
            result = n1 * n2;
            printf("\nResult: %f\n", result);
            break;
        case '/':
            if (n2 == 0){
                printf("\nCannot divide by zero!\n");
            }
            else{
                result = n1 / n2;
                printf("\nResult: %f\n", result);
            }
            break;
        default:
            printf("\nEnter a valid operator!\n");
    }


    return 0;
}