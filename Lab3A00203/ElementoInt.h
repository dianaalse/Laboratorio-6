/*
 * ElementoInt.h
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#ifndef ELEMENTOINT_H_
#define ELEMENTOINT_H_

#include "Elemento.h"

#include <iostream>
using namespace std;

class ElementoInt : public Elemento {

protected:
	int i;

public:
	ElementoInt(int i);
	~ElementoInt();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;

};

#endif /* ELEMENTOINT_H_ */
