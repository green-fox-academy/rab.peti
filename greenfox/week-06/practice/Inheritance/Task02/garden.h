#ifndef TASK02_GARDEN_H
#define TASK02_GARDEN_H

#include <vector>
#include "tree.h"
#include "flower.h"

class Garden {
public:
    void watering(float n);

    const std::vector<Plant *> &getGarden() const;

    void addPlant(Plant* plant);
private:
    std::vector<Plant*> _garden;
};


#endif //TASK02_GARDEN_H
