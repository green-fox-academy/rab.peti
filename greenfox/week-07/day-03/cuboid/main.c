#include <stdio.h>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    float sideX = 0;
    float sideY = 0;
    float sideZ = 0;

    printf("Give me the size of sideX:\n");
    scanf("%f", &sideX);
    printf("Give me the size of sideY:\n");
    scanf("%f", &sideY);
    printf("Give me the size of sideZ:\n");
    scanf("%f", &sideZ);

    int surfaceArea = 2 * (sideX * sideY + sideY * sideZ + sideX * sideZ);
    int volume = sideX * sideY * sideZ;
    printf("The surface area is: %d \nThe volume is: %d \n", surfaceArea, volume);
    return 0;
}