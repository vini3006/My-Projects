#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double n1, n2, result;

    printf("\nHello! Welcome to the simple calculator program!\n");

    printf("\nEnter what operator will be used (+) (-) (*) (/): ");
    scanf(" %c", &operator);

    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("\nInvalid operator! Please enter a valid operator\n");
        return 1;   // Terminates the program with an error code
    }

    printf("\nEnter number 1: ");
    if (scanf("%lf", &n1) != 1 || isnan(n1) || isinf(n1)) {                         // functions "isnan" and "isinf" checks if the 
        printf("\nInvalid input for number 1! Please enter a valid numbern");       // number is Nan (Not a Number), or if the number
        return 1;                                                                   // is infinity, respectively
    }

    printf("Enter number 2: ");
    if (scanf("%lf", &n2) != 1 || isnan(n2) || isinf(n2)) {                         // scanf function returns the number of variables 
        printf("\nInvalid input for number 2! Please enter a valid number\n");      // that were duly completed, so if != 1, it would 
        return 1;                                                                   // indicate that the input was not successful or 
    }                                                                               // that variable "n2" could not be correctly 
                                                                                    // populated with a floating point number 
    switch (operator) {
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
            if (n2 == 0 || isinf(n1 / n2) || isnan(n1 / n2)) {
                printf("\nInvalid division! Cannot divide by zero or result is undefined\n");
            } else {
                result = n1 / n2;
                printf("\nResult: %lf\n", result);
            }
            break;
        default:
            printf("\nError! Invalid operator\n");
    }


    return 0;
}
