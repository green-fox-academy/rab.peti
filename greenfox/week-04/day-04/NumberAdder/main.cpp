#include <iostream>

int numberAdder(int n);

int main() {
    // Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
    std::cout << numberAdder(5);
    return 0;
}

int numberAdder(int n)
{
    int number = 0;
    for (int i = 1; i <= n; ++i) {
        number += i;
    }
    return number;
}