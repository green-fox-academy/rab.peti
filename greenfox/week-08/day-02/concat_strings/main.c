#include <stdio.h>
#include <stdlib.h>
#include "string.h"

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char *concatenate_strings(char *string1, int string1_size, char *string2, int string2_size);

int main()
{
    char* string1 = "What I cannot create,";
    char* string2 = " I do not understand";
    printf("%s", concatenate_strings(string1,strlen(string1),string2,strlen(string2)));
    return 0;
}

char *concatenate_strings(char *string1, int string1_size, char *string2, int string2_size){
    int array_size = string1_size + string2_size;
    char* temp = (char*)calloc((size_t) (array_size), sizeof(char));
    for (int i = 0; i < string1_size + string2_size; ++i) {
        if(i < string1_size)
            temp[i] = string1[i];
        else
            temp[i] = string2[i-string1_size];
    }
    return temp;
}