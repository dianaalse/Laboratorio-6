#include "stdafx.h"


// constructor

 NodoLista::NodoLista(Elemento * elemento)
 {
	 this->datos = elemento;
	this->siguientePtr = 0;
  } // fin del constructor de NodoLista

// devuelve una copia de los datos en el nodo

Elemento * NodoLista::obtenerDatos() 
{
	 return datos;
	 } // fin de la función obtenerDatos



