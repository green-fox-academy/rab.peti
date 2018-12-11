#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int* pointer = NULL;
    pointer = (int *)calloc(10, sizeof(int));
    printf("Give me 10 number:");
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&pointer[i]);
    }
    int sum = 0;
    for (int j = 0; j < 10; ++j) {
        sum += pointer[j];
    }
    realloc(pointer,sum * sizeof(int));
    for (int k = 1; k <= sum; ++k) {
        pointer[k] = k;
        printf(" %d ", pointer[k]);
    }
    free(pointer);

    return 0;
}