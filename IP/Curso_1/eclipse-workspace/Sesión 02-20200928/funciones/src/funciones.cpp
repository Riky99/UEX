//============================================================================
// Name        : funciones.cpp
// Author      : Profesores de la asignatura
// Version     : 0.0
// Description : Ejemplos de llamadas a funciones predefinidas
//============================================================================

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	float x, y, z;
	cout << "Ejemplos de funciones de la biblioteca <cmath>" << endl;
    cout << endl;
    cout << "A cada función se le debe pasar el número de parámetros que corresponda" << endl;
    cout << "La raíz cuadrada de 16 es " << sqrt(16) << endl;
    cout << endl;
    cout << "Cada uno de los parámetros tiene un significado en la llamada" << endl;
	cout << "El resultado de elevar 2 a 3 es " << pow(2, 3) << endl;
	cout << "El resultado de elevar 3 a 2 es " << pow(3, 2) << endl;
	cout << endl;
	cout << "Muchas funciones matemáticas están pensadas para diferentes tipos de datos" << endl;
	cout << "La raíz cuadrada de 147.23 es " << sqrt(147.23) << endl;
	cout << "El resultado de elevar 147.23 a 0.5 es "<< pow(147.23, 0.5) << endl;
	cout << "El resultado de elevar 2.5 a 3.1 es "<< pow(2.5, 3.1) << endl;
	cout << endl;
	cout << "Una llamada a una función se puede poner" << endl;
	cout << "allí donde se pueda poner un valor del tipo devuelto"<< endl;
	x = 3.1416;
	y = floor(x);
	z = ceil(x);
	cout << "El valor " << x << " está entre " << y << " y " << z << endl;
    cout << "El resultado de 4 elevado a (2 elevado a 3) es " << pow(4, pow(2,3)) << endl;
    cout << "El resultado de (4 elevado a 2) elevado a 3 es " << pow(pow(4, 2),3) << endl;

    cout << endl;
	cout << "Ejemplos de funciones de la biblioteca <cstdlib>" << endl;
	cout << endl;
    cout << "El valor de la constante RAND_MAX es "<< RAND_MAX << endl;
    cout << "Los números pseudoaleatorios se generan entre 0 y "<<RAND_MAX <<endl;
    cout << "La función srand sirve para poner el valor de la semilla que genera los valores pseudoaelatorios" << endl;
    srand(1);
    cout << rand() << " , " << rand() << " , " << rand() <<  " , " << rand() << endl;
    cout << "Si cambia la semilla, cambia la secuencia" << endl;
    srand(2);
    cout << rand() << " , " << rand() << " , " << rand() <<  " , " << rand() << endl;
    cout << "Pero con la misma semilla siempre se genera la misma secuencia"<<endl;
    srand(1);
    cout << rand() << " , " << rand() << " , " << rand() <<  " , " << rand() << endl;
    cout << "Por eso es bueno que se inicie la semilla con un valor distinto cada vez que se ejecute el programa" << endl;
    srand(time(NULL));
    cout << rand() << " , " << rand() << " , " << rand() <<  " , " << rand() << endl;
    cout << "¿Y si queremos generar los valores de, por ejemplo, un dado? "<<endl;
    cout << rand()%6+1 << " , " << rand()%6+1 << " , " << rand()%6+1 <<  " , " << rand()%6+1 << endl;
    return 0;
}
