#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areTheSame(char* string1, char* string2);

int main() {
     // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    char* string1 = "Stro";
    char* string2 = "mae";
    printf("%d",areTheSame(string1,string2));
    return 0;
}

int areTheSame(char* string1, char* string2){
    if(strcmp(string1, string2) == 0)
        return 1;
    else
        return 0;
}