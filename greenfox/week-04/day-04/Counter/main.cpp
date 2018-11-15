#include <iostream>


int countDown(int n);

int main() {
    // Write a recursive function that takes one parameter: n and counts down from n.
    countDown(6);
    return 0;
}

int countDown(int n)
{
    std::cout << n << std::endl;
    if(n > 0) {
        return countDown(n - 1);
    }
    return 0;
}