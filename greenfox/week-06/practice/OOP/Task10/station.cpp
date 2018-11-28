#include <iostream>
#include "station.h"

Station::Station(int gasAmount) : _gasAmount(gasAmount) {}

void Station::fill(Car &car) {
    while (!car.isFull()) {
        std::cout << "Filling car!" << std::endl;
        car.fill();
        _gasAmount--;
    }
}

int Station::getGasAmount() const {
    return _gasAmount;
}
