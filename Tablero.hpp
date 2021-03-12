#include <iostream>
#include <string>
#include <vector>

#pragma once

using namespace std; 

class Tablero {
	
	private: 
	vector <vector<char>> tablero;
	
	public: 
	Tablero(); 
	virtual void Imprimir() = 0;
	
};