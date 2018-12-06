#include <stdio.h>
#include "house.h"
/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

int main()
{
    house_t houses[2];

    house_t house1;
    house1.address = "gyerebeutca5";
    house1.area = 200;
    house1.rooms = 10;
    house1.price = 60000;
    houses[0] = house1;

    house_t house2;
    house2.address = "nemazazutca2";
    house2.area = 300;
    house2.rooms = 8;
    house2.price = 130000;
    houses[1] = house2;
    printf("%s",worth_to_buy(&house1) == 1 ? "This house is worth to buy!\n" : "This house is not worth to buy!\n");
    printf("%s",worth_to_buy(&house2) == 1 ? "This house is worth to buy!\n" : "This house is not worth to buy!\n");
    printf("%d",number_of_housees_worth_to_buy(houses,2));



  return 0;
}