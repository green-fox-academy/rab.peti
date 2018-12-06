#ifndef SANDWICH_SANDWICH_H
#define SANDWICH_SANDWICH_H

typedef struct{
    char* name;
    float price;
    float weight;
}Sandwich;

float orderPrice(Sandwich sandwich, int number_of_sandwiches);

#endif //SANDWICH_SANDWICH_H
