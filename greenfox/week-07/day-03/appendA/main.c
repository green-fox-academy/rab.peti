#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* appendA(char* string);

main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string
    char input[100];
    printf("Give me a string: ");
    scanf("%s", input);
    printf("%s", appendA(input));
    return 0;
}

char* appendA(char* string){
    return strcat(string,"a");
}