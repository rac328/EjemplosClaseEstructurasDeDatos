class Persona
{
public:
	Persona(int edad, bool genero, char dni[10]);
	~Persona();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
	
private:
	bool genero;
	int edad;
	char dni[10];
	};
