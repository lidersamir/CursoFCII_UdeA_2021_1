#include <iostream>
#include "seno.h"
#include <math.h>
using namespace std;

// Implementacion de las clases


// Defenimos el constructor de la clase
SenoTaylor::SenoTaylor(int _n, float _x){
  n = _n;
  x = _x;
}

// Creamos una funcion que calcula el factorial
int SenoTaylor::Factorial(int m){
  int producto=1;
  for (int l=1;l<=m;l=l+1){
    producto = producto*l;
  }
  return producto;
}
// Creamos la funcion que aproxima el seno usando series de Taylor
float SenoTaylor::AproxSeno(){
  int k=1;
  int p=1;
  float senx=0;
  for ( i=1;i<=n;i=i+1){
    if(i%2 != 0){
      senx = senx + k*(pow(x,p))/Factorial(i);
      k=k*(-1);
      p=p+2;
     
      }
  }
  return senx;
}

// Creamos una funcion para retornar los resultados
void SenoTaylor::MuestraValor(){
  cout<<"El valor del factorial es: "<<Factorial(n)<<endl;
  cout<<"El valor del seno es: "<<AproxSeno()<<endl;
}
