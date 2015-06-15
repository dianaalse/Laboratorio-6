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
} // fin de la funci�n push

// pop llama a la funci�n eliminarDelFrente de Lista
bool Pila::pop(Elemento * datos)
{
	return eliminarDelFrente(datos);
} // fin de la funci�n pop

// estaPilaVacia llama a la funci�n estaVacia de Lista
bool Pila::estaPilaVacia()
{
	return estaVacia();
} // fin de la funci�n estaPilaVacia

// imprimirPila llama a la funci�n imprimir de Lista
void Pila::imprimirPila()
{
	imprimir();
} // fin de la funci�n imprimir