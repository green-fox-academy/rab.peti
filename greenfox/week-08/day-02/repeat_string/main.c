#include <stdio.h>
#include <stdlib.h>
#include "string.h"

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char* string_repeater(char* string, int string_length, int repetitions);

int main()
{
    char* string = "Apple";
    printf("%s", string_repeater(string,strlen(string),5));
    return 0;
}

char* string_repeater(char* string, int string_length, int repetitions){
    char* temp = (char*)calloc((size_t)string_length * repetitions, sizeof(char));
    for (int i = 0; i < repetitions; ++i) {
        strcat(temp,string);
    }
    return temp;
}