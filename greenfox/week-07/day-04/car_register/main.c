#include <string.h>
#include <stdio.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */
typedef enum {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH
} transmission;

typedef struct {
    char manufacturer[256];
    float price;
    int year_of_manufacture;
    transmission transmission;
} car_t;

int get_older_cars_than(car_t *array, int array_length, int age);

int get_transmission_count(car_t *array, int array_length, transmission trnsm);

int main() {
    car_t cars[3];

    car_t audi;
    strcpy(audi.manufacturer, "audi");
    audi.price = 100000;
    audi.year_of_manufacture = 2018;
    audi.transmission = DUAL_CLUTCH;
    cars[0] = audi;

    car_t mercedes;
    strcpy(mercedes.manufacturer, "mercedes");
    mercedes.price = 50000;
    mercedes.year_of_manufacture = 2017;
    mercedes.transmission = DUAL_CLUTCH;
    cars[1] = mercedes;

    car_t bmw;
    strcpy(bmw.manufacturer, "bmw");
    bmw.price = 65000;
    bmw.year_of_manufacture = 2012;
    bmw.transmission = AUTOMATIC;
    cars[2] = bmw;

    printf("%d cars are older than the given age.\n", get_older_cars_than(cars, 3, 2010));
    printf("%d cars have this kind of transmission.\n", get_transmission_count(cars, 3, DUAL_CLUTCH));
    return 0;
}

int get_older_cars_than(car_t *array, int array_length, int age) {
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (array[i].year_of_manufacture < age)
            counter++;
    }
    return counter;
};

int get_transmission_count(car_t *array, int array_length, transmission trnsm) {
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if (array[i].transmission == trnsm)
            counter++;
    }
    return counter;
}