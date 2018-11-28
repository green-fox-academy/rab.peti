#include "farm.h"

void Farm::breed() {
    Animal animal;
    if(_Animals.size() < _slots)
        _Animals.push_back(animal);
}
void Farm::slaughter() {
    int minFood = _Animals[0].getHunger();
    int index = 0;
    for (int i = 0; i < _Animals.size(); ++i) {
        if(_Animals[i].getHunger() < minFood) {
            minFood = _Animals[i].getHunger();
            index = i;
        }
    }
    _Animals.erase(_Animals.begin()+index);
}

void Farm::addAnimal(Animal&& animal) {
    _Animals.push_back(animal);
}

int Farm::numberOfAnimals() {
    return _Animals.size();
}

Animal& Farm::searchedAnimal(int i) {
    return _Animals[i];
}
