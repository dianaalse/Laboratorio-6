#pragma once
#include "stdafx.h"

class Lista
{
 public:
		Lista(); // constructor
		~Lista(); // destructor
		void insertarAlFrente(Elemento *);
		void insertarAlFinal(Elemento *);
		void insertarAlMedio(Elemento *,int);
		bool eliminarDelFrente(Elemento *);
		bool eliminarDelMedio(int);
		bool eliminarDelFinal(Elemento *);
		bool estaVacia();
		void imprimir();
private:
			NodoLista *primeroPtr; // apuntador al primer nodo
			NodoLista  *ultimoPtr; // apuntador al último nodo
			// función utilitaria para asignar un nuevo nodo
			NodoLista  *obtenerNuevoNodo(Elemento * );
}; // fin de la clase Lista
