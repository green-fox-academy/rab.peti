#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "string.h"

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

int percentile(int *matrix, int size, int percentile);

int main() {
    int array[2][3] = {{3, 5, 4},
                       {2, 1, 0}};
    int row_size = sizeof(array) / sizeof(array[0]);
    int column_size = sizeof(array[0]) / sizeof(array[0][0]);
    int *matrix = (int *) calloc((size_t) (row_size * column_size), sizeof(int));

    for (int k = 0; k < row_size; ++k) {
        for (int j = 0; j < column_size; ++j) {
            *(matrix + k * column_size + j) = array[k][j];
        }
    }

    printf("80th percentile: %d\n", percentile(matrix, row_size * column_size, 80));
    printf("90th percentile: %d\n", percentile(matrix, row_size * column_size, 90));
    return 0;
}

int percentile(int *matrix, int size, int percentile) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (matrix[i] > matrix[j]) {
                int temp = matrix[i];
                matrix[i] = matrix[j];
                matrix[j] = temp;
            }
        }
    }
    int percentile_size = (int) floor((percentile / 100.0) * size);
    return matrix[percentile_size];
}