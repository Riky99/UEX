 //============================================================================
// Name        : combinatorio.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 16/17
// Copyright   : Your copyright notice
// Description : Calculo del combinatorio
//==========================================================================================
#include <iostream>
using namespace std;


// PRE = {n >= 0}
// POST = {devuelve el factorial de n
int factorial (int n) {
	int f ;
	if (n==0)
		f = 1;
	else
		f = n * factorial (n-1);
	return f;
}


/*
 * Diseño de las pruebas
 * Casos de prueba
 *   entrada -> salida esperada
 *   0!      -> 1
 *   1!      -> 1
 *   2!      -> 2
 *   5!      -> 120
 *   10!     -> 3.628.800
 */

void pruebaFactorial () {
	cout << "INICIO: pruebas del factorial "<<endl;
	// 0! es 1
	if (factorial(0)!= 1)
		cout << "Error al calcular factorial de 0"<<endl;

	// 1! es 1
	if (factorial(1)!= 1)
		cout << "Error al calcular factorial de 1"<<endl;

	// 2! es 2
	if (factorial(2)!= 2)
		cout << "Error al calcular factorial de 2"<<endl;

	// 5! es 120
	if (factorial(5)!= 120)
		cout << "Error al calcular factorial de 5"<<endl;

	//10! es 3628800
	if (factorial(10)!= 3628800)
		cout << "Error al calcular factorial de 10"<<endl;

	cout << "FIN: pruebas del factorial "<<endl<<endl;
}



// PRE = {n>=0, 0 <= m <= n}
// POST = {devuelve el coeficiente binomial (n sobre m)}
int combinatorio (int n, int m) {
	int comb; // temporal
	comb = factorial(n)/ (factorial(m) * factorial (n-m));
	return comb;
}


/*
 * Diseño de las pruebas
 * Casos de prueba
 *   entrada -> salida esperada
 *    0, 0   -> 1
 *    1, 0   -> 1
 *    1, 1   -> 1
 *    7, 0   -> 1
 *    7, 1   -> 1
 *    7, 2   -> 21
 *    7, 3   -> 35
 *    7, 4   -> 35
 *    7, 5   -> 21
 *    7, 6   -> 7
 *    7, 7   -> 1
*/

void pruebaCombinatorio () {
	cout << "INICIO: pruebas del combinatorio "<<endl;
	// (0 sobre 0) es 1
	if (combinatorio(0,0)!= 1)
		cout << "Error al calcular combinatorio(0,0)"<<endl;

	// (1 sobre 0) es 1
	if (combinatorio(1,0)!= 1)
		cout << "Error al calcular combinatorio(1,0)"<<endl;

	// (1 sobre 1) es 1
	if (combinatorio(1,1)!= 1)
		cout << "Error al calcular combinatorio(1,1)"<<endl;

	// (7 sobre 0) es 1
	if (combinatorio(7,0)!= 1)
		cout << "Error al calcular combinatorio(7,0)"<<endl;

	// (7 sobre 1) es 7
	if (combinatorio(7,1)!= 7)
		cout << "Error al calcular combinatorio(7,1)"<<endl;

	// (7 sobre 2) es 21
	if (combinatorio(7,2)!= 21)
		cout << "Error al calcular combinatorio(7,2)"<<endl;

	// (7 sobre 3) es 35
	if (combinatorio(7,3)!= 35)
		cout << "Error al calcular combinatorio(7,3)"<<endl;

	// (7 sobre 4) es 35
	if (combinatorio(7,4)!= 35)
		cout << "Error al calcular combinatorio(7,4)"<<endl;

	// (7 sobre 5) es 21
	if (combinatorio(7,5)!= 21)
		cout << "Error al calcular combinatorio(7,5)"<<endl;

	// (7 sobre 6) es 7
	if (combinatorio(7,6)!= 7)
		cout << "Error al calcular combinatorio(7,6)"<<endl;

	// (7 sobre 7) es 1
	if (combinatorio(7,7)!= 1)
		cout << "Error al calcular combinatorio(7,7)"<<endl;

	cout << "FIN: pruebas del combinatorio "<<endl<<endl;
}



void pruebas() {
	 cout << "PRUEBAS - inicio"<<endl;
	 pruebaFactorial();
	 pruebaCombinatorio();
	 cout << "PRUEBAS - fin"<<endl;
}


int main() {


	pruebas();

	cout << factorial(4)<<endl;
	int n, m;
	cout << "Introduce el número total de elementos (n):"<<endl;
	cin >> n;
	cout << "Introduce el número de elementos en cada grupo (m):"<<endl;
	cin >> m;
	cout << "El número de combinaciones de "<<n<<" elementos ";
	cout <<"tomados de "<<m<<" en "<<m<<" es ";
	cout << combinatorio(n, m)<<endl;

	return 0;
}
