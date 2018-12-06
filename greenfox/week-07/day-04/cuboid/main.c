#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

double GetSurface(double a, double b, double c);

double GetVolume(double a, double b, double c);

int main() {
    struct rectangular_cuboid cuboid;
    cuboid.a = 3;
    cuboid.b = 5;
    cuboid.c = 7;
    printf("Surface area is: %.2f\n", GetSurface(cuboid.a,cuboid.b,cuboid.c));
    printf("Volume is: %.2f\n", GetVolume(cuboid.a,cuboid.b,cuboid.c));
    return 0;
}

double GetSurface(double a, double b, double c) {
    return 2 * (a * b + b * c + a * c);
}

double GetVolume(double a, double b, double c) {
    return a * b * c;
}