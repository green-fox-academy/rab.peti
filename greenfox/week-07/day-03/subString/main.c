#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isSubString(char* string1, char* string2);

main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the shorter string is a substring of the longer one and
    // returns 0 otherwise
    // If the two strings has the same length than the function should return -1
    char input1[100];
    char input2[100];
    printf("Give me a string:\n");
    scanf("%s", input1);
    printf("Give me another string:\n");
    scanf("%s", input2);
    printf("%d", isSubString(input1,input2));
    return 0;
}

int isSubString(char* string1, char* string2){
    if(strlen(string1) > strlen(string2)) {
        if (strstr(string1, string2) != NULL) {
            printf("String1 is longer and contains string2\n");
            return 1;
        } else {
            printf("String1 is longer and doesn't contain string2\n");
            return 0;
        }
    }else if(strlen(string1) < strlen(string2)){
        if (strstr(string2, string1) != NULL) {
            printf("String2 is longer and contains string1\n");
            return 1;
        } else {
            printf("String2 is longer and doesn't contain string1\n");
            return 0;
        }
    }else if(strlen(string1) == strlen(string2)){
        return -1;
    }else{
        return 0;
    }
}