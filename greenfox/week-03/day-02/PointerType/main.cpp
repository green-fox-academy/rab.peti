#include <iostream>

int main() {
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";
    int* ptra = &a;
    double* ptrb = &b;
    std::string* ptrname = &name;

    std::cout << ptra << " " << ptrb << " " << ptrname << std::endl;
    return 0;
}