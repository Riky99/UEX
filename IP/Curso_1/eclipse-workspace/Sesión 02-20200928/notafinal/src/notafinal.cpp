//============================================================================
// Name        : notafinal.cpp
// Author      : Profesores de IP
// Description : Calcula la nota final ponderada de la asignatura
//============================================================================

#include <iostream>
using namespace std;


// Definición de constantes con los pesos de los bloques
const float PESO_ACT = 0.35;
const float PESO_PROY = 0.35;
const float PESO_PRUEB = 0.3;


// PRE = {0 <= nAct, nProy, nPrueb <= 10}
// POST = {devuelve la media a partir de nAct, nProy, nPrueb, ponderada con PESOACT, PESOPROY, PESOPRUEB}

float mediaPonderada (float nAct, float nProy, float nPrueb) {
	float media;
	media = nAct * PESO_ACT + nProy * PESO_PROY + nPrueb * PESO_PRUEB;
	return media;
}

// PRUEBAS
// Actividades: 6	Proyecto: 6		Pruebas: 7	--> el resultado es 6.3
// Actividades: 0	Proyecto: 10	Pruebas: 8	--> el resultado es 5.9
// Actividades: 7.5	Proyecto: 9		Pruebas: 9	--> el resultado es 8.475


int main() {
	float actividades;
	float proyecto;
	float pruebas;
	float nota;

	// Lectura de los datos
	cout << "Programa que calcula la nota final de IP"<<endl;
	cout << "Introduce la nota del bloque de actividades: "<<endl;
	cin >> actividades;
	cout << "Introduce la nota del proyecto: "<<endl;
	cin >> proyecto;
	cout << "Introduce la nota del bloque de pruebas: "<<endl;
	cin >> pruebas;

	// Cálculo de la media
	nota = mediaPonderada (actividades, proyecto, pruebas);

	// Se muestra el resultado
	cout << "La nota final es "<< nota << endl;

	return 0;
}
