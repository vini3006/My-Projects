#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("\nHello! Welcome to the hypotenuse's calculator!\n");

    // Loop para a
    do {
        printf("\nEnter cathetus \"a\", in meters: ");
        if (scanf(" %lf", &a) != 1 || a < 0) {
            printf("Error: Invalid cathetus value. Please enter a valid non-negative numeric value!\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
        else {
            break;  // Sai do loop se a entrada for válida
        }
    } while (1);  // Loop infinito, será quebrado quando a entrada for válida

    // Loop para b
    do {
        printf("\nEnter cathetus \"b\", in meters: ");
        if (scanf(" %lf", &b) != 1 || b < 0) {
            printf("Error: Invalid cathetus value. Please enter a valid non-negative numeric value!\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
        else {
            break;  // Sai do loop se a entrada for válida
        }
    } while (1);  // Loop infinito, será quebrado quando a entrada for válida

    c = sqrt(a * a + b * b);

    printf("\nHypotenuse is %lf meters\n", c);

    return 0;
}
