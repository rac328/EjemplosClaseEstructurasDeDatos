#include <iostream>
#include <iomanip>

class Persona
{
public:
	Persona();
	Persona(int edad, bool genero);
	~Persona();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
	
private:
	bool genero;
	int edad;
	
	};
