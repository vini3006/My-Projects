#include <stdio.h>
#include <math.h>

int s0, seg, min, h;

int main() {
    printf("\nHello! Welcome to the Time Conversion program!\n");

    while (1) {
        printf("\nEnter the time, in seconds: ");
        if (scanf(" %d", &s0) != 1 || s0 < 1 || floor(s0) != s0) {
            printf("Invalid input! Please enter a valid natural number greater than one!\n");
            while (getchar() != '\n');
            continue;

        }
        
        break;
    }

    h = s0 / 3600;
    min = (s0 % 3600) / 60;
    seg = s0 % 60;

    printf("\n%02d:%02d:%02d", h, min, seg);

    return 0;
}