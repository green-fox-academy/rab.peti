#ifndef GARDENAPPLICATION_TREE_H
#define GARDENAPPLICATION_TREE_H

#include <string>
#include "plant.h"

class Tree : public Plant{
public:
    Tree();
    Tree(int water, Color color);

    std::string needsWater() override;
    void watering(int amount) override;
};


#endif //GARDENAPPLICATION_TREE_H
