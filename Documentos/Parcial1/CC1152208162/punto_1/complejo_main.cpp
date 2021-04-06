#include <iostream>
#include "complejo.h" //Incluye la definicion de la clase

using namespace std;

int main(){
	Complejo c1= Complejo(-5.,6. ); //Se define el primer número como miebro de la clase
	Complejo c2= Complejo(2.,3. ); //Se define el segundo número como miebro de la clase
	
	cout << "El primer número imaginario es: ";
	c1.Imprimir();
	cout << "Donde su parte real es " <<  c1.obtenerParteReal() << ", y su parte imaginaria es " << c1.obtenerParteImaginaria() << "." << endl; 
	cout << "Además, su norma es: ";
	c1.Norma();
	
	cout << "El segundo número imaginario es: ";
	c2.Imprimir();
	cout << "Donde su parte real es " <<  c2.obtenerParteReal() << ", y su parte imaginaria es " << c2.obtenerParteImaginaria() << "." << endl; 
	cout << "Además, su norma es: ";
	c2.Norma();
	
	
	Complejo c3= c1.Suma(c2); //Se calcula la suma
	Complejo c4= c1.Resta(c2); //Se calcula la resta
	
	cout << "Por otro lado, la suma de ambos números es: ";
	c3.Imprimir();
	cout << "y su resta es: ";
	c4.Imprimir();
	return 0; 
	} 
