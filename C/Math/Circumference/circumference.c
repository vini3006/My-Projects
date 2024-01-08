#include <stdio.h>
#include <ctype.h>
#include <math.h>

char choice;
const double PI = 3.14159265358979323;
double radius, diameter, perimeter, area;

void forRadius() {
    diameter = 2 * radius;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nRadius:     %lf meters", radius);
    printf("\nDiameter:   %lf meters", diameter);
    printf("\nPerimeter:  %lf meters", perimeter);
    printf("\nArea:       %lf square meters\n", area);
}

void toRadius() {       // transforming all other variables values to radius value, in meters
    while (1) {
        switch (toupper(choice)) {
            case 'D':
                printf("\nEnter the diameter value, in meters: ");
                if (scanf(" %lf", &diameter) != 1 || diameter < 0) {
                    printf("Error: Invalid diameter value. Please enter a valid non-negative numeric value!\n");
                    while (getchar() != '\n');
                    continue;
                }
                radius = diameter / 2;
                break;
            case 'P':  
                printf("\nEnter the perimeter value, in meters: ");
                if (scanf(" %lf", &perimeter) != 1 || perimeter < 0) {
                    printf("Error: Invalid perimeter value. Please enter a valid non-negative numeric value!\n");
                    while (getchar() != '\n');
                    continue;
                }
                radius = perimeter / (2 * PI);                
                break;
            case 'A':    
                printf("\nEnter the area value, in square meters: ");
                if (scanf(" %lf", &area) != 1 || area < 0) {
                    printf("Error: Invalid area value. Please enter a valid non-negative numeric value!\n");
                    while (getchar() != '\n');
                    continue;
                }
                radius = sqrt(area / PI);
                break;
            default:
                printf("Invalid choice. Please enter a valid value!\n");
                while (getchar() != '\n');
                continue;
        }

        break;
    }

    forRadius();
}

int main() {
    printf("\nHello! Welcome to the circle's calculator!\n");
    
    while (1) {
        printf("\nEnter \"R\" for radius, \"D\" for diameter, \"P\" for perimeter or \"A\" for area to choose a value, in meters: ");
        scanf(" %c", &choice);
        while (getchar() != '\n');

        switch (toupper(choice)) {
            case 'R':
                while (1) {    
                    printf("\nEnter the radius value, in meters: ");
                    if (scanf(" %lf", &radius) != 1 || radius < 0) {
                        printf("Error: Invalid radius value. Please enter a valid non-negative numeric value!\n");
                        while (getchar() != '\n');
                        continue;
                    }
                    forRadius();
                    break;
                }
                break;
            case 'D':
            case 'P':
            case 'A':
                toRadius();
                break;
            default:
                printf("Invalid choice. Please enter a valid value!\n");
                while (getchar() != '\n');
                continue;
        }

        break;
    }

    return 0;
}

// adicionar função de desenhar gráfico da circunferência 2D no plano cartesiano (<graphics.h> ou <SDL2/SDL.h>)
// adicionar função de desenhar Esfera 3D e fornecer seus parâmetros