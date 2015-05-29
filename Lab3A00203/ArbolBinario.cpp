/*
 * ArbolBinario.cpp
 *
 *  Created on: 5/5/2015
 *      Author: ruben.jimenez
 */

#include "stdafx.h"

ArbolBinario::ArbolBinario() {
	raiz = NULL;
}

ArbolBinario::~ArbolBinario() {
	if (raiz != NULL) {
		delete raiz;
	}
}

void ArbolBinario::insertarElemento(Elemento * elemento) {
	if (raiz == NULL) {
		raiz = elemento;
	} else {
		insertarElementoRec(raiz, elemento);
	}
}

void ArbolBinario::insertarElementoRec(Elemento * nodoActual,
		Elemento * elemento) {
	if (*nodoActual < *elemento) {
		if (nodoActual->hIzq != NULL) {
			insertarElementoRec(nodoActual->hIzq, elemento);
		} else {
			nodoActual->hIzq = elemento;
		}
	} else {
		if (nodoActual->hDer != NULL) {
			insertarElementoRec(nodoActual->hDer, elemento);
		} else {
			nodoActual->hDer = elemento;
		}
	}
}


ostream & operator<<(ostream & out, ArbolBinario & a) {
	a.imprimir(a.raiz, out, 0);
	return out;
}

void ArbolBinario::imprimir(Elemento* nodo, ostream& out, int profundidad) {
	if(nodo->hIzq != NULL) {
		imprimir(nodo->hIzq, out, profundidad + 1);
	}
	for (int i = 0; i < profundidad; ++i) {
		cout << "\t";
	}
	out << *nodo << endl;
	if(nodo->hDer != NULL) {
		imprimir(nodo->hDer, out, profundidad + 1);
	}
}
