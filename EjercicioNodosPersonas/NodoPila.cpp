#include "NodoPila.hpp"

NodoPila::NodoPila(Persona person, NodoPila* sig){
	persona = person;
	siguiente = sig;
	}

NodoPila::~NodoPila(){
	
	}