#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int first; long second; char third; float fourth; double fifth;

	cin >> first >> second >> third >> fourth >> fifth;
	cout << first << endl;
	cout << second << endl;
	cout << third << endl;
	cout.precision(3);
	cout << fixed << fourth << endl;
	cout.precision(9);
	cout << fixed << fifth << endl;

	return 0;
}