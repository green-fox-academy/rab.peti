#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char string[50];
    char sentence[50];
    scanf("%c%s\n%[^\n]%*c", &ch, string, sentence);
    printf("%c\n%s\n%s\n", ch, string, sentence);

    return 0;
}