#include "tree.h"

Tree::Tree() {
    _color = "brown";
    _water = 6;
}

Tree::Tree(std::string color, int water){
    _color = color;
    _water = water;
}

bool Tree::needsWater() {
    return _water < 10;
}

void Tree::watering(float n) {
    _water += n * 0.4;
}