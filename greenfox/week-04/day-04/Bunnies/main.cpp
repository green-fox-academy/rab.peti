#include <iostream>


int bunnyEars(int n);

int main() {
    // We have a number of bunnies and each bunny has two big floppy ears.
    // We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

    std::cout << bunnyEars(10);
    return 0;
}

int bunnyEars(int n) {
    if (n == 0)
        return 0;
    else if (n > 0)
    {
        return 2 + bunnyEars(n - 1);
    }
}