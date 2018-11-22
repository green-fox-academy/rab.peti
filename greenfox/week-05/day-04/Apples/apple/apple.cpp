#include <string>
#include "apple.h"

std::string getApple()
{
    return "apple";
}

int sum(std::vector<int> elements)
{
    int sum = 0;
    for (int element : elements) {
        sum += element;
    }
    return sum;
}