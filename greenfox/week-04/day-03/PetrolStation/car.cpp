#include "car.h"

Car::Car(int gasAmount, int capacity) : _gasAmount(gasAmount), _capacity(capacity) {

}

int Car::getCapacity() const {
    return _capacity;
}

int Car::getGasAmount() const {
    return _gasAmount;
}

void Car::fill()
{
    _gasAmount++;
}

bool Car::isFull()
{
    return _capacity == _gasAmount;
}