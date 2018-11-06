#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int inputNumber = 0;
    int biggestNumber = 0;
    std::cout << "Please enter a number: ";
    std::cin >> inputNumber;

    int array[inputNumber];
    int arraySize = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Please enter a number: ";
        std::cin >> array[i];
    }

    for (int j = 0; j < arraySize; ++j) {
        if(array[j] > biggestNumber)
            biggestNumber = array[j];
    }
    std::cout << "The biggest number is: " << biggestNumber << "\tThe memory address of it is: " << &biggestNumber << std::endl;
    return 0;
}