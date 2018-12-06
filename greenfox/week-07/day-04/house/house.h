#ifndef HOUSE_HOUSE_H
#define HOUSE_HOUSE_H

#include <stdio.h>

typedef struct{
    char address[100];
    int price;//euro
    int rooms;
    int area;//m2
}house_t;

int worth_to_buy(house_t *house);
int number_of_housees_worth_to_buy(house_t house[], int length);

#endif //HOUSE_HOUSE_H
