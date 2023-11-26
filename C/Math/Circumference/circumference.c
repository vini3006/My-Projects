#include <stdio.h>

int main(){

    const float PI = 3.141592;
    float radius;
    float perimeter;
    float area;

    printf("\nHello! Welcome to the circle's calculator!\n");

    printf("\nEnter the radius of the circle, in meters: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nPerimeter: %f meters", perimeter);
    printf("\nArea: %f square meters", area);


    return 0;
}