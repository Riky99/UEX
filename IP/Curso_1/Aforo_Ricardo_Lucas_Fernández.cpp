//============================================================================
// Name        : Aforo.cpp
// Author      : 
// Version     :
// Copyright   :
// Description : Cálcula si el aforo del aula es suficiente o no.
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n_plazas;
	int por_max;
	int n_estudiantes;
	int result_aforo;
	int plazas_sobran;
	int plazas_faltan;

		cout << "Programa para calcular si el aforo es suficiente."<<endl;

		cout << "Introduzca el número de plazas del aula: "<<endl;
			cin >> n_plazas;

		cout << "Introduzca el porcentaje máximo de ocupación: "<<endl;
			cin >> por_max;

		cout << "Introduzca el número de estudiantes del grupo: "<<endl;
			cin >> n_estudiantes;

		result_aforo = (por_max * n_plazas) / 100;

		

		plazas_faltan = n_estudiantes - result_aforo;

			if (result_aforo >= n_estudiantes) {

				cout << "El aforo del aula es suficiente para el grupo. Sobran "<< plazas_sobran << " " << "plazas." <<endl;
					cin >> plazas_sobran;
			}

			if (result_aforo < n_estudiantes) {

				cout << "El aforo del aula no es suficiente para el grupo. Faltan "<< plazas_faltan << " " << "plazas." <<endl;
					cin >> plazas_faltan;
			}
	return 0;
}

/* Pruebas Realizadas:
 * 1.- Programa para calcular si el aforo es suficiente.
Introduzca el número de plazas del aula:
25
Introduzca el porcentaje máximo de ocupación:
10
Introduzca el número de estudiantes del grupo:
5
El aforo del aula no es suficiente para el grupo. Faltan 3 plazas.

2.- Programa para calcular si el aforo es suficiente.
Introduzca el número de plazas del aula:
200
Introduzca el porcentaje máximo de ocupación:
80
Introduzca el número de estudiantes del grupo:
150
El aforo del aula es suficiente para el grupo. Sobran 10 plazas.

3.- Programa para calcular si el aforo es suficiente.
Introduzca el número de plazas del aula:
90
Introduzca el porcentaje máximo de ocupación:
80
Introduzca el número de estudiantes del grupo:
90
El aforo del aula no es suficiente para el grupo. Faltan 18 plazas.

4.- Programa para calcular si el aforo es suficiente.
Introduzca el número de plazas del aula:
50
Introduzca el porcentaje máximo de ocupación:
100
Introduzca el número de estudiantes del grupo:
50
El aforo del aula es suficiente para el grupo. Sobran 0 plazas.
 *
 */


