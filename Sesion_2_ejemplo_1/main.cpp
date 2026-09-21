#include <iostream>
using namespace std; 

void ejemplo (int a, int& b); 

int main(int argc, char** argv)
{
	int x = 2, y = 4; 
	cout<< "1. x= " << x << " y = " << y << endl; 
	ejemplo(x,y);/*al hacer ejemplo (x,y) x se queda con el mismo valor porque en la declaracion del metodo, a es una variable copia de x
				 * y como con a no se hace nada, x sigue valiendo el valor original
				 * sin embargo b& es un puntero que apunta a la misma direccion de memoria que y 
				 * por lo que al hacer b = 8, cambia y al estar las dos variables apuntando al mismo punto en memoria 
				 * b es un alias de y
				 * esto nos permite modificar los argumentos del llamadore (y) sin usar return (con un metodo void) 
				 */
	cout<< "2. x= " << x << " y = " << y << endl; 
	return 0; 
}

void ejemplo (int a, int& b)
{
	a = 5;
	b = 8; 
	
}
