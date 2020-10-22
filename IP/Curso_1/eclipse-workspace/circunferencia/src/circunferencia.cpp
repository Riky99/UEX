//============================================================================
// Name        : circunferencia.cpp
// Author      : Profesores de IP/FP
// Version     : 0.0
// Description : Cálculo de longitud y área de una circunferencia
//============================================================================

#include <iostream>
using namespace std;

const float PI = 3.1416;

int main() {

	float  radio;
	float  longitud;


	cout << "¿Radio? " << endl;
	cin >> radio;


	longitud = 2 * PI * radio;

	cout <<"Longitud: " << longitud << endl;
	cout <<"Área: "<< PI*radio*radio <<endl;



	return 0;
}
