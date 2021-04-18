/* SOLUCION SEGUIMIENTO 2_TAREA#1

scriba un programa que incluya dos funciones llamadas calc_prom() y varianza(). 
La función calc_prom() deberá calcular y devolver el promedio de
los valores almacenados en el arreglo llamado valores_prueba. El arreglo deberá 
ser declarado en main() e incluir los valores 89, 95, 72, 83, 99, 54, 86, 75,
92, 73, 79, 75, 82, 73. La función varianza() deberá calcular y devolver la varianza 
de los datos. La varianza se obtiene restando el promedio de cada valor en
valores_prueba, elevando al cuadrado los valores obtenidos, sumándolos y dividiéndolos 
entre el número de elementos en valores_prueba. Los valores devueltos
de calc_promedio() y varianza() deberán desplegarse usando instrucciones
cout en main().*/

#include <iostream>
#include <cmath>

using namespace std;

//PROTOTIPO DE LAS FUNCIONES
double Calc_Prom(double [], int); 
double Varianza(double [], int);

int main()
{
	//Rescatar informacion 
	double promedio;
	double varianza;
	
	//arreglo con los valores a trabajar
	int Len = 14; //Tamaño del arreglo
	double Valores_Prueba[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};//Arreglo
	
	//Calculo de promedio y varianza
	promedio = Calc_Prom(Valores_Prueba, Len);
	varianza = Varianza(Valores_Prueba, Len);
	
	cout << "\n-------------------------------------------" <<endl;
	cout << "Para el siguiente arreglo de datos " << endl;
	cout << "-------------------------------------------" <<endl;
	
	for (int i = 0; i < Len; i++)
	{
		cout << Valores_Prueba[i] <<endl;
	}
	cout << "-------------------------------------------" <<endl;
	cout << "El promedio es: "  << promedio << endl;
	cout << "Con varianza: "  << varianza << endl;
	cout << "-------------------------------------------" <<endl;
	
	return 0;
}

double Calc_Prom(double Vals[], int len)//Funcion que calcula el promedio
{
	double suma = 0; 
	
	for(int i = 0; i < len; i++)//se efectua la suma de los valores del arreglo
	{
		suma += Vals[i];
	}
	
	return suma/len; //se divide la suma entre el numero de elemenetos del arreglo
}//Fin del calculo del promedio 

double Varianza(double Vals[], int len)//Funcion que calucla la varianza 
{
	double sum = 0;
	double prom = Calc_Prom(Vals, len);
	
	for(int i = 0; i < len; i++)// la suma se efectua sobre los terminos (Valor_i - promedio)^2
	{
		sum += pow((Vals[i] - prom), 2);
	}
	
	return sum/len; //se divide la suma entre el numero de elemenetos del arreglo
}//Fin del calculo de la varianza

