#include "house.h"

int worth_to_buy(house_t *house){
    if(house->price < house->area * 400) {
        return 1;
    }
    else {
        return 0;
    }
}

int number_of_housees_worth_to_buy(house_t house[], int length){
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(worth_to_buy(&house[i]))
            counter++;
    }
    return counter;
}

