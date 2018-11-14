#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H


class Car {
public:
    Car(int gasAmount, int capacity);

    int getCapacity() const;
    int getGasAmount() const;
    void fill();
    bool isFull();

private:
    int _gasAmount;
    int _capacity;
};


#endif //PETROLSTATION_CAR_H
