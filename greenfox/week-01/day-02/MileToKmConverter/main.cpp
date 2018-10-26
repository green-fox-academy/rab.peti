#include <iostream>

int main() {
    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    int distanceInKm = 0;
    std::cout << "Please type in a distance in kilometers:";
    std::cin >> distanceInKm;

    std::cout << "The distance you typed in in Miles: " << distanceInKm*1.6 << std::endl;
    return 0;
}