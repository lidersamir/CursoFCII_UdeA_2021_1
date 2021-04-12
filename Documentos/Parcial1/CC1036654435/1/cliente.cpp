#include <iostream>
#include<iomanip>
#include <string>
#include "complejo.h"

using namespace std;

int main(){
	int el, co;
	bool on=false, cal = true;
	double r1,r2,im1,im2,b1,d1,b2,d2;
	int n;
	
	cout << "BIENVENIDO A LA CALCULADORA DE NUMEROS IMAGINARIOS" << endl;
	cout << "\nINSTRUCCIONES: " << endl;
	cout << "Esta es una calculadora de numeros imaginarios de la forma (a+ib) donde a,b son numeros reales." << endl;
	cout << "La calculadora puede obtener resultados de suma, resta, multiplicacion. \n" << endl;

	while (cal == true){  // Inicializa bucle de calculadora.
		
		cout << "INGRESE LA OPERACION QUE NECESITE CALCULAR: " << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "	1. Suma de numeros imaginarios." << endl;
		cout << "	2. Resta de numeros imaginarios." << endl;
		cout << "	3. Multiplicacion de numeros imaginarios." << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "ELECCION: "; cin >> el; // Pregunta por calculo basado en las opciones
		cout << "\n";
	
		while (el != 1 && el != 2 && el != 3){  // bucle que impide al usuario ingresar un valor invalido
			cout << "Ingrese una eleccion valida" << endl;
			cout << "---------------------------" << endl;
			cout << "ELECCION: "; cin >> el;
			cout << "\n";
		}
		
		if (el == 1 || el == 2 || el == 3 ){ // Si ingreso un valor valido, se pide datos para operar los numeros.
			on = true;
			cout << "Digite la parte real del primer numero: "; cin >> b1;
			cout << "Digite la parte imaginaria del primer numero: "; cin >> d1;
			cout << "\n";
			cout << "Digite la parte real del segundo numero: "; cin >> b2;
			cout << "Digite la parte imaginaria del segundo numero: "; cin >> d2;
			cout << "\n";
		} 
		
		while (on == true){ // Comienza el bucle que permite obtener resultados y realizar nuevos calculos usando los mismos numeros.
			if (el == 1){
				Complejo calculadoraComplejo(b1,d1,b2,d2);
				calculadoraComplejo.imprimirResultado(el);  // Imprime el resultado de suma ( el == 1 )
			}
			if (el == 2){
				Complejo calculadoraComplejo(b1,d1,b2,d2);
				calculadoraComplejo.imprimirResultado(el);  // Imprime el resultado de resta ( el == 2 )
			}
			if (el == 3){
				Complejo calculadoraComplejo(b1,d1,b2,d2);
				calculadoraComplejo.imprimirResultado(el);  // Imprime el resultado de producto ( el == 3 )
			}
			
			cout << "Desea realizar otro calculo con los mismos numeros? " << endl;  // Pregunta si desea usar los mismos numeros con otra operacion.
			cout << "1. Si,  2. No" << endl;
			cout << "ELECCION: "; cin >> co;
			cout << "\n";
			
			while (co != 1 && co != 2){  // bucle que impide al usuario ingresar un valor invalido
			cout << "Ingrese una eleccion valida" << endl;
			cout << "---------------------------" << endl;
			cout << "ELECCION: "; cin >> co;
			cout << "\n";
			}	
			
			if (co == 1){  // Si acepta usar los mismos numeros, se pide la operacion y vuelve a empezar el bucle.
				cout << "INGRESE LA OPERACION QUE NECESITE CALCULAR: " << endl;
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;
				cout << "	1. Suma de numeros imaginarios." << endl;
				cout << "	2. Resta de numeros imaginarios." << endl;
				cout << "	3. Multiplicacion de numeros imaginarios." << endl;
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;
				cout << "ELECCION: "; cin >> el;
				cout << "\n";
			}
			if (co == 2){ // Si no acepta usar los mismos numeros, se pregunta si desea operar nuevamente pero con numeros diferentes.
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;
				cout << "Desea realizar la operacion con otros numeros? " << endl;
				cout << "1. Si,  2. No" << endl;
				cout << "ELECCION: "; cin >> co;
				cout << "\n";
				on = false; // Cambia el estado del bucle on a false, se sale del bucle si la eleccion fue no.
				
				while (co != 1 && co != 2){ // bucle que impide al usuario ingresar un valor invalido
				cout << "Ingrese una eleccion valida" << endl;
				cout << "---------------------------" << endl;
				cout << "ELECCION: "; cin >> co;
				cout << "\n";
				}
			}	
		}
		if (co == 1) continue;  // Si la eleccion fue que no desea usar numeros cierra la calculadora cambiando el estado cal a false si desea continuar se repite el bucle pidiendo los datos nuevamente.
		else{
			cout << "-----------------------------------------------------------------------------------------------------------\n" << endl;
			cout << "                          GRACIAS POR USAR LA CALCULADORA DE NUMEROS IMAGINARIOS\n" << endl;
			cout << "-----------------------------------------------------------------------------------------------------------\n" << endl;
			cal = false;
		}
	}
	
	system("pause");
	return 0;
}
