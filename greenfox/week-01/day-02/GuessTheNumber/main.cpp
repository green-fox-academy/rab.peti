#include <iostream>

int main() {
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    // You found the number: 8

    int storedNumber = 13;
    int number = 0;
    do
        {
            std::cout << "Guess the number:";
            std::cin >> number;
            if(number < storedNumber)
            {
                std::cout << "The stored number is higher" << std::endl;
            }
            else if(number == storedNumber)
            {
                std::cout << "You found the nuzmber: "  << storedNumber << std::endl;
            }
            else if(number > storedNumber)
            {
                std::cout << "The stored number is lower" << std::endl;
            }
        }while(number != storedNumber);
    return 0;
}