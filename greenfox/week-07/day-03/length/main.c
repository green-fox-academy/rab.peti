#include <stdio.h>
#include <string.h>

int main() {
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercise with and without using string.h functions
    char name[20];
    printf("What is your name?\n");
    scanf("%s", name);

    printf("%s\n", name);
    printf("%d\n", strlen(name));


    return 0;
}