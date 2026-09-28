#include <Pila.hpp>

int main(){
	Pila pila;
	pila.insertar(3);
	pila.insertar(4);
	pila.insertar(5);
	pila.insertar(6);
	pila.mostrar(); 
	int cima = pila.cima(); 
	pila.extraer(); 
	cout<<"\tDDespues de cambios y extraer la cima. la cima es: "<<cima <<"\ty la pila: "<<endl<<pila.mostrar(); 
	return 0; 
}
