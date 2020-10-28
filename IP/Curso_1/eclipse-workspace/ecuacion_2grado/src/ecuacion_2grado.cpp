//============================================================================
// Name        : ecuacion_2grado.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

float ecuacion2Grado_p (float a, float b, float c) {

	float positivo;

	float datos;

	datos = (b*b)-(4*a*c);

	if (datos >= 0) {

		positivo = (-b + sqrt(datos)) / 2 * a;

	} else {

		cout << "La raiz es negativa. "<<endl;

	}



	return positivo;

}

float ecuacion2Grado_n (float a, float b, float c) {

	float negativo;

	float datos = (b*b) - (4*a*c);

	if (datos > 0) {

		negativo = (-b - sqrt(datos)) / 2 * a;

	} else {

		cout << "La raiz es negativa. "<<endl;
	}

	return negativo;

}

int main() {

	float a;
	float b;
	float c;

	cout << "Programa que calcule las raices de una ecuación de 2ªgrado: "<<endl;

	cout << "Introduce el valor de a: "<<endl;
	cin >> a;

	cout << "Introduce el valor de b: "<<endl;
	cin >> b;

	cout << "Introduce el valor de c: "<<endl;
	cin >> c;


	cout << "Raiz 1 es : " << ecuacion2Grado_p (a,b,c) <<endl;
	cout << "Raiz 2 es : " << ecuacion2Grado_n (a,b,c) <<endl;
}

