#include <stdio.h>

int main() {
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    // You found the number: 8
    int storedNumber = 17;
    int input = 0;
    int found = 0;
    do{
        printf("Guess the number: ");
        scanf("%d", &input);
        if(input > storedNumber)
            printf("The stored number is lower\n");
        else if(input < storedNumber)
            printf("The stored number is higher\n");
        else
            found = 1;
    }while(found != 1);

    printf("You found the number: %d", storedNumber);
    return 0;
}