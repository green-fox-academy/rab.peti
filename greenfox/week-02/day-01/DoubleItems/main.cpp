#include <iostream>

int main() {
    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList[] = {3,4,5,6,7};

    for (int i = 0; i < sizeof(numList) / sizeof(numList[0]); ++i)
    {
        numList[i] = numList[i] * 2;
    }

    return 0;
}