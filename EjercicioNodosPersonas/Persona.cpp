#include "Persona.hpp"
#include <iostream>

using namespace std;

Persona::Persona(int edad, bool genero)
{
	this->edad = edad;
	this->genero = genero;
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
		cout << "\t" << "El Hombre" <<"tiene "<< edad << endl;
	else
		cout << "\t" << "La Mujer" <<"tiene "<< edad << endl; 
	}

Persona::~Persona()
{
}

