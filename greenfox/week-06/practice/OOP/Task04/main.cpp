#include <iostream>
#include "sharpie.h"
#include "sharpieSet.h"

int main() {
    // Create Sharpie class
    // We should know about each sharpie their color (which should be a string), width (which will be a floating point number),
    // inkAmount (another floating point number)
    // When creating one, we need to specify the color and the width
    // Every sharpie is created with a default 100 as inkAmount
    // We can use() the sharpie objects
    // which decreases inkAmount
    SharpieSet sharpieSet;
    Sharpie sharpie("red", 0.5);
    Sharpie sharpie2("blue", 1);
    sharpieSet.addElement(&sharpie);
    sharpieSet.addElement(&sharpie2);
    std::cout << "This sharpie is " << sharpie.getColor() << ", it's " << sharpie.getWidth() << " wide, and has "
              << sharpie.getInkAmount() << " ink." << std::endl;
    for (int i = 0; i < 100; ++i) {
        sharpie.use();
    }
    std::cout << "This sharpie is " << sharpie.getColor() << ", it's " << sharpie.getWidth() << " wide, and has "
              << sharpie.getInkAmount() << " ink." << std::endl;

    std::cout << "This sharpie is " << sharpie2.getColor() << ", it's " << sharpie2.getWidth() << " wide, and has "
              << sharpie2.getInkAmount() << " ink." << std::endl;

    std::cout << "Usable sharpies: " << sharpieSet.countUsable() << std::endl;
    return 0;
}