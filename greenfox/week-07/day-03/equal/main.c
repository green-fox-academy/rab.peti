#include <stdio.h>

int intComparator(int input1, int input2);

int main() {
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise
    int input1 = 0;
    int input2 = 0;
    printf("Give me a number:");
    scanf("%d", &input1);
    printf("Give me a second number:");
    scanf("%d", &input2);

    intComparator(input1, input2);
    return 0;
}

int intComparator(int input1, int input2){
    if(input1 == input2)
        return 1;
    else
        return 0;
}