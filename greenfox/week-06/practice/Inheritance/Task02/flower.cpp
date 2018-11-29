#include "flower.h"

bool Flower::needsWater() {
    return _water < 5;
}

void Flower::watering(float n) {
    _water += n * 0.75;
}

Flower::Flower() {
    _color = "yellow";
    _water = 4;
}
Flower::Flower(std::string color, int water) {
    _color = color;
    _water = water;
}
