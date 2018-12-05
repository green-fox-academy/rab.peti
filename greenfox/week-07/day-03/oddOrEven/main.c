#include <stdio.h>

int oddOrEven(int input);

int main() {
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)
    int input = 0;
    printf("Give me a number:\n");
    scanf("%d", &input);

    oddOrEven(input);

    return 0;
}

int oddOrEven(int input) {
    if (input % 2 == 0)
        return 0;
    else
        return 1;
}