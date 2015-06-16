/*
 * ElementoPersona.cpp
 *
 *  Created on: May 8, 2015
 *      Author: a00203
 */

#include "stdafx.h"

ElementoPersona::ElementoPersona(Persona * p) {
	this->p = p;

}

ElementoPersona::~ElementoPersona() {
	delete p;
}

int ElementoPersona::compareTo(Elemento * otro) {
	int cmp = 0;
	ElementoPersona * e = static_cast<ElementoPersona *>(otro);
	if (e != 0) {
		int IDThis = this->getPersona()->getID();
		int IDOtro = e->getPersona()->getID();
		cmp = IDThis < IDOtro ? -1 : IDThis == IDOtro ? 0 : 1;
	}
	return cmp;

}

Persona * ElementoPersona::getPersona(){
	return p;
}

void ElementoPersona::imprimir(ostream & out)const{
	out << *p;
}
