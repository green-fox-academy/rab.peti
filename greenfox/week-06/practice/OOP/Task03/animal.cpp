#include "animal.h"

Animal::Animal() {
    _thirst = 50;
    _hunger = 50;
}

void Animal::eat() {
    _hunger--;
}

void Animal::drink() {
    _thirst--;
}

void Animal::play() {
    _hunger++;
    _thirst++;
}

int Animal::getHunger() const {
    return _hunger;
}

int Animal::getThirst() const {
    return _thirst;
}
