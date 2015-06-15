#pragma once

#include "stdafx.h" 

class Pila : private Lista
{
public:
	Pila(); 
	~Pila();
	void push(Elemento*);
	bool pop(Elemento*);
	bool estaPilaVacia();
	void imprimirPila();
}; 

