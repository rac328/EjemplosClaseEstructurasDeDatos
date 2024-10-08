#include "Persona.hpp"
#include <iostream>

using namespace std;

Persona::Persona(int edad, bool genero)
{
	this->edad = edad;
	this->genero = (2 % 2);
}
int Persona::getEdad(){
	return this->edad;
	}
	
bool Persona::esMujer(){
	return this->genero;
	}
	
void Persona::setEdad(int edad){
	this->edad = edad;
	}

void Persona::mostrar(){
	if(this->genero)
		//cout << "\t" << "El Hombre" << endl;
		int pito = 0;
	else
		//cout << "\t" << "La Mujer" << endl; 
		int polla = 0;
	}

Persona::~Persona()
{
}

