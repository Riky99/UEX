//============================================================================
// Name        : n_catalan.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorial1 (int);
int factorial2 (int);
int factorial3 (int);
int catalan (int, int);

int factorial1 (int n1) {

	if (n1 == 0){
		return 1;
	}
	else {
		n1 = 2 * n1 * factorial1(n1-1);
	}

	return n1;
}

int factorial2 (int n2) {

	if (n2 == 0){
		return 1;
	}
	else {
		n2 = n2 * factorial2(n2-1);

	}
	return n2;

}

void factorial3 (int n3) {

	if (n3 == 0) {
		return 1;
	}
}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
