#include <iostream>

int main() {
    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[] = {3,4,5,6,7};
    int substitute[(sizeof(aj) / sizeof(aj[0]))];

    for (int i = (sizeof(aj) / sizeof(aj[0])) - 1; i >= 0; --i)
    {
        substitute[i] = aj[i];
    }

    for (int j = (sizeof(aj) / sizeof(aj[0])) - 1; j >= 0; --j)
    {
        aj[j] = substitute[j];
        std::cout << aj[j] << std::endl;
    }


    return 0;
}