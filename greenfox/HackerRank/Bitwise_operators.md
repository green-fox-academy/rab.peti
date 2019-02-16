```C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int ANDmax = 0;
    int ORmax = 0;
    int XORmax = 0;
    for(int i = 1;i < n;++i){
        int j = i+1;
        for(j;j < n+1;++j){
            if((i&j) > ANDmax && (i&j) < k)
                ANDmax = i&j;
            if((i|j) > ORmax && (i|j) < k)
                ORmax = i|j;
            if((i^j) > XORmax && (i^j) < k)
                XORmax = i^j;
        }
    }
    printf("%d\n%d\n%d\n",ANDmax, ORmax, XORmax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}