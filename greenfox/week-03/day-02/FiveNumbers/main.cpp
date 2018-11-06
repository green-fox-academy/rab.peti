#include <iostream>

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int array[5];
    int arraySize = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Give me a number:";
        std::cin >> array[i];
    }

    for (int j = 0; j < arraySize; ++j) {
        std::cout << *(&array[j]) << "\t";
    }

    return 0;
}