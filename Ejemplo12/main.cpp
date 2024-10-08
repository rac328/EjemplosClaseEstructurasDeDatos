#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

strutc persona{
	char nombre[30];
	int edad;
	long edad
	};
void Escribir(persona p){
	cout << p.nombre << "tiene " << p.edad << "años y su telefono es " << p.telefono;
	cout << endl;
	}

void EscribirPuntero(persona* p){
	cout << p->nombre << "tiene " << p->edad << "años y su telefono es " << p->telefono;
	cout << endl;
	}

persona CrearPersona(char n[30], int e, long t){
	persona aux;
	strcpy(aux.nombre);
	aux.edad = e;
	aux.telefono = t;
	return aux
	}
int main(int argc, char **argv)
{
	persona ejemplo;
	ejemplo = CrearPersona((char*)"Jesus",99,123456789);
	cout << "Paso por valor" << endl;
	Escribir(ejemplo);
	cout << endl;
	ejemplo = CrearPersona((char*)"Mario",55,12345672132329);
	cout << "Paso con punteros" << endl;
	EscribirPuntero(&ejemplo)
	return 0;
}
