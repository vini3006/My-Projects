#include <stdio.h>

int main() {
    char operator;
    double n1, n2, result;

    printf("\nHello! Welcome to the simple calculator program!\n");

    printf("\nEnter what operator will be used (+) (-) (*) (/): ");
    scanf(" %c", &operator);        // Added space before %c to consume any blank characters
    printf("\nEnter the first number: ");
    scanf(" %lf", &n1);

    printf("Enter the second number: ");
    scanf(" %lf", &n2);

    switch(operator) {
        case '+':
            result = n1 + n2;
            printf("\nResult: %lf\n", result);
            break;
        case '-':
            result = n1 - n2;
            printf("\nResult: %lf\n", result);
            break;
        case '*':
            result = n1 * n2;
            printf("\nResult: %lf\n", result);
            break;
        case '/':
            if (n2 == 0){
                printf("\nInvalid Division! Cannot divide by zero\n");
            } else {
                result = n1 / n2;
                printf("\nResult: %lf\n", result);
            }
            break;
        default:
            printf("\nEnter a valid operator!\n");
    }

    return 0;
}