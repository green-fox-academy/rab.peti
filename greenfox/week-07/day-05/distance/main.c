#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance_between_characters(char* array, int length, char searched_char);

int main ()
{
    char str[] = "This is a sample string";
    char searched_char = 'i';
    printf("%d", distance_between_characters(str,strlen(str),searched_char));

    return 0;
}

int distance_between_characters(char* array, int length, char searched_char){
    int first_found = 0;
    int second_found = 0;
    int counter = 0;
    int last_char_at = 0;
    for (int j = 0; j < length; ++j) {
        if(array[j] == searched_char) {
            counter++;
            last_char_at = j;
        }
    }

    for (int i = 0; i < length; ++i) {
        if(array[i] == searched_char && first_found == 0)
            first_found = i;
        else if(array[i] == searched_char && i == last_char_at)
            second_found = i;
    }
    if(second_found == 0)
        return 0;
    return second_found - first_found;
}