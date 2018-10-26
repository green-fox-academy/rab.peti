#include <iostream>

int main() {
    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
    int number = 0;
    std::cout << "Tpye in a number: ";
    std::cin >> number;
    if(number % 2 == 0)
    {
        std::cout << "Even number" << std::endl;
    }
    else
        {
            std::cout << "Odd number" << std::endl;
        }

    return 0;
}