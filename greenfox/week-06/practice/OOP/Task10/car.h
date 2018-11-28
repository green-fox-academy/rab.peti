#ifndef TASK10_CAR_H
#define TASK10_CAR_H


class Car {
public:
    Car(int gasAmount, int capacity);

    int getGasAmount() const;

    int getCapacity() const;

    bool isFull();
    void fill();
private:
    int _gasAmount;
    int _capacity;
};


#endif //TASK10_CAR_H
