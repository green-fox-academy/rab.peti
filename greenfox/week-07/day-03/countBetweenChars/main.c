#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_between_chars(char* word);
int count_between_chars_passed(char* word, char c);
main()
{
    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    char* word = "Programming";

    // the output should be: 6 (in this case the repeating char was 'g')
    printf("%d\n", count_between_chars(word));
    printf("%d\n", count_between_chars_passed(word, 'g'));

    return 0;
}

int count_between_chars(char* word){
    char repeatingChar = 'g';
    int foundFirst = 0;
    int foundSecond = 0;
    for (int i = 0; word[i]; ++i) {
        if(repeatingChar == word[i]) {
            foundFirst = i;
            for (i; word[i]; ++i) {
                if(repeatingChar == word[i])
                    foundSecond = i;
            }
        }
    }
    return (foundSecond - foundFirst)-1;
}

int count_between_chars_passed(char* word, char c){
    char repeatingChar = c;
    int foundFirst = 0;
    int foundSecond = 0;
    for (int i = 0; word[i]; ++i) {
        if(repeatingChar == word[i]) {
            foundFirst = i;
            for (i; word[i]; ++i) {
                if(repeatingChar == word[i])
                    foundSecond = i;
            }
        }
    }
    return (foundSecond - foundFirst)-1;
}