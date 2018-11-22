#include <iostream>
#include <vector>
#include "apple.h"

int main() {
    std::vector<int> elements = {1,2,3,4,5};
    std::cout << getApple() << std::endl;
    std::cout << sum(elements) << std::endl;
    return 0;
}