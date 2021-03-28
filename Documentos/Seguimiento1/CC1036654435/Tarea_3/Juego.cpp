#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int r, n, valor, intento=0, imax = 10;
	srand(time(NULL));
	
	cout << "------------- Bienvenido a adivina el numero -------------" << endl;
	cout << "\nINSTRUCCIONES: " << endl;
	cout << " Se pedira un numero entre 1-100, si este coincide con el que eligio la computadora..." << endl;
	cout << "						 Habra granado!" << endl;
	cout << " Cada que falle se contaran intentos, tendras 10 oportunidades para adivinar el numero" << endl;
	cout << "------------- ------------- ------------- ------------- ------------- ------------- \n" << endl;
	
	cout << "Desea Jugar a adivinar el numero con la computadora? " << endl;
	cout << "1. Si, 2. No" << endl;
	cout << "Eleccion: "; cin >> r;
	cout << "\n";
	
	while (r != 1 && r != 2){
		cout << "Ingrese una eleccion valida" << endl;
		cout << "Eleccion: "; cin >> r;
		cout << "\n";
	}
	
	while (r == 1){
		valor = 1+rand()%(100);
		n = 999;
		
		while (n != valor){
			if (intento != 0){
				cout << "Intento: " << intento << "\n" << endl;
			}
			
			cout << "Digite un numero: "; cin >> n;
			
			if (n > valor && n < 100 && n > 0){
				cout << "\nEl numero solicitado es menor" << endl;
				intento++;
			}
			if (n < valor && n < 100 && n > 0){
				cout << "\nEl numero solicitado es mayor" << endl;
				intento++;
			}
			if (n>100 || n<0){
				cout << "\nError \nDigite un numero entre 1-100" << endl;
				cout << "El ultimo numero elegido fue: " << n << endl;
			}
			if (intento == imax){ // Quitar para que no corte el juego a los 10 intentos o modificar variable imax para controlar los intentos.
				break;
			}
		}
		
		if (intento != imax){
			cout << "------------- ------------- ------------- ------------- ------------- ------------- " << endl;
			cout << "\n                    Felicidades, adivinaste el numero\n" << endl;
			cout << "                           Numero de intentos: " << intento << "\n" << endl;
			cout << "------------- ------------- ------------- ------------- ------------- ------------- " << endl;
			cout << "Desea volver a jugar?" << endl;
			cout << "1. Si, 2. No" << endl;	
			cout << "Eleccion: "; cin >> r;	
			
			while (r != 1 && r != 2){
				cout << "Ingrese una eleccion valida" << endl;
				cout << "Eleccion: "; cin >> r;
				cout << "\n";
			}
			intento = 0;
		}
		else{
			cout << "------------- ------------- ------------- ------------- ------------- ------------- " << endl;
			cout << "\n                            Has perdido :c" << endl;
			cout << "\n                    El numero solicitado era: "<< valor << "\n" << endl;
			
			cout << "------------- ------------- ------------- ------------- ------------- ------------- " << endl;
			cout << "Desea volver a jugar?" << endl;
			cout << "1. Si, 2. No" << endl;	
			cout << "Eleccion: "; cin >> r;	
			cout << "\n";
			intento = 0;
		}	
	}

	return 0;
}
