#include <iostream>

int lookForValue(int array[], int arrayLength, int number) {
    bool found = false;
    int index = 0;
    for (int i = 0; i < arrayLength; ++i) {
        if (array[i] == number && !found) {
            found = true;
            index = i;
        }
    }
    if (!found)
        return 0;
    else
        return index;

}

int main() {
    // Create a function which takes an array (and it's length) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int array[5] = {1, 3, 5, 7, 9};
    int arraySize = sizeof(array) / sizeof(array[0]);

    std::cout << lookForValue(array, arraySize, 9);

    return 0;
}