#ifndef TASK03_FARM_H
#define TASK03_FARM_H

#include <vector>
#include "animal.h"

class Farm {
public:
    void breed();
    void slaughter();
    void addAnimal(Animal&& animal);
    int numberOfAnimals();
    Animal& searchedAnimal(int i);
private:
    std::vector<Animal> _Animals;
    int _slots = 10;
};


#endif //TASK03_FARM_H
