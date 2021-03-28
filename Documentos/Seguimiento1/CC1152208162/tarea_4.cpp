#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void Fibonacci(int n_elem){ //Para calcular la serie
	cout<<"Los primeros " << n_elem << " números de la serie de Fibonacci son: "<<endl;
	unsigned long int Arr[n_elem];
	Arr[0] = 0;  //Primer valor de la serie
	Arr[1] = 1; //Segundo valor de la serie, para la recursividad
	cout <<  Arr[0] << setw(3) << Arr[1] << setw(2);
	for (int i=2; i< n_elem; i++){ //Se define la recursividad
		Arr[i] = Arr[i-1] + Arr[i-2];
		cout << "  " << Arr[i];
		}
	}
		
int main(){
	int N;
	cout << "Ingrese el número de elementos de la sucesión de Fibonacci que desea calcular: " << endl;
	cin>> N;
	
	if(N==0) return 0; 
	if(N==1){
		cout << "El primer elemento de la sucesión de Fibonacci es 0, intente otro número" << endl;
		return 0;
		}
	
	Fibonacci(N); //Para valores de N mayores a 1
	return 0;
	}
