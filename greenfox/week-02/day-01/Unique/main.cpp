#include <iostream>


void unique(int numbers[], int size)
{
    int substituteNumbers[size];
    int result[size];
    for (int i = 0; i < size; ++i)
    {
        substituteNumbers[i] = numbers[i];
        std::cout << substituteNumbers[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have to pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};

    int size = sizeof(numbers) / sizeof(numbers[0]);


    unique(numbers,size);


    //std::string name = "RabPeter";
    //std::cout << name.length() << std::endl;
    //std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`
    return 0;
}