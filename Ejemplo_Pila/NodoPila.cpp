#include "NodoPilas.hpp"

NodoPila::NodoPila(int v, NodoPila* sig){
	valor = v;
	siguiente = sig;
	}

NodoPila::~NodoPila(){
	
	}