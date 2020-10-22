//============================================================================
// Name        : Divisores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int divisores(int n) {
    int f;
	int i;
	f = 0;
	i = 1;

		while (i <= n) {

			 if (n % i == 0) {

				 f = f + i;
			 }

			}

			i = i + 1;

	cout << "No es divisor" << endl;

	return f;
}

int main() {

	int n;
	int l;

		l = n-1;
		n = n * l;

	return 0;
}
