//============================================================================
// Name        : Celsius.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

	const float constante1 = 9.5;
	const float constante2 = 32;


int main() {

	float farenheit;
	float celsius;

	cout << "grados_farenheit" << endl;
	cin >> farenheit;

	farenheit = constante1 * celsius + constante2;

	cout << "grados_farenheit: "<< farenheit << endl;
	return 0;
}
