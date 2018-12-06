#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
	enum car_type type;
	float km;
	float gas;
};

void printCarStats(struct car* car);
int main()
{
    struct car tesla;
    tesla.type = TESLA;
    tesla.km = 5000.52;
    printCarStats(&tesla);

    struct car toyota;
    toyota.type = TOYOTA;
    toyota.km = 14275.15;
    toyota.gas = 100;
    printCarStats(&toyota);
	return 0;
}
void printCarStats(struct car* car){
    if(car->type == TESLA)
        printf("It's a tesla with %.2fkm on it.\n", car->km);
    else {
        if(car->type == 0){
            printf("It's a volvo with %.2fkm on it with %.2f liter gas in the tank.\n", car->km, car->gas);
        }else if(car->type == 1){
            printf("It's a toyota with %.2fkm on it with %.2f liter gas in the tank.\n", car->km, car->gas);
        }else if(car->type == 2){
            printf("It's a land rover with %.2fkm on it with %.2f liter gas in the tank.\n", car->km, car->gas);
        }
    }
}