#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

char* string_splitter(char* array);
int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    gets(string);
    string_splitter(string);
    return(0);
}

char* string_splitter(char* array){
    printf ("Splitting string \"%s\" into tokens:\n",array);
    char* pch = strtok (array," ");
    while (pch != NULL)
    {
        printf ("%s\n",pch);
        pch = strtok (NULL, " ");
    }
    return 0;
}