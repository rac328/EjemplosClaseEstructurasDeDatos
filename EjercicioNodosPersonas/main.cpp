#include <stdio.h>
#include "Pila.hpp"

int main(int argc, char **argv)
{
	Pila pilotes;
	Persona* pepe = new Persona(32,true);
	
	pepe->mostrar();
	pilotes.insertar(pepe);
	pilotes.mostrar();
	return 0;
}
