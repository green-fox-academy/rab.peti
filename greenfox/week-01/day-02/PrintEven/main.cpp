#include <iostream>

int main() {
    // Create a program that prints all the even numbers between 0 and 500
    for(int i = 1; i < 500; i++)
    {
        if(i % 2 == 0)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}