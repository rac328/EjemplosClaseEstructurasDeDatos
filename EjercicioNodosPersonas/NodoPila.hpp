#include <iostream>
#include "Persona.hpp"

class NodoPila{
public:
	NodoPila(Persona persona, NodoPila* sig = NULL);
	~NodoPila();
	
private:
	Persona persona;
	NodoPila* siguiente;
	friend class Pila;
	};
	
typedef NodoPila* pnodoPila;

