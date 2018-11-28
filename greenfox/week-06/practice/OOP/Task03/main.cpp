#include <iostream>
#include "animal.h"
#include "farm.h"

int main() {
    // Create an Animal class
    // Every animal has a hunger value, which is a whole number
    // Every animal has a thirst value, which is a whole number
    // when creating a new animal object these values are created with the default 50 value
    // Every animal can eat() which decreases their hunger by one
    // Every animal can drink() which decreases their thirst by one
    // Every animal can play() which increases both by one
    Farm farm;

    farm.addAnimal(Animal());
    farm.addAnimal(Animal());

    std::cout << "Number of animals: " << farm.numberOfAnimals() << std::endl;

    farm.searchedAnimal(0).eat();

    for (int i = 0; i < farm.numberOfAnimals(); ++i) {
        std::cout << "Animal number " << i + 1 << std::endl;
        std::cout << "Hunger: " << farm.searchedAnimal(i).getHunger() << " | Thirst: " << farm.searchedAnimal(i).getThirst() << std::endl;
    }

    farm.slaughter();
    std::cout << "Number of animals: " << farm.numberOfAnimals() << std::endl;
    for (int i = 0; i < farm.numberOfAnimals(); ++i) {
        std::cout << "Animal number " << i + 1 << std::endl;
        std::cout << "Hunger: " << farm.searchedAnimal(i).getHunger() << " | Thirst: " << farm.searchedAnimal(i).getThirst() << std::endl;
    }
    std::cout << "Number of animals: " << farm.numberOfAnimals() << std::endl;

    for (int j = 0; j < 5; ++j) {
        farm.breed();
    }

    std::cout << "Number of animals: " << farm.numberOfAnimals() << std::endl;

    for (int i = 0; i < farm.numberOfAnimals(); ++i) {
        std::cout << "Animal number " << i + 1 << std::endl;
        std::cout << "Hunger: " << farm.searchedAnimal(i).getHunger() << " | Thirst: " << farm.searchedAnimal(i).getThirst() << std::endl;
    }


    return 0;
}