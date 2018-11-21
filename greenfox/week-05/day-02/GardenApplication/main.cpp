#include <iostream>
#include <vector>
#include "flower.h"
#include "tree.h"
#include "plant.h"

int main() {

    std::vector<Plant> garden;

    Flower flower;
    Flower flower2;

    Tree tree;
    Tree tree2;

    garden.push_back(flower);
    garden.push_back(flower2);
    garden.push_back(tree);
    garden.push_back(tree2);


    std::cout << "The " << flower.getColor() << " Flower has " << flower.getWater() << " water and " << flower.needsWater() << std::endl;
    std::cout << "The " << flower2.getColor() << " Flower has " << flower2.getWater() << " water and " << flower2.needsWater() << std::endl;

    std::cout << std::endl;

    std::cout << "The " << tree.getColor() << " Tree has " << tree.getWater() << " water and " << tree.needsWater() << std::endl;
    std::cout << "The " << tree2.getColor() << " Tree has " << tree2.getWater() << " water and " << tree2.needsWater() << std::endl;

    std::cout << std::endl;



    std::cout << std::endl;

    std::cout << "The " << flower.getColor() << " Flower has " << flower.getWater() << " water and " << flower.needsWater() << std::endl;
    std::cout << "The " << flower2.getColor() << " Flower has " << flower2.getWater() << " water and " << flower2.needsWater() << std::endl;

    std::cout << std::endl;

    std::cout << "The " << tree.getColor() << " Tree has " << tree.getWater() << " water and " << tree.needsWater() << std::endl;
    std::cout << "The " << tree2.getColor() << " Tree has " << tree2.getWater() << " water and " << tree2.needsWater() << std::endl;
    return 0;
}