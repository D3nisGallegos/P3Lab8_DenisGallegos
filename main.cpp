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
				cout << "Ingrese el nombre del jugador 1: " <<endl; 
				string n1 = "";
				cin >> n1; 
				cout << "Ingrese el nombre del jugador 2: " <<endl; 
				string n2 = "";
				cin >> n2;
				JugadorHumano* jug1 = new JugadorHumano(n1);
				JugadorHumano* jug2 = new JugadorHumano(n2); 
				TableroBarcos* tablabarco1 = new TableroBarcos();
				TableroBarcos* tablabarco2 = new TableroBarcos();
				TableroAtaque* tablaatq1 = new TableroAtaque();
				TableroAtaque* tablaatq2 = new TableroAtaque();
				
				JugadorHumano** jugs = new JugadorHumano();
				jugs [0] = jug1; 
				jugs [1] = jug2; 
				
				bool v1 = false; 
				bool v2 = false; 
				bool v3 = false; 
				bool v4 = false; 
				while (v1 == false){
					cout << "Coordenadas de inicio: Aircfraft Carrier " <<endl; 
					cout << "Ingrese la fila: " <<endl; 
					int fila; 
					cin >> fila; 
					cout << "Ingrese la columna: " <<endl; 
					int columna; 
					cin >> columna; 
					
				}
				
				
				
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