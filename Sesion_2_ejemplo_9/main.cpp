
#include <iostream>
//machaca == sobrescribir
//sobrescribimos la variable b con el valor de a primero con un puntero y luego con una referencia 
using namespace std; 
void machaca1(int x, int* y)//int*y == recibimos una direccion 
{
	*y = x; //el contenido del puntero de la direccion de memoria de y sera igual a x
	
}
void machaca2(int x, int&y) 
{
	y = x; //la referencia y (que es b porque la recibe como referencia) sera igual a x
}
int main(int argc, char** argv) 
{
	int a, b; 
	cout<< "escribe dos datos enteros: "<<endl; 
	cin >> a >> b; 
	int copia = b; //guardamos el vaor de b para hacer el segundo machaca
	cout << "antes de machaca1: "<<a<<" y "<<b<<endl; 
	machaca1(a,&b);// el valor de a, la referencia de b(la direccion de b) 
	cout<< "despues de machaca1: "<<a<<" y "<<b<<endl; 
	b = copia; //restauramos b para probar el segundo metodo
	cout << "antes de machaca2: "<<a<<" y "<<b<<endl; 
	machaca2(a,b);//pasamos las dos variables tal cual porque al pasar por referencia el direccionamiento es automatico 
	cout << "despues de machaca2: "<<a<<" y "<<b<<endl;
	return 0; 

}