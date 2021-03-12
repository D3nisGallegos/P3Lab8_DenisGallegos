#include <iostream>
#include <string>
#include <vector>
#include "Tablero.hpp"
#include "Movimiento.hpp"
#include "TableroAtaque.hpp"
#include "Jugador.hpp"

#pragma once

using namespace std; 

class Juego{
	
	private: 
	TableroBarcos** tablerobarcos; 
	TableroAtaque** tableroataque; 
	Jugador** jugadores; 
	
	public: 
	Juego(TableroBarcos **, TableroAtaque**, Jugador** );
	void PrepararJuego();
	void Jugar();
	
	
};