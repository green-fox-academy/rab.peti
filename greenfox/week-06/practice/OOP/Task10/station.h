#ifndef TASK10_STATION_H
#define TASK10_STATION_H

#include "car.h"

class Station {
public:
    Station(int gasAmount);

    int getGasAmount() const;

    void fill(Car& car);
private:
    int _gasAmount;
};


#endif //TASK10_STATION_H
