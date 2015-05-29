/*
 * ElementoDou.h
 *
 *  Created on: May 8, 2015
 *      Author: a00203
 */

#ifndef ELEMENTODOU_H_
#define ELEMENTODOU_H_

#include "Elemento.h"

#include <iostream>
using namespace std;

class ElementoDou : public Elemento {
private:
	double i;
public:
	ElementoDou(double i);
	virtual ~ElementoDou();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;
};

#endif /* ELEMENTODOU_H_ */
