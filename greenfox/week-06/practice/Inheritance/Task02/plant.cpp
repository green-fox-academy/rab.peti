#include "plant.h"

float Plant::getWater() const {
    return _water;
}

void Plant::watering(float n) {
    _water+= n;
}

bool Plant::needsWater() {
    return _water < 3;
}

const std::string &Plant::getColor() const {
    return _color;
}
