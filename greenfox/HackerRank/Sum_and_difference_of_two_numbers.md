```C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int m = 0;
    float x = 0;
    float y = 0;

    scanf("%d %d", &n, &m);
    scanf("%f %f", &x, &y);

    printf("%d %d\r\n%.1f %.1f", n + m,n - m, x + y, x - y);
    
    return 0;
}
