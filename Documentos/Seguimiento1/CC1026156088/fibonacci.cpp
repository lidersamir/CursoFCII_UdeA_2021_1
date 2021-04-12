#include <iostream>
#include "pruebaentero.h"

using namespace std;

int fibo(int in)
{
  int f;

  //primer numero fibonacci
  if(in==0)         
    return 0;

  //segundo numero fibonacci
  if(in==1)
    return 1;

  //termino n-esimo de fibonacci, suma los dos anteriores
  f=fibo(in-1)+fibo(in-2);

  
  return f;
}

int main()
{
  float n;
  cout<<"ingrese el numero entero de fibonacci que desea calcular\n";
  cin>>n;
  //n=50;

  if(Pruebaentero(n)==1)
    cout<<"el numero "<<n<<" de fibonacci es: "<<fibo(n)<<"\n";

  if(Pruebaentero(n)==0)
    cout<<"el numero ingresado no es un entero\n";
      
  return 0;
}
