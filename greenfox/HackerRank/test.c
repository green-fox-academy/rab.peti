#include <stdio.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k);

int main() {
	char buffer[33];
	int a = 5; int b = 4;
	printf("%s\n", itoa(a, buffer, 2));
	printf("%s\n", itoa(b, buffer, 2));
	printf("%d\n", a&b);
	calculate_the_maximum(5, 4);
	return 0;
}

unsigned int int_to_bin(unsigned int k) {
	return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_bin(k / 2)));
}

void calculate_the_maximum(int n, int k) {
	int ANDmax = 0;
	int ORmax = 0;
	int XORmax = 0;
	for (int i = 1; i < n; ++i) {
		int j = i + 1;
		for (j; j < n + 1; ++j) {
			printf("%d. - %d.\n", i, j);
			printf("AND %d\n", i&j);
			printf("OR %d\n", i | j);
			printf("XOR %d\n", i^j);
			if ((i&j) > ANDmax && (i&j) < k)
				ANDmax = i & j;
			if ((i | j) > ORmax && (i | j) < k)
				ORmax = i | j;
			if ((i^j) > XORmax && (i^j) < k)
				XORmax = i ^ j;
			printf("---------------\n");
		}
	}
	printf("%d\n%d\n%d\n", ANDmax, ORmax, XORmax);
}