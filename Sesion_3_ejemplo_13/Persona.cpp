#include "Persona.hpp"


using namespace std; 

const char LETRAS_DNI [] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";//LISTA PARA LAS LETAS DEL DNI 

/*declaramos la clase con los atributos privados 
 * genero(bool, 1 = bool), edad(int) y dni(char)
 */

Persona::Persona(int edad)
{
	this-> edad = edad; 
	/*this es un puntero al objeto actual
	 */
	 this-> genero = rand() % 2;//generamos un genero con rand
	 
	 int numero = rand() % 1000000000; 
	 
	 char letra = LETRAS_DNI[numero % 26];
	 
	 sprintf(this-> dni, "%08d%c", numero, letra);//formateada = 0%8d -> numero con 8 digitos rellenado con ceros a la izquierda, %C = la letra. 
}

Persona::~Persona()
{
	//destructor completamente vacio 
}

int Persona::getEdad(){
	return this-> edad; 
}
bool Persona::esMujer(){
	return this-> genero; 
}
void Persona::setEdad(int Edad){
	this-> edad = edad; 
}
void Persona:: mostrar(){
	cout << "DNI: "<<setw(10)<<this-> dni<<" | Edad: "<<setw(4)<<this->edad<<" | Genero: "<<setw(6)<<(this-> genero? "Mujer": "Hombre");
}

