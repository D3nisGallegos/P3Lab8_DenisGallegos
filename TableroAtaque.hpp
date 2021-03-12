#include <iostream>
#include <string>
#include <vector>
#include "Tablero.hpp"
#include "Movimiento.hpp"

#pragma once

using namespace std; 

class TableroAtaque : public Tablero{
	
	public:
	TableroAtaque();
	virtual void Imprimir(); 
	bool validarMovimiento(Movimiento );
	bool aplicarMovimiento(Movimiento );
	bool VerificarVictoria(); 
	
	
	
};


