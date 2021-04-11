#include<iostream>
using namespace std;

int fib(int n)
{

    if(n < 2)
        return n;

    return fib(n-1) + fib(n-2);
  }
int main() 
{
  int n;
  cout<< "ingrese terminos de la serie:"<<endl;
  cin >> n;
  int i=0;
  do
  {
      
    cout << fib(i) << ", ";
    i++;
  }while(i<n);
  
  
    


  return 0;
}