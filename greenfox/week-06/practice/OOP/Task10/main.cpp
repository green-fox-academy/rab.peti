#include <iostream>

#include "car.h"
#include "station.h"

int main() {
    //Create Station and Car classes
    //
    //Station Members:
    //gasAmount
    //create a constructor that initializes the gasAmount
    //fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station
    //
    // Car Members:
    //gasAmount
    //capacity
    //create constructor for Car with 2 arguments(gasAmount and capacity)
    //car has 2 methods:
    //isFull() -> returns true if capacity equals to gasAmount, false otherwise
    //fill() -> increments the gasAmount by one.
    //In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.
    Station station(1000);
    Car car1(50,100);
    Car car2(20,120);
    Car car3(30,70);

    std::cout << "Station gas: " << station.getGasAmount() << " car1 gas & capacity: " << car1.getGasAmount() << " | " << car1.getCapacity() << std::endl;
    std::cout << "Station gas: " << station.getGasAmount() << " car2 gas & capacity: " << car2.getGasAmount() << " | " << car2.getCapacity() << std::endl;
    std::cout << "Station gas: " << station.getGasAmount() << " car3 gas & capacity: " << car3.getGasAmount() << " | " << car3.getCapacity() << std::endl;
    station.fill(car1);
    std::cout << "Station gas: " << station.getGasAmount() << " car1 gas & capacity: " << car1.getGasAmount() << " | " << car1.getCapacity() << std::endl;
    station.fill(car2);
    std::cout << "Station gas: " << station.getGasAmount() << " car2 gas & capacity: " << car2.getGasAmount() << " | " << car2.getCapacity() << std::endl;
    station.fill(car3);
    std::cout << "Station gas: " << station.getGasAmount() << " car3 gas & capacity: " << car3.getGasAmount() << " | " << car3.getCapacity() << std::endl;
    return 0;
}