#ifndef TASK02_TREE_H
#define TASK02_TREE_H

#include "plant.h"

class Tree : public Plant {
public:
    Tree();

    Tree(std::string color, int water);

    bool needsWater() override;
    void watering(float n) override;
};


#endif //TASK02_FLOWER_H