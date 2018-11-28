#include <iostream>

int bunnies2(int n);
int main() {
    // We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
    // (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
    // have 3 ears, because they each have a raised foot. Recursively return the
    // number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).
    std::cout << bunnies2(6) << std::endl;
    return 0;
}

int bunnies2(int n){
    if (n == 0)
        return 0;
    else if(n > 0 && n % 2 == 0)
        return 3 + bunnies2(n-1);
    else if(n > 0 && n % 2 != 0)
        return 2 + bunnies2(n-1);
}