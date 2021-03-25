#include <iostream>
#include "seno.h"
using namespace std;

// Esta es la funcion principal que se encarga de llamar las funciones creadas en la clase interactuando con el usuario
int main(){
  int k;
  float l;
  cout<<"Ingrese el orden n: ";
  cin>>k;
  cout<<"Ingrese el valor de x: ";   
  cin>>l;
  SenoTaylor s(k,l);
  s.AproxSeno();
  s.MuestraValor();
  return 0;
}
