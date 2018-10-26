#include <iostream>

int main() {
    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was
    int number = 0;
    std::string star = "";
    std::cout << "Give me a number: ";
    std::cin >> number;

    for(int i = 0; i < number; i++)
    {
        star += "*";
        std::cout << star << std::endl;
    }

    return 0;
}