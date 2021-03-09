//en esta version del codigo para la tarea#1 se llena la tabla con la ayuda de funciones
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void Dimensiones(float largo, float ancho, float profundidad )// se define la funcion que calcula las dimensiones 
{
	//Calculos requeridos
	float LxA = largo*ancho; //secuencia sugerida por el ejercicio
	float LtA = largo+ancho;
	
	float  perimetro = 2*LtA;
	float  volumen = LxA*profundidad;
	float  areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo //presentacion en pantalla
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
}

int main()
{
	//PRESENTACION DE LOS DATOS EN LA TABLA
	//se imprimen lineas del titulo
	cout << "---------------------------------------------------------------------------------------\n";
	cout << "                            TABLA DE VALORES COMPLETA\n";
	cout << "---------------------------------------------------------------------------------------\n";
	cout << "Largo    Ancho    Profundidad    Perimetro    Volumen    Area de superficie subterranea\n";
	cout << "-----    -----    -----------    ---------    -------    ------------------------------\n";
	
	
	//LLENADO DE LA TABLA
	//LINEA #1
	Dimensiones(25.0, 10.0, 5.0);
	
	//LINEA #2
	Dimensiones(25.0, 10.0, 5.5);
	
	//LINEA #3
	Dimensiones(25.0, 10.0, 6.0);
	
	//LINEA #4
	Dimensiones(25.0, 10.0, 6.5);
	
	//LINEA #5
	Dimensiones(30.0, 12.0, 5.0);
	
	//LINEA #6
	Dimensiones(30.0, 12.0, 5.5);
	
	//LINEA #7
	Dimensiones(30.0, 12.0, 6.0);
	
	//LINEA #8
	Dimensiones(30.0, 12.0, 6.5);
	
	
	return 0;
	
}
