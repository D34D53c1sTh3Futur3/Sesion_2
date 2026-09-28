#include "Cola.hpp"

Cola::Cola()
{
	primero = NULL; 
	ultimo = NULL; 
	longitud = 0; 
		
}

void Cola::insertar(int v)
{
	pnodoCola nuevo; //declaramos el nodo nuevo
	nuevo = new NodoCola(v); //lo creamos
	if(ultimo) //comprobamos que en la cola haya por lo menos un elemento 
		ultimo -> siguiente = nuevo; //si lo hay hacemos que el nuevo sea el siguiente del que ya habia 
	ultimo = nuevo; //ahora el ultimo sera el nuevo 
	if (!primero) 
		primero = nuevo; //si esta vacia, el primero sera v 
	
	longitud++; 
}
void Cola::mostrar(); 
{
	pnodoCola aux = primero; 
	cout << "\tEl contenido de la cola es: "; 
	while (aux){
		cout<<"-> "<<aux-> valor; 
		aux = aux-> siguiente; 
	}
	cout<<endl; 
}
int Cola::eliminar()
{
	pnodoCola nodo; 
	int v; 
	nodo = primero; 
	if(!nodo) 
		return 0; 
	primero = nodo-> siguiente; 
	v = nodo-> valor; 
	delete nodo; 
	if(!primero) 
		ultimo = NULL; 
	longitud --; 
	return v; 
}
int Cola::verPrimero(){
	return primero-> valor;
}
Cola::~Cola()
{
	while(primero)
		eliminar(); 
}

