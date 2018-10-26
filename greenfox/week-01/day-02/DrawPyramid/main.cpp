#include <iostream>

int main() {
    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int number = 0;
    std::string star = "";
    std::cout << "Give me a number:";
    std::cin >> number;

    for (int i = 0; i < number; ++i)
    {
        star += "*";
        std::cout << star << std::endl;
    }

    std::string a = "eh";
    std::string b = "ah";
    a.insert(0,b);
    std::cout << a << std::endl;
    return 0;
}