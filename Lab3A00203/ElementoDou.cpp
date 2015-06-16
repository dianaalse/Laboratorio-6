/*
 * ElementoDou.cpp
 *
 *  Created on: May 8, 2015
 *      Author: a00203
 */

#include "stdafx.h"



ElementoDou::ElementoDou(double i) :
i(i) {
}

ElementoDou::~ElementoDou() {
}

int ElementoDou::compareTo(Elemento * otro) {
	int cmp = 0;
	ElementoDou * eInt = static_cast<ElementoDou *>(otro);
	if (eInt != 0) {
		cmp = this->i < eInt->i ? -1 : this->i == eInt->i ? 0 : 1;
	}
	return cmp;
}

void ElementoDou::imprimir(ostream& out) const {
	out << i;
}
