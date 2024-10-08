#include "Pila.hpp"

using namespace std;

Pila::Pila(){
	ultimo = NULL;
	longitud = 0;
	}

void Pila::insertar(Persona* persona){
	pnodoPila nuevo;
	nuevo = new NodoPila(persona,ultimo);
	ultimo = nuevo;
	longitud++;
	}

Persona* Pila::extraer(){
	pnodoPila nodo;
	nodo = ultimo;
	ultimo = nodo -> siguiente;
	Persona* person = nodo -> persona;
	longitud--;
	delete nodo;
	return person;
	}

Persona* Pila::cima(){
	return ultimo -> persona ;
	}

void Pila::mostrar(){
	pnodoPila aux = ultimo;
	cout << "\tEl contenido de la pila es: " << endl;
	while(aux){
		aux->persona->mostrar();
		aux = aux -> siguiente;
		}
	cout << endl;
	}

int Pila::getLongitud(){
	return this -> longitud;
	}

Pila::~Pila(){
	pnodoPila aux;
	while(ultimo){
		aux = ultimo;
		ultimo = ultimo -> siguiente;
		delete aux;
		}
	}