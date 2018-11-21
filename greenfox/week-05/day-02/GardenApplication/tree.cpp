#include "tree.h"
#include <iostream>

Tree::Tree() {
    _water = 0;
    _color = Color::PURPLE;
}

Tree::Tree(int water, Color color) {
    _water = water;
    _color = color;
}

std::string Tree::needsWater() {
    if(_water < 10)
        return "needs water";

    return "doesn't need water";
}

void Tree::watering(int amount) {
    std::cout << "Watering " << amount << std::endl;
    if(Tree::need())
    {
        _water += (amount) * 0.4;
    }
}