//============================================================================
// Name        : progr_geometrica.cpp
// Author      : Ricardo Lucas Fernández
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int potencia_a(int a, int b);
int potencia_b(int b);

int potencia_a(int a, int b) {

	int i;
	long long int resultado1;

	for (i=0; i<=b; i++){

		int resultado1 = 1;


		if (i==0){

			cout << 1 << ", ";

		}

		else{
			resultado1 = resultado1 * 2;
			// resultado2 = resultado1 + potencia_a(a-1);
			cout << resultado1 << ", ";
		}
	}

	return resultado1;

}

int potencia_b(int b) {


	int i;

	long long int resultado4;

	for (i=0; i<=b; i++){

		int resultado3;

		if (i==0){

			resultado3 = 1;
		}

		else{

			resultado3 = resultado3 * 2;
			resultado4 = resultado3 + (potencia_b((b-1) +1) -1);

		}
	}
	return resultado4;

}

int main() {

	int a;
	int b;

	cout << "Introduzca el limite inferior del rango: ";
			cin >> a;
	cout << "Introduzca el limite superior del rango: ";
				cin >> b;


	if (a > b) {
		cout << "EL rango introducido es incorrecto ";
	}
	else {
		potencia_a(a,b);
	}

}





