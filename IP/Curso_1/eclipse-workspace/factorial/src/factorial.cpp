//============================================================================
// Name        : factorial.cpp
// Author      : Profesiores de la asignatura IP/FP
// Version     :
// Copyright   : Your copyright notice
// Description : Cálculo del factorial
//============================================================================

#include <iostream>
using namespace std;

// PRE:  { n >0 }
// DESC: { cálculo   del   factorial   de   un   número   entero   no negativo }
// POST: { 0! = 1
//         n! = n * (n-1)! }

int factorial(int n) {
    int f; // rol acumulador
	int i; // rol indice 1..n
	f = 1;
	i = 1;
	while (i <= n) {
		f = f * i;
		i = i + 1;
	}
	return f;
}

/*
 *  casos de prueba
 *           entrada      salida esperada
 *  caso 1     0            1
 *  caso 2     2            1
 *  caso 3     5            120
 *  caso 4     10           3628800
 *  caso 5     20           2432902008176640000
 */
void pruebasFactorial () {
	cout << "factorial - inicio pruebas"<<endl;
	// 0! es 1
	if (factorial(0)!=1)
		cout << "Error al calcular factorial de 0"<<endl;

	// 1! es 1
	if (factorial(1)!=1)
		cout << "Error al calcular factorial de 1"<<endl;

	// 2! es 2
	if (factorial(2)!=2)
		cout << "Error al calcular factorial de 2"<<endl;

	// 5! es 120
	if (factorial(5)!=120)
		cout << "Error al calcular factorial de 5"<<endl;

	//10! es 3628800
	if (factorial(10)!=3628800)
		cout << "Error al calcular factorial de 10"<<endl;

	//20! es 2432902008176640000
	if (factorial(20)!=2432902008176640000)
		cout << "Error al calcular factorial de 20"<<endl;

	cout << "factorial - fin pruebas"<<endl;
}

// PRE:{ n>0 }
// muestra los factoriales entre 1 y el valor de n
void mostrarFactoriales( int n){

	int i; // Rol indice

	for ( i = 0; i< n; i++){
		cout << " El factorial de "<< i <<" es "<< factorial (i)<< endl;
	}
}

int main() {
	pruebasFactorial();
	int n;
	n = 25;
	mostrarFactoriales(n);
	return 0;
}
