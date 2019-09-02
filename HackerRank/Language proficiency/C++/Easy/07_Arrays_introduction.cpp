#include "pch.h"

#include <iostream>
int main() {
	int N;
	std::cin >> N;
	int *A = new int[N];
	for (int i = 0; i < N; i++)
	{
		std::cin >> A[i];
	}
	for (int j = N - 1; j >= 0; j--)
	{
		std::cout << A[j] << ' ';
	}

	delete[] A;
	return 0;
}