#include <iostream>

int sum(int number)
{
    if(number == 1) {
        return 1;
    }
    else
    {
        return number + sum(number-1);
    }
}

int main() {
    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

    std::cout << sum(20) << std::endl;
    return 0;
}