#include <iostream>
//tres maneras posibles de elevar al cuadrado un argumento 
using namespace std; 
int cuadPorValor(int a ) //paso por valor 
{
	/* a en esta funcion se genera como una copia del argumento, no es la variable de entrada original 
	 */
	return a = a * a; 
}
void cuadPorInd(int* b)//paso por puntero INDIRECCION  
{
	/*argumentos --> int* b == b es un puntero a int
	 *la operacion se hace con el valor guardado de esa direccion 
	 * b es una direccion, *b nos devuelve el valor almacenado en esa direccion 
	 * se le llama desreferenciar
	 * en resumen: en la direccion que recibo (argumento) guarda lo que ya habia ahi multiplicado por si mismo 
	 */
	*b = (*b) * (*b);
}
void cuadPorRef(int& c)//paso por REFERENCIA 
{
	/* argumento int& c --> referencia de lo que se le pase (mismo nombre y misma memoria pero de otra forma) 
	 * una referencia es un puntero pero el compilador hace el paso de direccion y dereferencia por nosotros 
	 * la diferencia con punteros es que a la variable que se asigne es a la que siempre apuntara, y nunca puede estar vacia 
	 */
	c = c * c; 
}

int main(int argc, char** argv) 
{
	int a = 5, b = 6, c = 7; 
	cuadPorValor(a);//como a este nuevo valor (la copia de a elevada al cuadrado) no se le asigna una variable el return no vuelve a nada y a sigue siendo 5 
	cuadPorInd(&b);//argumento == direccion de memoria de la variable b
	cuadPorRef(c); //con pasar la variable original sirve con referencias
	cout<<"a = "<< a << " b = " << b << " c = " << c << endl; 
	return 0; 
	
}