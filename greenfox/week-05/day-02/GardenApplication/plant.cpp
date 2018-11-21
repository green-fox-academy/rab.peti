#include "plant.h"
#include <iostream>

std::string Plant::getColor() {
    if(_color == Color::RED)
        return "red";
    else if(_color == Color::GREEN)
        return "green";
    else if(_color == Color::BLUE)
        return "blue";
    else if(_color == Color::ORANGE)
        return "orange";
    else if(_color == Color::PINK)
        return "pink";
    else if(_color == Color::YELLOW)
        return "yellow";
    else if(_color == Color::PURPLE)
        return "purple";
}

double Plant::getWater() {
    return _water;
}

std::string Plant::needsWater() {
    if(_water < 5)
        return "needs water";

    return "doesn't need water";
}

bool Plant::need() {
    return _water < 5;
}

void Plant::watering(int amount) {
    std::cout << "Watering " << amount << std::endl;
    if(Plant::need())
    {
        _water += amount;
    }
}