#include <iostream>

void swap(int a, int b) {
    int c = 0;
    int *ptrOne = &a;
    int *ptrTwo = &b;
    int *ptrThree = &c;
    c = *ptrOne;
    a = *ptrTwo;
    b = *ptrThree;
    std::cout << "a: " << a << " |  b: " << b << std::endl;
}

int main() {
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;
    swap(a, b);

    return 0;
}