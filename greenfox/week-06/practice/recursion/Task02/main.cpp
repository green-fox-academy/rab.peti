#include <iostream>

int numberAdder(int n);
int main() {
    // Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
    std::cout << numberAdder(5) << std::endl;
    return 0;
}

int numberAdder(int n) {
    if (n >= 1) {
        return n + numberAdder(n - 1);
    }
}