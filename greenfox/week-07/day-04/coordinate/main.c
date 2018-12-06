#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

int main()
{
    srand(time(NULL));
    int array[10];
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        array[i] = rand() % 20;
    }
    return 0;
}