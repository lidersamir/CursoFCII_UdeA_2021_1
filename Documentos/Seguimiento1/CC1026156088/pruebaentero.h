//la funcion recibe un numero en double
//si es entero responde con un 1, si no lo es responde con 0

#include <iostream>

using namespace std;

int Pruebaentero(double in) 
{
  int y=in;  //toma la parte entera del numero ingresado

  if(in-y==0) 
    return 1;

  if(in-y!=0)
    return 0;
  return 0;
}
