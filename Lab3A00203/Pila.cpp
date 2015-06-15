#include "stdafx.h"
#include "Pila.h"


Pila::Pila()
{
}


Pila::~Pila()
{
}

void Pila::push(Elemento * datos)
{
	insertarAlFrente(datos);
} // fin de la función push

// pop llama a la función eliminarDelFrente de Lista
bool Pila::pop(Elemento * datos)
{
	return eliminarDelFrente(datos);
} // fin de la función pop

// estaPilaVacia llama a la función estaVacia de Lista
bool Pila::estaPilaVacia()
{
	return estaVacia();
} // fin de la función estaPilaVacia

// imprimirPila llama a la función imprimir de Lista
void Pila::imprimirPila()
{
	imprimir();
} // fin de la función imprimir