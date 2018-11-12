#include <iostream>
#include <exception>

float numberDivider(float number)
{
    float dividerNumber = 10;
    try {
        if (number == 0) {
            throw 0;
        }
        std::cout << number / dividerNumber << std::endl;
    } catch (...) {
        std::cout << "fail" << std::endl;
    }
    return 0;
}

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    numberDivider(0);

    return 0;
}