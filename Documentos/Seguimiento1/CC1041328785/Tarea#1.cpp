/*Desarrollo Tarea1.
Por favor, haga el ejercicio 9 de la sección 3.6 del texto guia */

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main()
{
	

	double largo, ancho, profundidad, LxA, LtA, perimetro, volumen, areaSp;
	
	
	//entrada de las variables
	cout <<"Prueba rapida de los calculos\n ";
	cout <<"Por favor ingrese primero el largo, luego el ancho y finalmente la profundidad:\n";
	cin >> largo;
	cin >> ancho;
	cin >> profundidad;
	cout<<endl;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << "Perimetro:" << perimetro << "\nVolumen:" << volumen << "\nArea superficial subterranea:" << areaSp <<"\n";
	cout << endl;
	
	//PRESENTACION DE LOS DATOS EN LA TABLA
	//se imprimen lineas del titulo
	cout << "---------------------------------------------------------------------------------------\n";
	cout << "                            TABLA DE VALORES COMPLETA\n";
	cout << "---------------------------------------------------------------------------------------\n";
	cout << "Largo    Ancho    Profundidad    Perimetro    Volumen    Area de superficie subterranea\n";
	cout << "-----    -----    -----------    ---------    -------    ------------------------------\n";
	
	//LINEA #1
	
	largo = 25.0;
	ancho = 10.0;
	profundidad = 5.0;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
		
	//LINEA #2
	largo = 25.0;
	ancho = 10.0;
	profundidad = 5.5;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
		
	//LINEA #3
	largo = 25.0;
	ancho = 10.0;
	profundidad = 6.0;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
		
	//LINEA #4
	largo = 25.0;
	ancho = 10.0;
	profundidad = 6.5;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
		
	//LINEA #5
	largo = 30.0;
	ancho = 12.0;
	profundidad = 5.0;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
	
	//LINEA #6
	largo = 30.0;
	ancho = 12.0;
	profundidad = 5.5;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
	
	//LINEA #7
	largo = 30.0;
	ancho = 12.0;
	profundidad = 6.0;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
	
	//LINEA #8
	largo = 30.0;
	ancho = 12.0;
	profundidad = 6.5;
	
	//calulos inmediatos
	LxA = largo*ancho;
	LtA = largo+ancho;
	
	//dimensiones
	perimetro = 2*LtA; 
	volumen = LxA*profundidad;
	areaSp = 2*LtA*profundidad + LxA;
	
	cout << setw(3) << largo
		<< setw(9) << ancho
		<< setw(12) << profundidad
		<< setw(14) << perimetro
		<< setw(14) << volumen
		<< setw(20) << areaSp << endl;
	
	
	return 0;
}
