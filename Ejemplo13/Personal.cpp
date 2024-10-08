#include "Personal.hpp"
#include <iostream>
using namespace std;

int Persona::getEdad(){
	return this->edad;
	}

bool Persona::esMujer(){
	return this->genero;
	}

void Persona::setEdad(int edad){
	this->edad = edad;
	}
	
//void Persona::mostrar(){
//	cout << "Atributos de la persona:" << endl;
//	cout << "Genero" << this->genero<< endl;
//	cout << "DNI" << this->dni << endl;
//	}