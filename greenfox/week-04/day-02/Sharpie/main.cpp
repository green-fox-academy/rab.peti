#include <iostream>
#include "sharpie.h"

int main() {
    Sharpie sharpie("black",1.5f);
    std::cout << sharpie.getInkAmount() << std::endl;
    sharpie.use();
    std::cout << sharpie.getInkAmount() << std::endl;
    return 0;
}