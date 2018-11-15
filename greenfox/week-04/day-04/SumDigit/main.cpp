#include <iostream>

int sumDigit(int n);

int main() {
    // Given a non-negative int n, return the sum of its digits recursively (no loops).
    // Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
    // divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
    std::cout << sumDigit(12345);

    return 0;
}

int sumDigit(int n)
{
    if(n == 0)
        return 0;
    return n % 10 + sumDigit(n/10);
}