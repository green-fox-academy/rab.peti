#include <iostream>

#include "animal.h"

int main() {
    Animal animal;
    Animal animal2;

    std::cout << "Hunger: " << animal.getHunger() << " Thirst:" <<animal.getThirst() << std::endl;
    animal.play();
    std::cout << "Hunger: " << animal.getHunger() << " Thirst:" <<animal.getThirst() << std::endl;
    animal.drink();
    std::cout << "Thirst:" <<animal.getThirst() << std::endl;
    animal.eat();
    std::cout << "Hunger: " << animal.getHunger() << std::endl;

    return 0;
}