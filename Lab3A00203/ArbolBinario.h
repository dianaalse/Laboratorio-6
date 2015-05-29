/*
 * ArbolBinario.h
 *
 *  Created on: 5/5/2015
 *      Author: ruben.jimenez
 */

#ifndef ARBOLBINARIO_H_
#define ARBOLBINARIO_H_

#include "Elemento.h"
#include <iostream>
using namespace std;

class ArbolBinario {

	friend ostream & operator<<(ostream &, ArbolBinario &);

private:
	Elemento * raiz;

public:
	ArbolBinario();
	virtual ~ArbolBinario();

	void insertarElemento(Elemento *);

private:
	void insertarElementoRec(Elemento *, Elemento *);
	void imprimir(Elemento *, ostream &, int);
};

ostream & operator<<(ostream &, ArbolBinario &);

#endif /* ARBOLBINARIO_H_ */
