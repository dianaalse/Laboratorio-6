#pragma once
class NodoLista
{

	friend class Lista; // hace de Lista una amiga

public:
	NodoLista(Elemento *); // constructor
	Elemento* obtenerDatos(); // devuelve los datos en el nodo
private:
	Elemento* datos; // datos
	NodoLista *siguientePtr; // siguiente nodo en la lista

};

