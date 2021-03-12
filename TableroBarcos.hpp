#include <iostream>
#include <string>
#include <vector>
#include "Tablero.hpp"
#include "Movimiento.hpp"

#pragma once

using namespace std; 

class TableroBarcos : public Tablero{
	
	public:
	TableroBarcos();
	virtual void Imprimir(); 
	bool validarMovimiento(Movimiento );
	bool AtaqueExitoso(Movimiento );
	
	
	
};