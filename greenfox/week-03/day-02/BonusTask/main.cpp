#include <iostream>

int main() {
    std::string one = "One";
    std::string two = "Two";
    std::string three = "Three";
    std::string four = "Four";
    std::string five = "Five";

    std::string* array[5] = { &one, &two, &three, &four, &five};
    int arraySize = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < arraySize; ++i) {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;

    //std::cout << &one << "\t" << &two << "\t" << &three << "\t" << &four << "\t" << &five << std::endl;
    return 0;
}