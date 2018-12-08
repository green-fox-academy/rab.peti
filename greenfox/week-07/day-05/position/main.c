#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void char_position_finder(char* array, int length, char searched_char);
int main ()
{
    char string[55] = "This is a string for testing";
    char p = 'i';
    printf("%s\n", string);
    printf("I found %c in the following positions: ", p);
    char_position_finder(string,strlen(string),p);

    return 0;
}

void char_position_finder(char* array, int length, char searched_char){
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(array[i] == searched_char){
            printf("%d. ", i+1);
            counter = 1;
        }
    }
    if(counter != 1)
        printf("There is no %c in this string", searched_char);
}