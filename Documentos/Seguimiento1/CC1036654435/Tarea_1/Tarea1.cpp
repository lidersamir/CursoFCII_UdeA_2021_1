// Realizado por: Sergio Duque Mejía
// CC: 1036654435 

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	/*
		Se escribe un programa que basado en una matriz 1x8 toma las componentes relacionadas al largo, ancho y profundidad 
		para resolver las operaciones basadas en formulas de perimetro, volumen y area de la piscina, luego imprime una tabla con los valores
		obtenidos en cada fila.	
	*/
	
	// -------------  Variables:
	int f=1,c=8; // Filas - Columnas
	float largo[1][8] = {{25.0,25.0,25.0,25.0,30.0,30.0,30.0,30.0}},
		  ancho[1][8] = {{10.0,10.0,10.0,10.0,12.0,12.0,12.0,12.0}},
		  profundidad[1][8]= {{5.0,5.5,6.0,6.5,5.0,5.5,6.0,6.5}};		  
	float perimetro[1][8],volumen[1][8],area[1][8];
	
	
	// -------------  Formato Tabla:
	cout << " Largo | Ancho | Profundidad | Perimetro | Volumen | Area de superficie subterranea " << endl;
	cout << " ---------------------------------------------------------------------------------- " << endl;
	
	
	// -------------- Resolucion de formulas:
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			perimetro[i][j] = 2*(largo[i][j]+ancho[i][j]);
			volumen[i][j] = largo[i][j]*ancho[i][j]*profundidad[i][j];
			area[i][j] = 2*(largo[i][j]+ancho[i][j])*profundidad[i][j] + largo[i][j]*ancho[i][j];
		}
	}
	
	
	// -------------- Impresion de resultados + Formato de Tabla:
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout << dec << setw(5) << largo[i][j] << setw(3) << "|" 
				<< setw(5) << ancho[i][j]  << setw(3) << "|" 
				<< setw(8) << profundidad[i][j] << setw(6) << "|" 
				<< setw(7) << perimetro[i][j] << setw(5) << "|" 
				<< setw(6) << volumen[i][j] << setw(4) << "|" 
				<< setw(18) << area[i][j] << endl;
				cout << " ---------------------------------------------------------------------------------- " << endl; 
		}
		cout << "\n";
	}
	
	system("pause"); // Permite permanecer en la ventana hasta que el usuario decida cerrar este precionando un boton.
	return 0;
}
