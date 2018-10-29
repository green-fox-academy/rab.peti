#include <iostream>


void printParams(std::string first)
{
    std::cout << first << std::endl;
}

void printParams(std::string first, std::string second)
{
    std::cout << first << "," << second << std::endl;
}

void printParams(std::string first, std::string second, std::string third)
{
    std::cout << first << "," << second << "," << third <<  std::endl;
}

int main() {
    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...

    printParams("first");
    printParams("first","second");
    printParams("first","second","third");

    return 0;
}