#include <iostream>

int main() {
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the integer part of 22 divided by 13

    // Print the reminder of 22 divided by 13

    int elsoSzam = 22;
    int masodikSzam = 13;

    std::cout << elsoSzam+masodikSzam << std::endl;
    std::cout << elsoSzam-masodikSzam << std::endl;
    std::cout << elsoSzam*masodikSzam << std::endl;
    std::cout << (float)elsoSzam/masodikSzam << std::endl;
    std::cout << elsoSzam/masodikSzam << std::endl;
    std::cout << masodikSzam%elsoSzam << std::endl;

    return 0;
}