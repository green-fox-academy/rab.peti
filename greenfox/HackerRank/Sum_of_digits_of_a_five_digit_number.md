```C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    printf("%d", sumDigit(n));
    return 0;
}

int sumDigit(int n)
{
    if(n == 0)
        return 0;
    return n % 10 + sumDigit(n/10);
}