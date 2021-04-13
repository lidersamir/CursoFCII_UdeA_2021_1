#include <iostream>
#include <iomanip>
using namespace std;

int SerieFibonacci(int);

int main(){
    int n;
    cout << "Este programa muestra los términos de la sucesión de Fibonacci." << endl;
    cout << "Ingrese el número de términos que desea ver" << endl;
    cin >> n;
    cout << "\n";
    for(int i = 1; i<=n ; i++){
       cout << i << setw(5) << SerieFibonacci(i) << endl;
       }
    return 0;
}


int SerieFibonacci(int n){
    int c;
    if(n==1){
      return 0;
    }
    if(n==2){
      return 1;
    }
    if(n>2){
       c = SerieFibonacci(n-1)+SerieFibonacci(n-2);
       return c;
    }
}
