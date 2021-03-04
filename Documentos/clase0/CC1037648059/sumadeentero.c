// Una clase es un conjunto de funciones o intrucciones que pueden ser usadas invocandolas desde otro programa

//La programación orientada a objetos es aquella que se inclina a crear clases que tomen datos y tengan como salida
//otros datos de interes
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Escriba el primer numero que desea sumar: "<<endl;
  cin>>a;
  cout<<"Escriba el segundo numero que desea sumar: "<<endl;
  cin>>b;
  c=a+b;
  cout<<"La suma "<<a<<" + "<<b<<" = "<<c<<endl;
  return 0;
}
