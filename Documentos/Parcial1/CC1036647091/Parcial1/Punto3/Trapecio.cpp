/*La integral es el area debajo de la curva y vamos a analizar integrales numerica con el metodo del trapecio.
El metodo en cuestion es el siguiente: Se parte el intervalo en el que se va a realizar la integral en un numero que llamamos nodos y obtenemos la imagen de esos nodos bajo la funcion, luego con esos puntos formamos trapecios y sumamos estos trapecios.*/



#include <iostream>
#include <math.h>
using namespace std;

double funcion(float x) //se define la funcion que se evaluara en el programa
{
  return (x * x ) ; //funcion x**2
}

int main() //funcion principal
{	
  float a = 0; //limite inferior
  float b = 1; //limite superior
  int n = 4; //particiones
  double fx = 0.0; //iniciliza la variable
  double fa = funcion(a); //funcion en a
  double fb = funcion(b);//funcion en b
  double dx = (b - a)/(float)n; //diferencial
  double area, error, exac;
  float i;
 
  for (i = a; i < b; i = i + dx) //ciclo para el intervalo
	{
	  fx = fx + funcion(i); //aumenta para cada particion
	}
			
        area = (fx + (fa + fb) / 2) * dx; //area, o, integral
	exac = 1.0/3;
	error = abs(area-exac); //calcula el error
	cout << "Programa que calcula la integral de x**2 en el intervalo [0,1] haciendo 4 particiones del intervalo y usando el metodo del trapecio. " << endl;
	cout << "----------------" << endl;
        cout << "El valor de la integral con el metodo del trapecio es: " << area << endl;
	cout << "----------------" << endl;
	cout << "El valor exacto de la integral es: 1/3" << endl;
	cout << "----------------" << endl;
	cout << "El valor del error es: " << error <<  endl;
	return 0;
}

/*Se tomo el metodo del trapecio del siguiente video: https://youtu.be/OIqpt-0CUNE*/

