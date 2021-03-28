#include <iostream>
#include<iomanip>
#include "SinCalculator.h"

using namespace std;

int main(){
	float rad;
	int pre;
	
	cout << "------------------------------------------" << endl;
	cout <<  setw(8) << "   Bienvenido a la calculadora de Sen(x) " << setw(5) << endl;
	cout << "------------------------------------------" << endl;
	cout << "Instrucciones: \nSe Le pedira ingresar dos valores, el valor correspondiente a x \ny la precision con que desee encontrar este basado en la serie de Taylor." << endl;
	cout << " --------- Tenga en cuenta que x debe estar en radianes ---------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "ingrese x en radianes:  "; cin >> rad;
	cout << "ingrese precision:  "; cin >> pre;
	
	
	SinCalculator senocalculadora(rad,pre);
	senocalculadora.respuesta();
	
	
	system("pause");
	return 0;
}
