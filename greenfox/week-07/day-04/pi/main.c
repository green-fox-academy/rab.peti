#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

float area_of_circle(int radius);
int main()
{
    int radius = 0;
    printf("Give me the radius of the circle: ");
    scanf("%d", &radius);
    printf("The area of the circle is: %f", area_of_circle(radius));
    return 0;
}

float area_of_circle(int radius){
    return PI * radius * radius;
}