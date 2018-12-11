#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coordinates.h"

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

int main()
{
    srand(time(NULL));
    coordinates array[10];
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        array[i].x = rand() % 20;
        array[i].y = rand() % 20;
    }
    return 0;
}