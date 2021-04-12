/*Metodo de Simpson 1/3: Consiste en dividir el intervalo en un numero de rectangulo, donde ese numero de rectangulos debe ser par, en la parte de encima de cada rectangulo aproxima la funcion por medio de una parabola.
*/

#include <iostream>
#include <math.h>
using namespace std;

double funcion(float x) //se define la funcion que se evaluara en el programa
{
  return (x * x ) ; //funcion x**2
}

int main()
{
  float a = 0;
  float b = 1;
  float integral = 0;
  float h = 0;
  float k, error, exac;
  int i, n = 4;
  
  h = (b - a)/n; //tamaño del subintervalo
  integral = funcion(a) + funcion(b);//encuetra valor de la integral

  for(i=1; i <= n-1; i++) 
 {
   k = a + i*h; //primer intervalo
   if(i%2==0) //condicion que escoge los pares
  {
    integral = integral + 2 * (funcion(k));
  }
   else //siguiente termino
  {
    integral = integral + 4 * (funcion(k));
  }
 }
 integral = integral * h/3; //calcula la integral usando formula
 exac = 1.0/3;
 error = abs(integral - exac); //calcula error
 cout << "Programa que calcula la integral de x**2 en el intervalo [0,1] haciendo 4 particiones del intervalo y usando la regla de Simpson. " << endl;
 cout << "----------------" << endl;
 cout<< "El valor de la integral usando la regla de Simpson 1/3 es: "<< integral << endl;
 cout << "El valor exacto de la integral es: 1/3" << endl;
 cout << "----------------" << endl;
 cout << "El valor del error es: " << error <<  endl;

 return 0;
}

/*Se observa que el error (para la integral particular) en el metodo de simpson en cero, lo que permite intuir que para esa integral es mas preciso el metodo de Simpson*/

/*Se tomo el metodo de Simpson 1/3 de siguiente video: https://youtu.be/lEtE__0VW0I*/
