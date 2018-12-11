#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main() {
    int *pointer = NULL;
    int *pointer2 = NULL;
    pointer = (int *) calloc(10, sizeof(int));
    pointer2 = (int *) calloc(10, sizeof(int));
    int even = 0;
    int odd = 1;
    for (int i = 0; i < 10; ++i) {
        pointer[i] = even;
        pointer2[i] = odd;
        even += 2;
        odd += 2;
    }
    pointer = (int *) realloc(pointer, 20 * sizeof(int));
    for (int j = 0; j < 10; ++j) {
        pointer[j + 10] = pointer2[j];
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (pointer[j] < pointer[i]) {
                int tmp = pointer[i];
                pointer[i] = pointer[j];
                pointer[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 20; i++) {
        printf(" %d ", pointer[i]);
    }
    free(pointer);
    free(pointer2);
    return 0;
}