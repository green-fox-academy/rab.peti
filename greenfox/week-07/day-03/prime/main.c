#include <stdio.h>

int isPrime(int input);

int main() {
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)
    int input = 0;
    printf("Give me a number:\n");
    scanf("%d", &input);

    isPrime(input);
    return 0;
}

int isPrime(int input){
    if (input == 2)
        return 1;
    if (input == 3)
        return 1;
    if (input % 2 == 0)
        return 0;
    if (input % 3 == 0)
        return 0;

    int i = 5;
    int j = 2;

    while (i * i <= input) {
        if (input % i == 0)
            return 0;

        i += j;
        j = 6 - j;
    }
    return 1;
}