/*
 * Main.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */


#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <string>
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDou.h"
#include "ElementoPersona.h"
#include "Persona.h"


using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	srand(time(NULL));

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}

	cout << "El primer arbol" << endl << a << endl;

	ArbolBinario b;

	for (int i = 0; i < 10; ++i) {
			b.insertarElemento(new ElementoDou((rand() % 100)/5.222));
		}

	cout << "El segundo arbol" << endl << b << endl;

	ArbolBinario c;
	int cant = 5;
	int id = 0;
	Persona** pe;
	pe = new Persona*[cant];
	for (int i = 0; i < cant; ++i) {
		pe[i] = new Persona(id++,"Andres");
		c.insertarElemento(new ElementoPersona(pe[i]));
	}



	cout << "El tercer arbol" << endl << c << endl;

	return 0;
}

