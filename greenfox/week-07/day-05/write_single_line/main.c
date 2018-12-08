#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{
    FILE *fpointer;
    fpointer = fopen("my-file.txt", "w");

    fputs("Peter Rab", fpointer);

    fclose(fpointer);
    return 0;
}