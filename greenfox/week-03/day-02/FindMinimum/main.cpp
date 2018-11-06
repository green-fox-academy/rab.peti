#include <iostream>

int* findMinimum(int array[], int arrayLength)
{
    int minimum = array[0];
    int* minPtr = nullptr;
    for (int i = 0; i < arrayLength; ++i) {
        if(array[i] < minimum)
        {
            minimum = array[i];
            minPtr = array + i;
        }
    }
    // array[i] = *(array + i);
    return minPtr;
}

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << findMinimum(numbers,arrayLength);

    return 0;
}