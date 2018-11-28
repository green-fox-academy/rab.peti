//
// Created by Peti on 2018. 11. 28..
//

#include "car.h"


Car::Car(int gasAmount, int capacity) : _gasAmount(gasAmount), _capacity(capacity) {}

bool Car::isFull() {
    return _capacity == _gasAmount;
}

void Car::fill() {
    _gasAmount++;
}

int Car::getGasAmount() const {
    return _gasAmount;
}

int Car::getCapacity() const {
    return _capacity;
}
