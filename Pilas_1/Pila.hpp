
#include "NodoPila.hpp"
#include <cstddef>
#ifndef PILA_HPP
#define PILA_HPP


class Pila
{
public:
	Pila();
	~Pila();
	void insertar(int v); 
	int extraer();
	int cima(); 
	void mostrar(); 
	int getLongitud(); 
private: 
	pnodoPila ultimo; 
	int longitud; 

};

#endif // PILA_HPP
