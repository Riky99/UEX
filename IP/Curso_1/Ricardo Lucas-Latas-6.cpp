//============================================================================
// Name        : Latas-6.cpp
// Author      : Ricardo Lucas Fernández
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Pre -> a>0
//Post -> Módulo recursivo para calcular el término n-ésimo
int triangular_a(int a) {

	int result_a;

	if (a == 1) {

		result_a = 1;

	} else

		result_a = a + triangular_a(a - 1);

	return result_a;
}

//Pre -> b > 0
//Post -> Un módulo que devuelva el término n-ésimo utilizando la solución b
int triangular_b(int b) {

	int result_b;

	if (b == 1) {

		result_b = 1;

	} else {

		result_b = (b * (b + 1)) / 2;

	}

	return result_b;
}

//Pre -> latas >= 0 || latas < 1275
//Post -> Un módulo que rellene un vector con los primeros 50 términos de la sucesión de números
//triangulares
// Ademas en este modulo esta la solucion de problema principal
int vector(int latas) {

	int max = 50; //vector
	int vector[max];
	int i; //indice
	bool bandera = false; //bandera

	vector[1] = 1;

	if (latas <= 1) {

		vector[1] = 1;

	} else {

		for (i = 2; i <= max; i++) {

			vector[i] = vector[i - 1] + i;
		}
	}

	i = 1;

	while (i <= max && bandera == false) {

		if (vector[i] == latas) {

			bandera = true;

		}
		i = i + 1;

		if (vector[i] > latas) {
			cout << "Con " << latas
					<< " latas se puede construir una piramide de " << i - 1
					<< " filas" << " y sobran " << latas - vector[i - 1]
					<< endl;

			bandera = true;

		}

	}

	return 0;
}

int main() {

	int latas;

	cout << "Introduce el número de latas: " << endl;
	cin >> latas;

	if (latas <= 0 || latas > 1275) {

		cout << "Dato incorrecto" << endl;

	} else {

		vector(latas);

	}

	return 0;
}
