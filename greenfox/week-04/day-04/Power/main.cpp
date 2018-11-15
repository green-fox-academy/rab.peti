#include <iostream>

int power(int base, int n);

int main() {
    // Given base and n that are both 1 or more, compute recursively (no loops)
    // the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
    std::cout << power(3,2);
    return 0;
}

int power(int base, int n)
{
    if(base > 0 && n > 0)
    {
        return base * power(base,n-2);
    }
}