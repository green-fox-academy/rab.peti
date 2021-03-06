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
    std::string star = "*";
    std::string space = "";
    std::cout << "Give me a number:";
    std::cin >> number;
    int longestLine = 1;
    int spaceLength = 0;
    for (int j = 1; j < number; ++j)
    {
        longestLine += 2;
        space += " ";
    }
    spaceLength = (longestLine - 1) /2;
    for (int i = 0; i < number; ++i)
    {
        std::cout << space << star << std::endl;
        star += "**";
        space.erase(0,1);
        spaceLength = spaceLength-1;
    }

    return 0;
}