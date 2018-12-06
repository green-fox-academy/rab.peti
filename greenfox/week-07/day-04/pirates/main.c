#include <stdio.h>
#include "string.h"

/*
Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg?
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg
*/

struct Pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
};

int gold_of_all_pirates(struct Pirate pirate[], int length);

int average_gold_of_all_pirates(struct Pirate pirate[], int length);

char* richest_wooden_leg_pirate(struct Pirate pirate[], int length);

int main()
{
    struct Pirate pirates[5];

    struct Pirate jozsi;
    strcpy(jozsi.name, "jozsi");
    jozsi.has_wooden_leg = 0;
    jozsi.gold_count = 10;
    pirates[0] = jozsi;

    struct Pirate bela;
    strcpy(bela.name, "bela");
    bela.has_wooden_leg = 1;
    bela.gold_count = 11;
    pirates[1] = bela;

    struct Pirate janos;
    strcpy(janos.name, "janos");
    janos.has_wooden_leg = 0;
    janos.gold_count = 7;
    pirates[2] = janos;

    struct Pirate karoly;
    strcpy(karoly.name, "karoly");
    karoly.has_wooden_leg = 0;
    karoly.gold_count = 5;
    pirates[3] = karoly;

    struct Pirate lajos;
    strcpy(lajos.name, "lajos");
    lajos.has_wooden_leg = 1;
    lajos.gold_count = 13;
    pirates[4] = lajos;

    printf("The pirates have: %d gold\n", gold_of_all_pirates(pirates,5));
    printf("The average amount of gold / pirate is: %d\n", average_gold_of_all_pirates(pirates,5));
    printf("%s\n", richest_wooden_leg_pirate(pirates,5));

    return 0;
}

int gold_of_all_pirates(struct Pirate pirate[], int length){
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        counter += pirate[i].gold_count;
    }
    return counter;
}

int average_gold_of_all_pirates(struct Pirate pirate[], int length){
    return gold_of_all_pirates(pirate,length) / length;
}

char* richest_wooden_leg_pirate(struct Pirate pirate[], int length){
    char richest_wooden_legged[] = "                    ";
    int richest = pirate[0].gold_count;
    for (int j = 0; j < length; ++j) {
        if(pirate[j].gold_count > richest)
            richest = pirate[j].gold_count;
    }
    for (int i = 0; i < length; ++i) {
        if(pirate[i].gold_count == richest && pirate[i].has_wooden_leg == 1) {
            strcpy(richest_wooden_legged, pirate[i].name);
            return strcat(pirate[i].name, " is the richest wooden legged pirate");
        }
    }
    return "There is no wooden legged pirate on board.";
}