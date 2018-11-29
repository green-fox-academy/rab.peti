#include <iostream>

#include "plant.h"
#include "flower.h"
#include "tree.h"
#include "garden.h"

int main() {
    Garden garden;
    Flower flower;
    Tree tree;
    Flower flower2("red", 6);
    Tree tree2("white", 7);

    garden.addPlant(&flower);
    garden.addPlant(&tree);
    garden.addPlant(&flower2);
    garden.addPlant(&tree2);

    std::vector<Plant*> local = garden.getGarden();
    std::cout <<"The " << flower.getColor() << " Flower has " <<  local[0]->getWater() << " water." << std::endl;
    std::cout <<"The " << tree.getColor() << " Tree has " <<  local[1]->getWater() << " water." << std::endl;
    std::cout <<"The " << flower2.getColor() << " Flower has " <<  local[2]->getWater() << " water." << std::endl;
    std::cout <<"The " << tree2.getColor() << " Tree has " <<  local[3]->getWater() << " water." << std::endl;
    garden.watering(10);
    std::cout <<"The " << flower.getColor() << " Flower has " <<  local[0]->getWater() << " water." << std::endl;
    std::cout <<"The " << tree.getColor() << " Tree has " <<  local[1]->getWater() << " water." << std::endl;
    std::cout <<"The " << flower2.getColor() << " Flower has " <<  local[2]->getWater() << " water." << std::endl;
    std::cout <<"The " << tree2.getColor() << " Tree has " <<  local[3]->getWater() << " water." << std::endl;
    return 0;
}