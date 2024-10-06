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
		cout << "\t" << "El Hombre" << "con DNI" << "2" << "tiene" << edad << "años" << endl;
	else
		cout << "\t" << "La Mujer" << "con DNI" << "1" << "tiene" << edad << "años" << endl; 
	}

Persona::~Persona()
{
}

