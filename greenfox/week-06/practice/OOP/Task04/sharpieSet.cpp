#include "sharpieSet.h"
#include <iostream>

int SharpieSet::countUsable() {
    int counter = 0;
    for (int i = 0; i < _sharpieVector.size(); ++i) {
        if (_sharpieVector[i]->getInkAmount() > 0)
            counter++;
    }
    return counter;
}

void SharpieSet::removeTrash() {
    for (int i = 0; i < _sharpieVector.size(); ++i) {
        if (!_sharpieVector[i]->usable()) {
            _sharpieVector.erase(_sharpieVector.begin() + i);
        }
    }
}

void SharpieSet::addElement(Sharpie *sharpie) {
    _sharpieVector.push_back(sharpie);
}