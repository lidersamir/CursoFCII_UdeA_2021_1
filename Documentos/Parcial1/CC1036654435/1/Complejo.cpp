#include "Complejo.h"
#include <iostream>
#include<iomanip>
#include <string>

using namespace std;

Complejo::Complejo( double r1, double im1, double r2, double im2 ){  // Construcctor para asignar datos.
	asignarDatos(r1,im1,r2,im2);
}

void Complejo::asignarDatos(double r1, double im1, double r2, double im2 ){  // Funcion tipo void para asignar los datos que ingrese el usuario a las variables privadas.
	parteReal1 = r1;
	parteImaginaria1 = im1;
	parteReal2 = r2;
	parteImaginaria2 = im2;
}

double Complejo::obtenerParteReal1(){  // Funcion de tipo double que adquiere he imprime la parte real del primer numero.					
	return parteReal1;
}

double Complejo::obtenerParteImaginaria1(){  // Funcion de tipo double que adquiere he imprime la parte imaginaria del primer numero.
	return parteImaginaria1;
}

double Complejo::obtenerParteReal2(){  // Funcion de tipo double que adquiere he imprime la parte real del segundo numero.					
	return parteReal2;
}

double Complejo::obtenerParteImaginaria2(){  // Funcion de tipo double que adquiere he imprime la parte imaginaria del primer numero.
	return parteImaginaria2;
}

double Complejo::sumaDeNumeros(){  // Funcion de tipo double que realiza la operacion suma e imprime este.
	double a1,b1,a2,b2;
	
	a1 = obtenerParteReal1();
	b1 = obtenerParteImaginaria1();
	a2 = obtenerParteReal2();
	b2 = obtenerParteImaginaria2();
	
	cout << "El resultado de la Suma de numeros es: " << (a1+a2) << "+i" << (b1+b2) << endl;
}

double Complejo::restaDeNumeros(){  // Funcion de tipo double que realiza la operacion resta e imprime este.
	double a1,b1,a2,b2;
	
	a1 = obtenerParteReal1();
	b1 = obtenerParteImaginaria1();
	a2 = obtenerParteReal2();
	b2 = obtenerParteImaginaria2();
	
	cout << "El resultado de la resta de numeros es: " << (a1-a2) << "+i(" << (b1-b2) << ")" << endl;
}

double Complejo::productoDeNumeros(){  // Funcion de tipo double que realiza la operacion producto e imprime este.
	double a1,b1,a2,b2;
	
	a1 = obtenerParteReal1();
	b1 = obtenerParteImaginaria1();
	a2 = obtenerParteReal2();
	b2 = obtenerParteImaginaria2();
	
	cout << "El resultado del producto de numeros es: " << (a1*a2 - b1*b2) << "+i" << (a1*b2 + a2*b1) << endl;
}

void Complejo::imprimirResultado(int a){  // Funcion de tipo void que imprime el resultado general de las operaciones dando una interfas mas clara al resultado. basado en la operacion se elije el tipo de impresion.
	string b[1][3] = {{"+", "-", "*"}};  // Arreglo de simbolos correspondiente a las operaciones.
	
	cout << "los numeros a operar son: " << endl;
	cout << "------------------------------------" << endl;
	switch (a){ // Evalua el tipo de operacion previamente ingresada por el usuario 1 -> suma, 2 -> resta, 3 -> producto. No contiene default ya que para entrar al switch es obligatorio el uso de 1,2,3. cualquier otro 
				// valor es rechazado por el while en el codigo cliente.
		case 1: {  
			cout << "   " << obtenerParteReal1() << "+i" << obtenerParteImaginaria1() << "   " << b[0][0] << "   " << obtenerParteReal2() << "+i" << obtenerParteImaginaria2() << endl; 
			sumaDeNumeros();
			cout << "\n";
			cout << "------------------------------------\n" << endl;
			break;
		}
		case 2: {
			cout << obtenerParteReal1() << "+i" << obtenerParteImaginaria1() << "      " << b[0][1] << "      " << obtenerParteReal2() << "+i" << obtenerParteImaginaria2() << endl;
			restaDeNumeros();
			cout << "\n";
			cout << "------------------------------------\n" << endl;
			break;
		}
		case 3: {
			cout << obtenerParteReal1() << "+i" << obtenerParteImaginaria1() << "      " << b[0][2] << "      " << obtenerParteReal2() << "+i" << obtenerParteImaginaria2() << endl;
			productoDeNumeros();
			cout << "\n";
			cout << "------------------------------------\n" << endl;
			break;
		}
	}
}


