#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Create a smartphone register application
 * Read the content of smartphones.txt and store the informations in a structure called "smartphone:
 * - the name of the gadget (which is shorter than 256 characters) (Don't bother with the underscore('_') character, it's the part of the name)
 * - the year of the release (e.g. 2016)
 * - the type of the screen size (as a custom type, see below)
 *
 * In the file the size is given in cm but you should store the screen size type in an enumeration ("screen_size"),
 * the valid types are:
 *  - BIG -> (>= 15 cm)
 *  - MEDIUM -> (>= 12 cm)
 *  - SMALL -> (< 12 cm)
 *
 * The smartphones should be stored in an array.
 *
 * Implement the following functions:
 * - get_oldest_phone()
 *    - it should return the name of oldest device
 *    - it is up to you how your function declaration looks like (return type and arguments)
 * - get_screen_size_count()
 *    - it returns the count of phones which has "screen_size" size
 *    - it is up to you how your function declaration looks like (return type and arguments)
 *
 * Your main function should invoke these functions and print the following:
 * The ..... is the oldest device in the database
 * There are .... phones with BIG (>= 15 cm) screen size
 * There are .... phones with SMALL (< 12 cm) screen size
 *
 *
 * Additionally, you need to create a new file(prices.txt) that looks like this:
 * <NAME> <PRICE>
 * <NAME> <PRICE>
 * .
 * .
 * .
 *
 * To calculate the price use the following method. The base price of every phone is 300$.
 * If the size is SMALL, that adds 0$ to the value
 * If the size is MEDIUM, that adds 100$ to the value
 * If the size is BIG, that doubles the base price.
 *
 * The price also depends on the age. For every year that passed since its release,
 * the phone loses 50$ but the maximum value that it can lose because of the age is 250$
 */

enum SCREEN_SIZE {
    SMALL,
    MEDIUM,
    BIG
};

struct smartphone {
    char name[256];
    int year;
    enum SCREEN_SIZE type;
};

int textReader(char *path, struct smartphone* phones);

char* getSCREEN_SIZE(struct smartphone* array, int index);

char* get_oldest_phone(struct smartphone* array, int array_size, char* oldest);

int get_screen_size_count(struct smartphone* array, int array_size, enum SCREEN_SIZE screen_size, int count);

int main() {
    char* path = "phones.txt";
    char oldest[256];
    struct smartphone phones[256];
    int lines = textReader(path,phones);
    printf("The %s is the oldest device in the database\n", get_oldest_phone(phones,lines,oldest));
    printf("There are %d phones with BIG (>= 15 cm) screen size\n", get_screen_size_count(phones,lines,BIG,0));
    printf("There are %d phones with SMALL (< 12 cm) screen size\n", get_screen_size_count(phones,lines,SMALL,0));
    //for (int j = 0; j < lines; ++j) {
    //    printf("%s %d %s\n", phones[j].name, phones[j].year, getSCREEN_SIZE(phones,j));
    //}
    return 0;
}

char* get_oldest_phone(struct smartphone* array, int array_size, char* oldest){
    int oldest_year = array[0].year;
    for (int i = 0; i < array_size; ++i) {
        if(array[i].year < oldest_year) {
            oldest_year = array[i].year;
            strcpy(oldest,array[i].name);
        }
    }
    return oldest;
}

int get_screen_size_count(struct smartphone* array, int array_size, enum SCREEN_SIZE screen_size, int count){
    for (int i = 0; i < array_size; ++i) {
        if(array[i].type == screen_size) {
            count++;
        }
    }
    return count;
}

int textReader(char *path, struct smartphone* phones) {
    FILE *fptr;
    fptr = fopen(path, "r");

    int counter = 0;
    int i = 0;
    char *ptr;
    if (fptr != NULL) {
        char line[256];
        while (fgets(line, sizeof line, fptr) != NULL) {
            char *pch = strtok(line, " ");
            while (pch != NULL) {
                switch (counter) {
                    case 0  :
                        strcpy(phones[i].name, pch);
                        break;
                    case 1  :
                        phones[i].year = strtol(pch, &ptr, 10);
                        break;
                    case 2  :
                        if(strtol(pch, &ptr, 10) >= 15)
                            phones[i].type = BIG;
                        else if(strtol(pch, &ptr, 10) >= 12)
                            phones[i].type = MEDIUM;
                        else if(strtol(pch, &ptr, 10) < 12)
                            phones[i].type = SMALL;
                        break;
                    default :
                        printf("Something went wrong");
                }
                pch = strtok(NULL, " ");
                counter++;
            }
            i++;
            counter = 0;
        }
        fclose(fptr);
    } else {
        perror(path);
    }
    fclose(fptr);
    //for (int j = 0; j < 15; ++j) {
    //    printf("%s %d %s\n", phones[j].name, phones[j].year, getSCREEN_SIZE(phones,j));
    //}
    return i;
}

char* getSCREEN_SIZE(struct smartphone* array, int index){
    if(array[index].type == SMALL)
        return "small";
    else if(array[index].type == MEDIUM)
        return "medium";
    else if(array[index].type == BIG)
        return "big";
}