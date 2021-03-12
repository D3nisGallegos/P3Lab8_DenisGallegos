#include <iostream>
#include <string>
#include <vector>
#include "Tablero.hpp"
#include "Movimiento.hpp"
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"



#pragma once

using namespace std; 

class Jugador{

	private: 
	string nombre; 
	
	public: 
	Jugador();
	virtual Movimiento Jugar(TableroAtaque* ) = 0;
	virtual void ColocarBarcos(TableroBarcos* ) = 0;

	
};
