#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;
    int isValidInput = 1;

    printf("\nHello! Welcome to the hypotenuse's calculator!\n");

    do {
        printf("\nEnter cathetus \"a\", in meters: ");
        if (scanf(" %lf", &a) != 1 || a < 0) {
            printf("Error: Invalid cathetus value. Please enter a valid non-negative numeric value!\n");
            isValidInput = 0;
            while (getchar() != '\n');
        }
    }
    while (!isValidInput);

    do {
        printf("\nEnter cathetus \"b\", in meters: ");
        if (scanf(" %lf", &b) != 1 || b < 0) {
            printf("Error: Invalid cathetus value. Please enter a valid non-negative numeric value!\n");
            isValidInput = 0;
            while (getchar() != '\n');
        }
    }
    while (!isValidInput);

    c = sqrt(a*a + b*b);

    printf("\nHypotenuse is %lf meters\n", c);

    return 0;
}