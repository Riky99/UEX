//============================================================================
// Name        : raices.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : 1.0
// Description : Programa para calcular las raíces reales de una ecuación
//               de segundo grado
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

// PRE = { }
// POST = {devuelve false si a es 0 o el discriminante es negativo,
//         y true en el resto de casos}
bool tiene2RaicesReales (float a, float b, float c) {
	bool tiene2Raices;

	if ((a==0)||(pow(b,2)-4*a*c < 0))
			tiene2Raices = false;
	else
			tiene2Raices = true;

	return tiene2Raices;
}

// Este módulo de pruebas escribirá un mensaje inicial y otro final
// Si alguna de las pruebas va mal, escribirá también para qué valores falla
// Si no escribe nada entre el mensaje inicial y final, pasa las pruebas
/*
 * Diseño de las pruebas
 * Casos de prueba
 *  a      b      c      Resultado
 * --------------------------------------
 *	0      3.5    1.1    false		a = 0, discriminante positivo
 *									a = 0, discriminante negativo es imposible
 *	0      0      1.1    false		a = 0, discriminante 0
 *	2      3.5    1.1    true		a!= 0, discriminante positivo
 *	5      3.5    1.1    false		a!= 0, discriminante negativo
 *	3	   6.0    2.5    true		a!= 0, discriminante positivo
 * -2     -3.0   -0.5    true		a!= 0, discriminante positivo
 *
 */

void pruebaTiene2RaicesReales () {
	cout << "INICIO: Prueba tiene2RaicesReales "   <<endl;

	if (tiene2RaicesReales(0, 3.5, 1.1) == true)
		cout << "Error con a = 0, b = 3.5, c = 1.1"<<endl;
	if (tiene2RaicesReales(0, 0, 1.1) == true)
		cout << "Error con a = 0, b = 0, c = 1.1"  <<endl;
	if (tiene2RaicesReales(2, 3.5, 1.1) == false)
		cout << "Error con a = 2, b = 3.5, c = 1.1"<<endl;
	if (tiene2RaicesReales(5, 3.5, 1.1) == true)
		cout << "Error con a = 5, b = 3.5, c = 1.1"<<endl;
	if (tiene2RaicesReales(3, 6.0, 2.5) == false)
		cout << "Error con a = 3, b = 6,  c = 2.5 "<<endl;
	if (tiene2RaicesReales(-2, -3, -0.5) == false)
		cout << "Error con a = -2, b = -3, c = -0.5"<<endl;

	cout << "FIN: Prueba tiene2RaicesReales       "<<endl<<endl;
}

// PRE = {la ecuación ax^2+b+c=0 tiene 2 raíces reales}
// POST= {el resultado es (-b+sqrt(b^2-4ac))/2a}

float raizMas (float a, float b, float c) {
	float discriminante;
	float x;

	discriminante = pow(b, 2) - 4 * a * c;
	x = (- b + sqrt(discriminante)) / (2 * a);
	return x;
}

/*
 * Diseño de las pruebas
 * En todas las pruebas el discriminante debe ser no negativo
 * a = 0 - NO CUMPLE LA PRECONDICIÓN
 * Casos de prueba
 *  a		b		c      Resultado esperado
 * --------------------------------------
 *  2        3.5     1.1    -0.410646
 * 	3		 6		 2.5	-0.591752
 * -2		-3		-0.5	-1.30902
 *  2        4.0	 2.0    -1
 */

void pruebaRaizMas() {

	cout << "INICIO: prueba raizMas " << endl;

	cout << "\tCaso1: 2, 3.5, 1.1 debe dar: -0.410646 y da: "<<raizMas(2, 3.5, 1.1) <<endl;
	cout << "\tCaso2: 3, 6, 2.5 debe dar: -0.591752 y da:   "<<raizMas(3,   6, 2.5) <<endl;
	cout << "\tCaso3: -2, -3, -0.5 debe dar: -1.30902 y da: "<<raizMas(-2, -3, -0.5)<<endl;
	cout << "\tCaso4: 2, 4.0, 2.0 debe dar: -1 y da:        "<<raizMas(2,  4.0, 2.0)<<endl;


	cout << "FIN: prueba raizMas " << endl<<endl;
}

// PRE = {la ecuación ax^2+b+c=0 tiene 2 raíces reales}
// POST= {el resultado es (-b-sqrt(b^2-4ac))/2a}
float raizMenos(float a, float b, float c) {
	float discriminante;
	float x;

	discriminante = pow(b, 2) - 4 * a * c;
	x = (- b - sqrt(discriminante)) / (2 * a);
	return x;
}

/*
 * Diseño de las pruebas
 * Casos de prueba
 * En todas las pruebas el discriminante debe ser no negativo
 * a = 0 - NO CUMPLE LA PRECONDICIÓN
 *
 *  a		b		c      Resultado esperado
 * --------------------------------------
 *   2       3.5     1.1    -1.33933
 *	 3		 6		 2.5	-1.40825
 *  -2       3      -0.5	 1.30902
 *   2       4.0	 2.0    -1
 *
 */

void pruebaRaizMenos() {
	const float ERROR = 0.0001;
	cout << "INICIO: prueba raizMenos " << endl;

	if (abs(raizMenos(2, 3.5, 1.1) - (-1.33933)) > ERROR)
			cout << "Error con 2, 3.5, 1.1"<<endl;
	if (abs(raizMenos(3, 6, 2.5) - (-1.40825)) > ERROR)
		cout << "Error con 3, 6, 2.5"<<endl;
	if (abs(raizMenos(-2, 3, -0.5) - (1.30902))> ERROR)
			cout << "Error con -2, 3, -0.5 "<<endl;
	if (abs(raizMenos(2, 4.0, 2.0) -(-1))      > ERROR)
		cout << "Error con 2, 4.0, 2.0 "<<endl;

	cout << "FIN: prueba raizMenos " << endl<<endl;
}


void pruebas() {
	cout << "INICIO de juegos de pruebas"<<endl<<endl;
	pruebaTiene2RaicesReales();
	pruebaRaizMas();
	pruebaRaizMenos();
	cout << "FIN de juegos de pruebas"<<endl<<endl;
}

int main() {

	pruebas();


	float a,  b,  c; // datos de entrada
	float x1, x2;    // resultados

	cout << "Para la ecuación de segundo grado ax² + bx + c = 0" <<endl;
	cout << "Introduce el coeficiente a:" <<endl;
	cin >> a;
	cout << "Introduce el coeficiente b:" <<endl;
	cin >> b;
	cout << "Introduce el coeficiente c:" <<endl;
	cin >> c;
	if (tiene2RaicesReales(a, b, c)==true) {
		x1 = raizMas   (a, b, c);
		x2 = raizMenos (a, b, c);
		cout << "Raices de la ecuación "<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
		cout << "Raíz 1: " << x1 << endl;
		cout << "Raíz 2: " << x2 << endl;
	}
	else {
		cout << "Esta ecuación no tiene 2 raíces reales."<<endl;
	    cout << "No las puedo calcular" <<endl;
	}

	return 0;
}
