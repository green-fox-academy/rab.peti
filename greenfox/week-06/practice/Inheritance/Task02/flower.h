#ifndef TASK02_FLOWER_H
#define TASK02_FLOWER_H

#include "plant.h"

class Flower : public Plant {
public:
    Flower();

    Flower(std::string color, int water);

    bool needsWater() override;
    void watering(float n) override;
};


#endif //TASK02_FLOWER_H