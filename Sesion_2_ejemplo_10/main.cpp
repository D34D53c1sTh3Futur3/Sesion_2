#include <iostream>
using namespace std; 

void sube(int* n)// n == direccion de memoria 
{
	(*n)++; //sobre el contenido de la direccion de memoria n incrementamos a 1
	return; 
}
void mas(int& n) //recibimos una referencia 
{
	n++; //sobre la referencia incrementamos su valor 
	return; 
}
int main (int argc, char** argv) 
{
	int a; 
	cout << "escribe un dato entero: "; 
	cin >> a; 
	for (int i = 0; i < 10; i++){
		cout<<i<<": "<<a<<endl; 
		sube(&a);//pasamos la referencia de a (su direccion)  
	}
	cout<<endl; 
	for(int i = 0; i < 10; i++){
		cout<< i<< ": "<<a <<endl; 
		mas(a); //pasamos simplemente a, al pasar por referencia hace la desreferencia el propio compilador 
	}
	return 0;
}