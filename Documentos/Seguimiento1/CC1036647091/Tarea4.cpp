#include<iostream>
using namespace std;

int fibonacci(int p){ //forma recursiva 

    if(p < 2)
        return p;

    return fibonacci(p-1) + fibonacci(p-2); //devuelve la funcion hasta que llega a 2
  }
int main() //funcion principal
{
  int p;
  cout << "Ingrese terminos que quiere en la serie Fibonacci" << endl;
  cin >> p;


  fibonacci(p);
  for(int i =0; i <= p-1; i++)
    cout << fibonacci(i) << " ";


  return 0;
}
