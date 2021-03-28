#include<iostream>
using namespace std;

int fibonacci( int n ){
	int a=0,b=1,s=0;
	for(int i=1;i<=n;i++){
		s = a+b;
		b=a;
		a=s;
	}
	return a;
}

int main(){
	int n;
	
	cout << "Digite el numero max de la serie de Fibonacci: "; cin >> n;
	cout << "El numero correspondiente a la posicion: " << n << " en la serie de Fibonacci es: " << fibonacci(n) << endl;
	
	system("pause");
	return 0;
}
