#include <iostream>

int main() {
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int* ptra = &a;
    int* ptrb = &b;
    int add = *ptra + *ptrb;
    std::cout << add << std::endl;
    return 0;
}