#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#ifndef PERSONA_HPP
#define PERSONA_HPP//declaraciones para evitar errores


/*persona.hpp->headerfile
 * solo declaraciones: metodos y atributos 
 * hay que hacer #include persona en cad archivo que utilice esta clae
 * 
 */
 
//declaracion de la clase 
class Persona
{
	/*en la declaracion todo es privado. solo puede modificarse con los metodos de la clase
	 * 
	 */
	 private: 
		 bool genero;
		 int edad; 
		 char dni[10]; 
public:
	Persona(int edad);
	~Persona();
	int getEdad(); 
	bool esMujer(); 
	void setEdad(int edad); 
	void mostrar();

};

#endif // PERSONA_HPP
