#include <iostream>
#include "flower.h"

Flower::Flower() {
    _water = 0;
    _color = Color::YELLOW;
}

Flower::Flower(int water, Color color) {
    _water = water;
    _color = color;
}

std::string Flower::needsWater() {
    if(_water < 5)
        return "needs water";

    return "doesn't need water";
}

void Flower::watering(int amount) {
    std::cout << "Watering " << amount << std::endl;
    if(Flower::need())
    {
        _water += (amount) * 0.75;
    }
}