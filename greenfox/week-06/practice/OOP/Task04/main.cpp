#include <iostream>
#include "sharpie.h"

int main() {
    // Create Sharpie class
    // We should know about each sharpie their color (which should be a string), width (which will be a floating point number),
    // inkAmount (another floating point number)
    // When creating one, we need to specify the color and the width
    // Every sharpie is created with a default 100 as inkAmount
    // We can use() the sharpie objects
    // which decreases inkAmount
    Sharpie sharpie("red", 0.5);
    std::cout << "This sharpie is " << sharpie.getColor() << ", it's " << sharpie.getWidth() << " wide, and has "
              << sharpie.getInkAmount() << " ink." << std::endl;
    for (int i = 0; i < 9; ++i) {
        sharpie.use();
    }
    std::cout << "This sharpie is " << sharpie.getColor() << ", it's " << sharpie.getWidth() << " wide, and has "
              << sharpie.getInkAmount() << " ink." << std::endl;
    return 0;
}