#include <iostream>

int bunnies(int n);
int main() {
    // We have a number of bunnies and each bunny has two big floppy ears.
    // We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
    std::cout << bunnies(5) << std::endl;
    return 0;
}

int bunnies(int n){
    if(n > 0)
        return 2 + bunnies(n-1);
}