#include <iostream>
#include "animal.h"
int main() {
    // Create an Animal class
    // Every animal has a hunger value, which is a whole number
    // Every animal has a thirst value, which is a whole number
    // when creating a new animal object these values are created with the default 50 value
    // Every animal can eat() which decreases their hunger by one
    // Every animal can drink() which decreases their thirst by one
    // Every animal can play() which increases both by one
    Animal animal1;
    Animal animal2;

    std::cout << "Hunger: " << animal1.getHunger() << " | Thirst: " << animal1.getThirst() << std::endl;
    std::cout << "Hunger2: " << animal2.getHunger() << " | Thirst2: " << animal2.getThirst() << std::endl;

    for (int i = 0; i < 10; ++i) {
        animal1.play();
    }
    std::cout << "Hunger: " << animal1.getHunger() << " | Thirst: " << animal1.getThirst() << std::endl;
    for (int j = 0; j < 10; ++j) {
        animal2.eat();
        animal2.drink();
    }
    std::cout << "Hunger2: " << animal2.getHunger() << " | Thirst2: " << animal2.getThirst() << std::endl;
    return 0;
}