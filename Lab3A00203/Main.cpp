// Cambio en Github Listaenlazada.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using std::cout;
using std::endl;
using std::string;





int _tmain(int argc, _TCHAR* argv[])
{  
	Lista elemInt;
	Lista elemDou;
	Lista elemPer;
	Lista elemIntInt;


	cout << "La lista de Elementos Int" << "/n" << endl;

	for (int i = 0; i < 5; ++i) {
		elemInt.insertarAlFinal(new ElementoInt(rand() % 100));
		elemInt.imprimir();
	}

	for (int i = 0; i < 5; ++i) {
		elemInt.insertarAlFrente(new ElementoInt(rand() % 100));
		elemInt.imprimir();
	}

	cout << "La lista de Elementos IntInt" << endl;

	for (int i = 0; i < 5; ++i) {
		elemInt.insertarAlFinal(new ElementoIntInt(rand() % 100, rand()%100));
		elemInt.imprimir();
	}

	for (int i = 0; i < 5; ++i) {
		elemInt.insertarAlFrente(new ElementoIntInt(rand() % 100,rand()%100));
		elemInt.imprimir();
	}

	//eliminar del frente y del final


	cout << "La lista de Elementos double" << endl;

	for (int i = 0; i < 5; ++i) {
		elemDou.insertarAlFinal(new ElementoDou((rand() % 100) / 5.222));
		elemDou.imprimir();
	}

	for (int i = 0; i < 5; ++i) {
		elemDou.insertarAlFrente(new ElementoDou((rand() % 100) / 5.222));
		elemDou.imprimir();
	}

	cout << "La lista de Elementos Persona" << endl;

	int cant = 5;
	int id = 0;
	string arrayNom[4] = { "Andres", "Marco", "Luis", "Miguel" };
	Persona** pe;
	pe = new Persona*[cant];
	for (int i = 0; i < cant; ++i) {
		int RandIndex = rand() % 4;
		pe[i] = new Persona(id++, arrayNom[RandIndex]);
		elemPer.insertarAlFrente(new ElementoPersona(pe[i]));
		elemPer.imprimir();
	}


	system("pause");
	return 0;
} // fin de main





