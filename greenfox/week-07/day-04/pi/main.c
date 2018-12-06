#include <stdio.h>
#include <stdlib.h>
#include "separate.h"

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

int main()
{
    int radius = 0;
    printf("Give me the radius of the circle: ");
    scanf("%d", &radius);
    printf("The area of the circle is: %f\n", area_of_circle(radius));
    printf("The circumference of the circle is: %f\n", circumference_of_circle(radius));
    return 0;
}