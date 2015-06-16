/*
 * Persona.cpp
 *
 *  Created on: May 8, 2015
 *      Author: a00203
 */

#include "stdafx.h"

Persona::Persona(int ID, string nombre) {
	//int RandIndex = rand() % 4;
	setID(ID);
	setNombre(nombre);
	//this->nombrearray[4] = {"Alicia","Ramon","Bernal","Alvaro"};
	//nombre = nombrearray[RandIndex];
}

void Persona::setID(int id){
	ID = id;

}

void Persona::setNombre(string name){
	nombre = name;
}

int Persona::getID(){
	return ID;
}

ostream& operator <<(ostream& out, const Persona& p) {
	out << p.ID << " ";
	out << p.nombre;
	return out;
}
Persona::~Persona() {

	// TODO Auto-generated destructor stub
}

