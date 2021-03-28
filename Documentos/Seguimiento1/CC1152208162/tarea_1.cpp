#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

float multiplicacion, suma; //para definir las 2 operaciones que el libro indica se deben realizar primero
float perimetro, volumen, area;

//se definen 3 funciones para calcular el perímetro, volumen, y area respectivamente, teniendo en cuenta que las 2 operaciones que se deben realizar como primer paso:
double calcular_perimetro(float largo, float ancho, float profundidad){ //función para calcular el perímetro
	
	multiplicacion= largo * ancho;
	suma=  largo + ancho;
	
	perimetro= 2 * suma;
	return perimetro;
	}
	
double calcular_area(float largo, float ancho, float profundidad){ //función para calcular el área
	multiplicacion= largo * ancho;
	suma=  largo + ancho;
	
	area= 2 * suma * profundidad + multiplicacion;
	return area;
	}
	
double calcular_volumen(float largo, float ancho, float profundidad){ //función para calcular el volumen
	multiplicacion= largo * ancho;
	suma=  largo + ancho;
	
	volumen= multiplicacion * profundidad;
	return volumen;
	}

int main()
{
	//se definen nuevas variables para calcular los perímetros (p), areas (a), y volúmenes (v) de la tabla indicada en el libro:
	double p1, a1, v1;
	double p2, a2, v2;
	double p3, a3, v3;
	double p4, a4, v4;
	double p5, a5, v5;
	double p6, a6, v6;
	double p7, a7, v7;
	double p8, a8, v8;
	
	//se hacen los cálculos con los valores de largo, ancho, y profundidad indicados en el libro, usando las funciones previamente declaradas:
	p1= calcular_perimetro(25.0, 10.0, 5.0);
	a1= calcular_area(25.0, 10.0, 5.0);
	v1= calcular_volumen(25.0, 10.0, 5.0);
	
	p2= calcular_perimetro(25.0, 10.0, 5.5);
	a2= calcular_area(25.0, 10.0, 5.5);
	v2= calcular_volumen(25.0, 10.0, 5.5);
	
	p3= calcular_perimetro(25.0, 10.0, 6.0);
	a3= calcular_area(25.0, 10.0, 6.0);
	v3= calcular_volumen(25.0, 10.0, 6.0);
	
	p4= calcular_perimetro(25.0, 10.0, 6.5);
	a4= calcular_area(25.0, 10.0, 6.5);
	v4= calcular_volumen(25.0, 10.0, 6.5);
	
	p5= calcular_perimetro(30.0, 12.0, 5.0);
	a5= calcular_area(30.0, 12.0, 5.0);
	v5= calcular_volumen(30.0, 12.0, 5.0);
	
	p6= calcular_perimetro(30.0, 12.0, 5.5);
	a6= calcular_area(30.0, 12.0, 5.5);
	v6= calcular_volumen(30.0, 12.0, 5.5);
	
	p7= calcular_perimetro(30.0, 12.0, 6.0);
	a7= calcular_area(30.0, 12.0, 6.0);
	v7= calcular_volumen(30.0, 12.0, 6.0);
	
	p8= calcular_perimetro(30.0, 12.0, 6.5);
	a8= calcular_area(30.0, 12.0, 6.5);
	v8= calcular_volumen(30.0, 12.0, 6.5);

	//se imprimen los datos de manera ordenada teniendo en cuenta el formato de tabla con setw():
	cout << setw(15) << "Largo" << setw(15) << "Ancho" << setw(15) << "Profundidad" << setw(15) << "Perímetro" << setw(15) << "Volumen" << setw(15) << "Area" << endl;
	cout << "          -------------------------------------------------------------------------------" << endl;
	cout << fixed << setprecision(1) ; //para que imprima todos los valores con un decimal, y si no tiene cifras los completa con 0
	cout << setw(14) << "25.0" << setw(15) << "10.0" << setw(12) << "5.0" << setw(15) << p1 << setw(17) << v1 << setw(16) << a1 << endl;
	cout << setw(14) << "25.0" << setw(15) << "10.0" << setw(12) << "5.5" << setw(15) << p2 << setw(17) << v2 << setw(16) << a2 << endl;
	cout << setw(14) << "25.0" << setw(15) << "10.0" << setw(12) << "6.0" << setw(15) << p3 << setw(17) << v3 << setw(16) << a3 << endl;
	cout << setw(14) << "25.0" << setw(15) << "10.0" << setw(12) << "6.5" << setw(15) << p4 << setw(17) << v4 << setw(16) << a4 << endl;
	cout << setw(14) << "30.0" << setw(15) << "12.0" << setw(12) << "5.0" << setw(15) << p5 << setw(17) << v5 << setw(16) << a5 << endl;
	cout << setw(14) << "30.0" << setw(15) << "12.0" << setw(12) << "5.5" << setw(15) << p6 << setw(17) << v6 << setw(16) << a6 << endl;
	cout << setw(14) << "30.0" << setw(15) << "12.0" << setw(12) << "6.0" << setw(15) << p7 << setw(17) << v7 << setw(16) << a7 << endl;
	cout << setw(14) << "30.0" << setw(15) << "12.0" << setw(12) << "6.5" << setw(15) << p8 << setw(17) << v8 << setw(16) << a8 << endl;
	

	}
