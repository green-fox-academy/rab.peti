#include <iostream>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double a = 5;
    double b = 6;
    double c = 8;

    double Area = 2*(a*b+b*c+a*c);
    double Volume = a*b*c;

    std::cout << "Area of the cuboid:" << Area << "\n" << "Volume of the cuboid:" << Volume << std::endl;

    return 0;
}