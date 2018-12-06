#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/


int main()
{
    point_t p1 = create_point(1, 1);
    printf("x1: %.2f\ty1: %.2f\n", p1.x, p1.y);
    point_t p2 = create_point(1, 5.5);
    printf("x2: %.2f\ty2: %.2f\n", p2.x, p2.y);
    float dist = distance(p1, p2);
    printf("Distance between the 2 points: %f\n", dist);
    return 0;
}