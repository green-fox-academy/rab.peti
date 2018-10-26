#include <iostream>

int main() {
    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%%
    // %    %
    // %    %
    // %    %
    // %    %
    // %%%%%%
    //
    // The square should have as many lines as the number was

    int number = 0;
    std::string symbol = "%%";
    std::string space = "";
    std::cout << "Give me a number:";
    std::cin >> number;

    if(number <= 1)
    {
        std::cout << "Give me a bigger number than 1!" << std::endl;
    }
    else {
        for (int k = 0; k < number - 2; ++k) {
            symbol += "%";
            space += " ";
        }
        std::cout << symbol << std::endl;

        for (int j = 0; j < number - 2; ++j) {
            std::cout << "%" << space << "%" << std::endl;
        }
        std::cout << symbol << std::endl;
    }
    return 0;
}