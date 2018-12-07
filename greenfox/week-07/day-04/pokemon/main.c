#include <stdio.h>
#include "string.h"

/* Pokemon database!
 * You should store the following data in a structure
 *  - the name of the pokemon (which is shorter than 256 characters)
 *  - the age of the pokemon (in years)
 *  - the strength of the pokemon (between 0.0-10.0)
 *  - the speed of the pokemon (between 0.0-10.0)
 *  - the type of the pokemon (as a custom type, see below)
 *
 * You should store the pokemon type in an enumeration
 * the valid types are:
 *  - normal
 *  - fire
 *  - water
 *  - electric
 *  - grass
 *  - ice
 *  - fighting
 *  - poision
 *  - ground
 *  - flying
 *  - psychic
 *  - bug
 *  - rock
 *  - ghost
 *  - dragon
 *  - dark
 *  - steel
 *  - fairy
 *
 * The "pokemon"-s are stored in an array.
 *
 * Write the following functions:
 * 1) Get faster pokemons than
 *      - parameters:
 *          - array
 *          - array length
 *          - speed
 *      - it returns the count of the faster pokemons than the parameter "speed"
 * 2) Get type count
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the count of pokemons which are "type"
 * 3) Get strongest type
 *      - parameters:
 *          - array
 *          - array length
 *          - strength
 *      - it returns the type of the strongest pokemon
 * 4) Get maximal strength of a type
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the highest strength among the "type" type pokemons
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */
typedef enum {
    NORMAL,
    FIRE,
    WATER,
    ELECTRIC,
    GRASS,
    ICE,
    FIGHTING,
    POISON,
    GROUND,
    FLYING,
    PSYCHIC,
    BUG,
    ROCK,
    GHOST,
    DRAGON,
    DARK,
    STEEL,
    FAIRY
} pokemon_types_t;

typedef struct {
    char name[256];
    int age;
    float strength; // (between 0.0-10.0)
    float speed; // (between 0.0-10.0)
    pokemon_types_t type;
} pokemon_t;

int getFasterThan(pokemon_t *array, int array_length, float speed);

int getTypeCount(pokemon_t *array, int array_length, pokemon_types_t type);

pokemon_types_t getStrongestsType(pokemon_t *array, int array_length, float strength);

float getStrongestInType(pokemon_t *array, int array_length, pokemon_types_t type);


int main() {
    pokemon_t pokemons[5];
    pokemon_t pikachu;
    strcpy(pikachu.name,"pikachu");
    pikachu.strength = 5;
    pikachu.type = FIRE;
    pikachu.speed = 6.9;
    pikachu.age = 7;
    pokemons[0] = pikachu;
    printf("%d\n", getFasterThan(pokemons,sizeof(pokemons) / sizeof(pokemons[0]),5));
    printf("%d\n", getTypeCount(pokemons,sizeof(pokemons) / sizeof(pokemons[0]),FIRE));
    getStrongestsType(pokemons,sizeof(pokemons) / sizeof(pokemons[0]),0);
    printf("%.2f", getStrongestInType(pokemons,sizeof(pokemons) / sizeof(pokemons[0]),FIRE));

    return 0;
}

int getFasterThan(pokemon_t *array, int array_length, float speed){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].speed > speed)
            counter++;
    }
    return counter;
}

int getTypeCount(pokemon_t *array, int array_length, pokemon_types_t type){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].type == type)
            counter++;
    }
    return counter;
}

pokemon_types_t getStrongestsType(pokemon_t *array, int array_length, float strength){
    strength = array[0].strength;
    pokemon_types_t strongestType = array[0].type;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].strength > strength) {
            strength = array[i].strength;
            strongestType = array[i].type;
        }
    }
    return strongestType;
}

float getStrongestInType(pokemon_t *array, int array_length, pokemon_types_t type){
    pokemon_types_t strongestType;
    float strongestInType = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].type == type) {
            strongestType = array[i].type;
            if(array[i].strength > strongestInType){
                strongestInType = array[i].strength;
                strongestType = array[i].type;
            }
        }
    }
    return strongestInType;
}