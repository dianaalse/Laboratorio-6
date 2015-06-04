// Cambio en Github Listaenlazada.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;



// muestra las instrucciones del programa al usuario
void instrucciones()
{
	cout << "Escriba una de las siguentes opciones:\n"
		<< " 1 para insertar al principio de la lista\n"
		<< " 2 para insertar al final de la lista\n"
		<< " 3 para insertar al medio de la lista\n"
		<< " 4 para eliminar del principio de la lista\n"
		<< " 5 para eliminar del medio de la lista\n"
		<< " 6 para eliminar del final de la lista\n"
		<< " 7 para terminar el procesamiento de la lista\n";
} // fin de la función instrucciones

// función para evaluar una Lista
void probarLista(Lista &objetoLista, const string &nombreTipo)
{
	cout << "Prueba de una Lista de valores tipo " << nombreTipo << "\n";
	instrucciones(); // muestra las instrucciones

	int opcion; // almacena la opción del usuario
	int valor; // almacena el valor de entrada
	int num_nodo; //almacena locacion de nodo para insercion en el medio

	do // realiza las acciones seleccionadas por el usuario
	{
		cout << "? ";
		cin >> opcion;

		switch (opcion)
		{
		case 1: // inserta al principio
			cout << "Escriba " << nombreTipo << ": ";
			cin >> valor;
			objetoLista.insertarAlFrente(valor);
			objetoLista.imprimir();
			break;
		case 2: // inserta al final
			cout << "Escriba " << nombreTipo << ": ";
			cin >> valor;
			objetoLista.insertarAlFinal(valor);
			objetoLista.imprimir();
			break;
		case 3://inserta despues de algun nodo del medio
			cout << "Escriba " << nombreTipo << ": ";
			cin >> valor;
			cout << "Escriba despues de que nodo desea insertarlo:";
			cin >> num_nodo;
			objetoLista.insertarAlMedio(valor, num_nodo);
			objetoLista.imprimir();
			break;
		case 4: // elimina del principio
			if (objetoLista.eliminarDelFrente(valor))
				cout << valor << " se elimino de la lista\n";

			objetoLista.imprimir();
			break;
		case 5: // elimina del medio de la lista
			cout << "Escriba el nodo que desea eliminar:\n";
			cin >> num_nodo;
			if (objetoLista.eliminarDelMedio(num_nodo))
				cout << " se elimino de la lista el nodo: " << num_nodo << "\n";
			objetoLista.imprimir();
			break;
		case 6: // elimina del final
			if (objetoLista.eliminarDelFinal(valor))
				cout << valor << " se elimino de la lista\n";

			objetoLista.imprimir();
			break;
		} // fin de switch
	} while (opcion != 7); // fin de do...while

	cout << "Fin de la prueba de la lista\n\n";
} // fin de la función probarLista



int _tmain(int argc, _TCHAR* argv[])
{
	// prueba Lista de valores int
	Lista listaEnteros;
	probarLista(listaEnteros, "entero");

	/* prueba Lista de valores double
	Lista< double > listaDouble;
	probarLista(listaDouble, "double");*/
	return 0;
} // fin de main





