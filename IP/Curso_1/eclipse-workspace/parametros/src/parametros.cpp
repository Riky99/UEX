//============================================================================
// Name        : parametros.cpp
// Author      : Profesores de Introducción a la Programación
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void intercambiar1 (int x, int y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
}

void intercambiar2 (int &x, int &y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
}

void intercambiar3 (int &x, int y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
}


int main() {
	int x = 1;
	int y = 2;
	cout << "Inicialmente tenemos  => x = " << x << "; y = " << y << endl;
	intercambiar1 (x,y);
	cout << "Tras ejecutar intercambiar1 => x = " << x << "; y = " << y << endl;
	intercambiar2 (x,y);
	cout << "Tras ejecutar intercambiar2 => x = " << x << "; y = " << y << endl;
	intercambiar3 (x,y);
	cout << "Tras ejecutar intercambiar3 => x = " << x << "; y = " << y << endl;
	return 0;
}
