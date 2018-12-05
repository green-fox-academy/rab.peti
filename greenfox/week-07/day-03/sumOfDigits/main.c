#include <stdio.h>

int sumOfDigits(int n);

int equalSumOfDigits(int numberOne, int numberTwo);

int main() {
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int input1 = 0;
    int input2 = 0;
    printf("Give me a number:\n");
    scanf("%d", &input1);
    printf("Give me another number:\n");
    scanf("%d", &input2);

    printf("%d\n", equalSumOfDigits(input1, input2));
    return 0;
}

int sumOfDigits(int n) {
    if (n <= 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int equalSumOfDigits(int numberOne, int numberTwo) {
    if (sumOfDigits(numberOne) == sumOfDigits(numberTwo))
        return 1;
    else
        return 0;
}