#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int number_of_lines(FILE* file_pointer);

int main ()
{
    FILE *fpointer;
    printf("%d", number_of_lines(fpointer));
    return 0;
}

int number_of_lines(FILE* file_pointer){
    int counter = 0;
    file_pointer = fopen("my-file.txt", "r");

    if (file_pointer == NULL) {
        return 0;
    }

    char single_line[150];

    while(!feof(file_pointer)){
        fgets(single_line, 150, file_pointer);
        counter++;
    }
    fclose(file_pointer);
    return counter;
}