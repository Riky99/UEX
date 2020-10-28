//============================================================================
// Name        : progr_geometrica.cpp
// Author      : Ricardo Lucas Fernández
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

//Sale "Es correcto" porque los modulos a y b devuelven el mismo valor (solo está comprobando las dos funciones y
// lo muestra porque lo he metido en el modulo prueba())
#include <iostream>
using namespace std;

// Pre -> i<e
// POS -> Calcula la potencia (2⁰, 2¹, 2²,etc)

int exponente(int b, int e) {

	int result = 1;
	int i;

	for (i = 0; i < e; i++) {

		result = result * b;

	}

	return result;
}

// Pre -> i<=n
// Pos -> Calcula la suma de las potencias anteriores
int geometrica_a(int n) {

	int resultadosum;
	resultadosum = 0;

	for (int i = 0; i <= n; i++) {

		resultadosum = resultadosum + exponente(2, i);

	}

	return resultadosum;
}
// Pre -> i <= n
// Pos -> Calcula la suma de las potencias anteriores
int geometrica_b(int n) {

	int resultadosum2;
	resultadosum2 = 0;

	resultadosum2 = exponente(2, n+1) -1;

	return resultadosum2;
}

// Pre -> i < num && bandera == true && num % i == 0
// Pos -> Nos dice los primos de uno de los modulos anteriores
bool esPrimo(int num) {

	bool bandera = true;
	int i = 2;

	while (i < num && bandera == true) {

		if (num % i == 0) {

			bandera = false;
		}

		i++;
	}

	return bandera;
}
// Pre -> A == B
// Pos -> comprueba que ambos devuelven el mismo valor y lo muestra por pantalla
bool prueba(int n) {

	int A, B;
	A = esPrimo(geometrica_a(n));
	B = esPrimo(geometrica_b(n));

	if (A == B) {

		cout<< "Es correcto";
	}

	else {

		cout << "Es incorrecto";
	}

	return true;
}


// Pre ->	0 <= inf <=supe <= 30
// Pos ->	muestra por pantalla la lista de todos los números primos obtenidos sumando los n primeros elementos de la progresión
//			geométrica de razón 2 para valores de n en el rango [a, b]

// la mas eficiente es la b ya que solo tiene que recorrer un bucle (el de exponente), el a tiene que recorrer dos bucles.
int main() {

	int inf;
	int supe;
	int n;

	cout << "Introduzca el limite inferior del rango: ";
		cin >> inf;

	cout << "Introduzca el limite superior del rango: ";
		cin >> supe;

	if (inf < 0 || inf > supe){

		cout << "El rango introducido es incorrecto ";

			}

	else {

	for(int i = inf; i <= supe; i++){

		if (esPrimo(geometrica_b(i)) == true && geometrica_b(i) != 1) {

				cout << geometrica_b(i) << ", ";
			}

		}
	}

	prueba(n);
	return 0;
}

/* Pruebas realizadas:
 * Prueba 1
 * Introduzca el limite inferior del rango: 0
	Introduzca el limite superior del rango: 30
3, 7, 31, 127, 8191, 131071, 524287, 2147483647, Es correcto

	Prueba2
	Introduzca el limite inferior del rango: 1
Introduzca el limite superior del rango: 20
3, 7, 31, 127, 8191, 131071, 524287, Es correcto

Prueba3
Introduzca el limite inferior del rango: 5
Introduzca el limite superior del rango: 15
127, 8191, Es correcto

Prueba4
Introduzca el limite inferior del rango: -2
Introduzca el limite superior del rango: 15
El rango introducido es incorrecto Es correcto

Prueba5
Introduzca el limite inferior del rango: 15
Introduzca el limite superior del rango: 10
El rango introducido es incorrecto Es correcto

Sale "Es correcto" porque los modulos a y b devuelven el mismo valor (solo está comprobando las dos funciones y
lo muestra porque lo he metido en el modulo prueba())
 */

