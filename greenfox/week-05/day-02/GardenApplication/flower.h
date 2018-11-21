#ifndef GARDENAPPLICATION_FLOWER_H
#define GARDENAPPLICATION_FLOWER_H

#include <string>
#include "plant.h"

class Flower : public Plant{
public:
    Flower();
    Flower(int water, Color color);

    std::string needsWater() override;
    void watering(int amount) override;
};


#endif //GARDENAPPLICATION_FLOWER_H
