#include <stdio.h>
#include "sandwich.h"
/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

int main()
{
    Sandwich sajtos;
    Sandwich sonkas;

    sajtos.name = "sajtos";
    sajtos.price = 420;
    sajtos.weight = 0.5;
    printf("%s sandwich costs %.1f Ft and is %.1f kg\n", sajtos.name, sajtos.price, sajtos.weight);

    sonkas.name = "sonkas";
    sonkas.price = 500.5;
    sonkas.weight = 1;
    printf("%s sandwich costs %.1f Ft and is %.1f kg\n", sonkas.name, sonkas.price, sonkas.weight);
    return 0;
}