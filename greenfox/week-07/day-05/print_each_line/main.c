#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main ()
{

    FILE *fpointer;
    fpointer = fopen("my-file.txt", "r");
    char single_line[150];

    while(!feof(fpointer)){
        fgets(single_line, 150, fpointer);
        printf("%s", single_line);
    }

    fclose(fpointer);

    return 0;
}