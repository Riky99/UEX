//============================================================================
// Name        : Nº_Catalan.cpp
// Author      : Ricardo Lucas Fernández
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// PRE: {n > 0}
// POS: Calculo del numero de catalan de un número entero no negativo
// POS: {
	// C (0) = 1
	// C (n) = ( (n*(n-1)!)
//}


long long int factorial (int);
int catalan (int, int);

int main() {

	int numero1;
	int numero2;

	cout << "Números de Catalan" <<endl;
	cout << "Dime un extremo del rango: " <<endl;
			cin >> numero1;
	cout << "Dime el otro extremo del rango: " <<endl;
			cin >> numero2;

			if(numero1 > numero2){

				int aux = numero1;
				numero1 = numero2;
				numero2 = aux;

			}

	catalan(numero1, numero2);

}

long long int factorial (int n2) {

	long long int f;
	int i;
	f = 1;

	for (i=1; i<=n2; i++) {

		f = f * i;
	}

	return f;
}

int catalan(int numero1, int numero2) {

	int n;
	int i;
	long long int resultado;

	n = numero1;

	for(i=n; i<=numero2; i++){

		if (numero2 == 0) {
			cout << "El número " << 0 << " de Catalan es " << 1 <<endl;

		}

		else {
			resultado = factorial(2*i) / ( factorial(i) * factorial(i+1) );
			cout << "El número " << i << " de Catalan es " << resultado <<endl;

		}

	}

	return resultado;

}

/* Pruebas realizadas:
 *
 *prueba1:
 *Números de Catalan
Dime un extremo del rango:
0
Dime el otro extremo del rango:
10
El número 0 de Catalan es 1
El número 1 de Catalan es 1
El número 2 de Catalan es 2
El número 3 de Catalan es 5
El número 4 de Catalan es 14
El número 5 de Catalan es 42
El número 6 de Catalan es 132
El número 7 de Catalan es 429
El número 8 de Catalan es 1430
El número 9 de Catalan es 4862
El número 10 de Catalan es 16796
 *
 *prueba 2:
 *Números de Catalan
Dime un extremo del rango:
2
Dime el otro extremo del rango:
9
El número 2 de Catalan es 2
El número 3 de Catalan es 5
El número 4 de Catalan es 14
El número 5 de Catalan es 42
El número 6 de Catalan es 132
El número 7 de Catalan es 429
El número 8 de Catalan es 1430
El número 9 de Catalan es 4862

prueba3:
Números de Catalan
Dime un extremo del rango:
9
Dime el otro extremo del rango:
2
El número 2 de Catalan es 2
El número 3 de Catalan es 5
El número 4 de Catalan es 14
El número 5 de Catalan es 42
El número 6 de Catalan es 132
El número 7 de Catalan es 429
El número 8 de Catalan es 1430
El número 9 de Catalan es 4862

prueba4:
Números de Catalan
Dime un extremo del rango:
6
Dime el otro extremo del rango:
6
El número 6 de Catalan es 132
 */
