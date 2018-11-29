#include "garden.h"

void Garden::watering(float n) {
    int counter = 0;
    for (int i = 0; i < _garden.size(); ++i) {
        if(_garden[i]->needsWater())
            counter++;
    }
    for (int j = 0; j < _garden.size(); ++j) {
        _garden[j]->watering(n/counter);
    }
}

void Garden::addPlant(Plant* plant) {
    _garden.push_back(plant);
}

const std::vector<Plant *> &Garden::getGarden() const {
    return _garden;
}
