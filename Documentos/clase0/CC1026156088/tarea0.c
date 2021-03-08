// clase: para mi una clase puede cualquier cosa cuando estamos programando, dicha clase debe tener unas caracterisiticas que la representen, asi como unas operaciones definidas

// POO:la programacion orientada a objetos para mi es cuando se utilizan ciertas clases, que fueron debidamente definidas en el programa, estas clases son lo que llamamos objetos.

#include<iostream>


#include <iostream>
using namespace std;


int suma(int a,int b){return a+b;};


int main(){
  int a;
  int b;

  a=34;
  b=8484;
  
  //int suma(int a, int b){return a+b;};
  int s;
  s=suma(a,b);
  cout<<"el resultado de la suma entre "<<a<<" y "<<b<<" es: \n";
  cout<<s<<"\n";
return 0;
}
