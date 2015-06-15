// Cambio en Github Listaenlazada.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using std::cout;
using std::endl;
using std::string;

int _tmain(int argc, _TCHAR* argv[])
{  
	
	Pila pilaInt; // crea una Pila de valores int

	cout << "procesando una Pila de valores enteros" << endl;

	// mete los enteros a pilaInt
	for (int i = 0; i < 3; i++)
	{
		pilaInt.push(new ElementoInt(i));
		pilaInt.imprimirPila();
	} // fin de for

	pilaInt.peek();

	int enteroSacado = 2; // almacena el valor int sacado de la pila

	// saca enteros de pilaInt
	while (!pilaInt.estaPilaVacia())
	{
		pilaInt.pop(new ElementoInt(enteroSacado));
		cout << enteroSacado << " se saco de la pila" << endl;
		pilaInt.imprimirPila();
	} // fin de while


	system("pause");
	return 0;
} // fin de main





