#include "Pila.hpp"

Pila::Pila()
{
	ultimo = NULL; 
	longitud = 0; 
	
}

void Pila::insertar(int v)
{
	pnodoPila nuevo;//declaramos la variable nuevo 
	nuevo = new NodoPila(v, ultimo); //nuevo sera un nodo a unir con referencia a ultimo y valor v 
	ultimo = nuevo; //el anterior ultimo, pasa a ser el nuevo
	longitud++; //incrementamos en uno la longitud de la pila 
}
int Pila::extraer()
{
	pnodoPila nodo;//declaramos la variable nodo
	int v;//declaramos la variable v 
	if (!ultimo)//si esta vacio, no se ejecuta la funcion y devuelve 0 
		return 0; 
	nodo = ultimo;//asignamos el nodo ultimo a el nodo de la funcion
	ultimo = nodo->siguiente; //eliminamos el ultimo con-> nodo-> siquiente: que lo que hace es acceder a el valor del dato que en este caso es un puntero, por eso la flecha 
	v = nodo->valor;//recogemos el valor del nodo que es el que hemos sacado
	longitud--; //decrementamos la longitud de la pila
	delete nodo; //elimianamos de memoria el numero que salio de la pila
	return v;//devolvemos el valor del numero que salio  
}
int Pila::cima()
{
	pnodoPila nodo; 
	if(!ultimo)
		return 0; 
	return ultimo -> valor; 
}
void Pila::mostrar()
{
	pnodoPila aux = ultimo; //recogemos en un nodo el primero
	cout << "\tEl contenido de la pila es: "; 
	while (aux){//mientras aux exista -> para cuando es null = pila vacia
		cout<<"->"<<aux->valor;//recogemos el valor del ultimo 
		aux = aux->siguiente; //nos vamos al siguiente elemento 
	}
	cout<< endl; 
}
Pila::~Pila()
{
	pnodoPila aux; 
	while(ultimo){
		aux = ultimo; 
		ultimo -> siguiente; 
		delete aux; 
	}
}

