#include<iostream>
using namespace std;

// Creamos la funcion recursiva
int fibonacci(int n){
  if(n < 2) // Condicion para que llame los primeros terminos de fibonacci
    return n;

  return fibonacci(n-1) + fibonacci(n-2);
  }


int main() {
  int n;
  cout<<"ingrese la cantidad de terminos de fibonacci que desea: ";
  cin >> n;
  fibonacci(n);

  cout<<"la sucesion de fibonacci es:"<<endl; 
  for(int i =0; i <= n-1; i++){
    cout << fibonacci(i) << " ";
    cout<<endl;
  }
  return 0;
}
