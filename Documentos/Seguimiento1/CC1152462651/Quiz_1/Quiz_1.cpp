/* Téngase en cuenta que la relación de recurrencia para la sucesión de Fibonacci es F_{n}=F_{n-1} + F_{n-2}. Es decir, el número siguiente equivale a la suma de los dos anteriores.*/

#include<iostream>
#include<cmath>

using namespace std;

int fibonacci(int n){

	if(n<=1){
		return n;}

	return fibonacci(n-1)+fibonacci(n-2);
}

int main(){

	int k;
		
	cout<<"Introduzca el número del término de la sucesión de Fibonacci que desea conocer: ";
	cin>>k;
	
	cout<<"El "<<k<<"-ésimo número de la sucesión de Fibonacci es: "<<fibonacci(k)<<endl;

	return 0;
}

