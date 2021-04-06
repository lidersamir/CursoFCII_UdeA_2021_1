#include <iostream>
#include <cmath>
#include "complejo.h" //Incluye la definicion de la clase

using namespace std;

Complejo::Complejo(double pReal, double pImag){ //Inicializa el constructor, asignando los valores
	asignarDatos(pReal, pImag);
	}

void Complejo::asignarDatos(double pReal, double pImag){ //Para asignar los valores a las variables
	parteReal = pReal; 
	parteImaginaria = pImag;
	} 

double Complejo::obtenerParteReal(){ //Muestra la parte real
	return parteReal; 
	} 

double Complejo::obtenerParteImaginaria(){ //Muestra la parte imaginaria
	return parteImaginaria; 
	}

Complejo Complejo::Suma(Complejo C){ //Se define la suma de dos complejos
	return Complejo(parteReal + C.parteReal, parteImaginaria + C.parteImaginaria); 
	}
	
Complejo Complejo::Resta(Complejo C){ //Se define la resta de dos complejos
	return Complejo(parteReal - C.parteReal, parteImaginaria - C.parteImaginaria); 
	}

double Complejo::Norma(){ //Se define la norma de un número complejo
	cout << sqrt(pow(parteReal, 2) + pow(parteImaginaria, 2)) << "." << endl; 
	}

void Complejo::Imprimir(){ //Para mostrar los resultados en el formato de un número imaginario
	cout << obtenerParteReal() <<" + "<< obtenerParteImaginaria() << "i" << endl;
}
