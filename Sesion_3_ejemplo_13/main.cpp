#include <iostream>
#include <algorithm>

#include "Persona.hpp"

using namespace std;

int main(){
	//crear 10 objetos de persona con años de 18 a 27 sin repetir años 
	//mostrar sus datos por pantalla 
	/* 1º crear la variable de años con la que vamos a ir creando de manera iterativa los objetos personas 
	 * 2º desordenar el array de años 
	 * 3º ir creando los objetos persona y mostrar sus datos 
	 */ 
	int edades[10]; 
	int i; 
	for (i = 1; i<10; i++){
		edades[i] = i+17; 
	}
	cout<<"edades: "<<endl<<endl;
	for (i = 0; i<10; i++){
		cout<< edades[i]; 
		
	}
	for (i = 0; i<10; i++){
		Persona* persona = new Persona(edades[i]); 
		persona->mostrar(); 
	}
	
}