#include <iostream>
#include "station.h"
#include "car.h"

int main() {
    Station station(1000);
    Car car(50,100);
    Car car2(20,69);
    Car car3(5,50);
    Car car4(30,120);
    Car car5(50,100);

    station.fill(car);
    station.fill(car2);
    station.fill(car3);
    station.fill(car4);
    station.fill(car5);
    return 0;
}