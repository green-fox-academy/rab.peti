#include "station.h"
#include "car.h"
#include <iostream>

Station::Station(int gasAmount) {
    _gasAmount = gasAmount;
}

int Station::getGasAmount() const {
    return _gasAmount;
}

void Station::fill(Car& car)
{
    while(!car.isFull()) {
        std::cout << "Filling car!" << std::endl;
        car.fill();
        _gasAmount--;
    }
    std::cout << "Gas left in the station: " << _gasAmount << std::endl;
}
