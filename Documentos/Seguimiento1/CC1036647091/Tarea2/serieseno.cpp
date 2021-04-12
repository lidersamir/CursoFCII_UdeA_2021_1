#include <iostream>
#include <math.h>
#include "serieseno.h"

using namespace std;


SerieSeno::SerieSeno(int _N, float _x) //se inicializa el constructor 
{
  N = _N;
  x = _x;
}

void SerieSeno::calculafactorial() //calcula factorial
{
  factorial = factorial * i; //calcula el factorial teniendo en cuenta que n!=n*(n-1)*(n-2)...1
}

void SerieSeno::calculaseno() //funcion que calcula el seno y tambien el factorial
{
  //se definen las variables necesarias
  int k = 1, p =1;
  sum = 0;
  factorial = 1;
  i = 1;
  
  for (i=1; i<=N; i++) // for corre hasta N, donde N es el numero de terminos
    {
      calculafactorial(); //calcula el factorial 
      if (i%2 != 0) //condicion para escoger potencias
	{
	  sum= sum + (k*powf(x,p))/factorial; //acumula suma de terminos
	  k=k*(-1); //cambia signo 
	  p=p + 2; //aumenta a la siguiente potencia impar 
	}
    }
}

void SerieSeno::mostrarMensaje()
{
    cout << "El sin(" << x << ")  es  " << sum << endl;
}
