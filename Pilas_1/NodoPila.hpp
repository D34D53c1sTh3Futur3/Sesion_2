#include <cstddef>
#include <iostream>
#ifndef NODOPILA_HPP
#define NODOPILA_HPP

using namespace std; 

//esta clase nos permite guardar la referencia del ultimo valor de la pila 
class NodoPila
{
public:
	NodoPila(int v, NodoPila* sig = NULL);
	~NodoPila();

private: 
	int valor; 
	NodoPila* siguiente; 
	friend class Pila; 
	
};
typedef NodoPila* pnodoPila;
#endif // NODOPILA_HPP
