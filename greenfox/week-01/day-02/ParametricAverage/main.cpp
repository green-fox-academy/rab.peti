#include <iostream>

int main() {
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    int number = 0;
    int szamlalo = 0;
    int sum = 0;
    float avg = 0;
    do
    {
        std::cout << "Give me a number:";
        std::cin >> number;
        sum += number;
        szamlalo++;
    }while(szamlalo < 10);
    avg = (float)sum / szamlalo;
    std::cout << "Sum: " << sum << " Average: " << avg << std::endl;
    return 0;
}