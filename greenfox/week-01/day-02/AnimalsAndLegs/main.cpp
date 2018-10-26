#include <iostream>

int main() {
    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chickens = 0;
    std::cout << "Please tell me how many chickens the farmer has:";
    std::cin >> chickens;

    int pigs = 0;
    std::cout << "Please tell me how many pigs the farmer has:";
    std::cin >> pigs;

    std::cout << "There are " << (chickens*2) + (pigs*4) << " legs on the farm" << std::endl;

    return 0;
}