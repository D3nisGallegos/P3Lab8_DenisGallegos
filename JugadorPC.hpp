#include <iostream>
#include <string>
#include <vector>
#include "Tablero.hpp"
#include "Movimiento.hpp"
#include "TableroAtaque.hpp"
#include "Jugador.hpp"

#pragma once 

using namespace std; 

class JugadorPC : public Jugador {
	
	public: 
	JugadorPC();
	Movimiento Jugar(TableroAtaque* );
	void ColocarBarcos(TableroBarcos* );
	
	
};