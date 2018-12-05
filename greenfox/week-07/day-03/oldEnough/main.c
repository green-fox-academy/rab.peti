#include <stdio.h>

int main() {
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary
    int input = 0;
    printf("How old are you?\n");
    scanf("%d", &input);
    if(input >= 18)
        printf("You are old enough to buy alcohol.\n");
    else
        printf("You are not old enough to buy alcohol.\n");
    return 0;
}