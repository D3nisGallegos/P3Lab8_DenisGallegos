#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <math.h>
#include "Jugador.hpp"
#include "JugadorHumano.hpp"
#include "JugadorPC.hpp"
#include "Juego.hpp"
#include "Movimiento.hpp"
#include "Tablero.hpp"
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"


using namespace std; 

int main(int argc, char** argv) {
	
	int opcion = 0; 
	while (opcion != 3){
		cout << "    BATTLESHIP " <<endl; 
		cout << "1) Jugador vs Jugador. " <<endl; 
		cout << "2) Jugador vs PC. " <<endl; 
		cin >> opcion; 
		switch (opcion){
			case 1:
				{
				
				break; 
				}//Fin del caso 1. 
			case 2:
				{
					
				break; 
				}//Fin del caso 2. 
		}//Fin del switch que valida la modalidad.  
	}//Fin del while que reinicia el programa. 
	
	
	return 0;
}