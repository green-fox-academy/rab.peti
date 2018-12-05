#include <stdio.h>

int isCharInString(char* string, char c);

int main() {
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
    //

    char string[100];
    printf("Give me a string: ");
    scanf("%s", string);
    printf("%d",isCharInString(string,'l'));

    return 0;
}

int isCharInString(char* string, char c){
    for (int i = 0; string[i]; ++i) {
        if(c == string[i])
            return i;
    }
    return -1;
}