#include <stdio.h>
#include <math.h>

float s0;
int seg, min, h;

int main() {
    printf("\nHello! Welcome to the Time Conversion program!\n");

    while (1) {                                                                                         // while (1) {                                                                  
        printf("\nEnter the time, in seconds: ");                                                       //    printf("\nEnter the time, in seconds: ");
        if (scanf(" %f", &s0) == 1 && s0 >= 1 && fmod(s0, 1) == 0) {                                    //    if (scanf(" %f", &s0) != 1 || s0 < 1 || fmod(s0, 1) != 0) {
            break;                                                                                      //        printf("Invalid input! Please enter a valid natural number greater than or equal to one!\n");
        }                                                                                               //        while (getchar() != '\n');
        //                                                                                              //        continue;
        printf("Invalid input! Please enter a valid natural number greater than or equal to one!\n");   //    }
        while (getchar() != '\n');                                                                      //
    }                                                                                                   //    break;
    //                                                                                                  // }    
    int s1 = s0;

    h = s1 / 3600;
    min = s1 % 3600 / 60;
    seg = s1 % 60;

    printf("\n%02d:%02d:%02d", h, min, seg);

    return 0;
}