#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describe the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number parameter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void write_to_file(char *path, char *word, int lines);

int main() {
    write_to_file("my-file.txt","Task done", 5);
    return 0;
}

void write_to_file(char *path, char *word, int length) {
    FILE *fptr;
    fptr = fopen(path, "w");

    for (int i = 0; i < length; ++i) {
        fprintf(fptr, "%s\n", word);
    }
    fclose(fptr);
}