/*
 * Persona.h
 *
 *  Created on: May 8, 2015
 *      Author: a00203
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>
#include <time.h>
#include <iostream>

using namespace std;

class Persona {
	friend ostream& operator << (ostream&, const Persona&);

private:
	int ID;
	//string nombrearray[];
	string nombre;
public:
	Persona(int, string);
	void setNombre(string);
	void setID(int);
	int getID();
	virtual ~Persona();
};

ostream& operator << (ostream&, const Persona&);

#endif /* PERSONA_H_ */
