// Cambio en Github Listaenlazada.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using std::cout;
using std::endl;
using std::string;

int _tmain(int argc, _TCHAR* argv[])
{

	Pila pilaInt; // crea una Pila de valores int
	Pila IntInt;
	Pila Dou;
	Pila Per;

	cout << "---------Procesando una Pila de Elementos Int ----------" << "\n" << endl;

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
		cout << "Se saco de la pila" << "\n" << endl;
		pilaInt.imprimirPila();
	} // fin de while

	cout << "---------Procesando una Pila de Elementos IntInt ----------" << "\n" << endl;

	// mete los enteros a IntInt
	for (int i = 0; i < 3; i++)
	{
		IntInt.push(new ElementoIntInt(i, i + 1));
		IntInt.imprimirPila();
	} // fin de for

	IntInt.peek();

	IntInt.pop(new ElementoIntInt(3, 2));
	cout << "Se saco de la pila" << "\n" << endl;
	IntInt.imprimirPila();

	cout << "---------Procesando una Pila de Elementos Double ----------" << "\n" << endl;

	// mete los enteros a Dou
	for (int i = 0; i < 3; i++)
	{
		Dou.push(new ElementoDou(i * 5 / 2.4));
		Dou.imprimirPila();
	} // fin de for

	Dou.peek();

	Dou.pop(new ElementoDou(2.16667));
	cout << "Se saco de la pila" << "\n" << endl;
	Dou.imprimirPila();

	cout << "---------Procesando una Pila de Elementos Persona ----------" << "\n" << endl;

	// mete los enteros a Per
	for (int i = 0; i < 3; i++)
	{
		Per.push(new ElementoPersona(new Persona(i, "Angel")));
		Per.imprimirPila();
	} // fin de for

	Per.peek();

	Per.pop(new ElementoPersona(new Persona(2, "Angel")));
	cout << "Se saco de la pila" << "\n" << endl;
	Per.imprimirPila();

	system("pause");
	return 0;
} // fin de main





