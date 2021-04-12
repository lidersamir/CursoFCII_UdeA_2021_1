#include <iostream>
#include <math.h>

#define f(x) cbrt(1+(7*x))  // Se define la funcion que se desea integrar, se uso el metodo de math.h para c++ para simplificar el codigo y evitar mas error en el resultado.

using namespace std;

float trapezoide(float a, float b, int k){
	/*
	En este metodo, el area bajo la curva es evaluada dividiendo el area total en pequeñas divisiones k
	*/
	int kk=k;
	float aa=a,bb=b,sum=0.0,stp,n;

	stp = (bb-aa)/kk; // Divisiones del intervalo
	sum = f(aa) + f(bb); // Definicion de la integral en los limites
	for (int i=1;i<= kk-1;i++){
		n = aa + i*stp;
		sum += 2*(f(n)); // El valor de la integral sera delta(x)/2 * ( f(x0) + 2f(x1) + 2f(x2) + ... + 2f(xn) )
	}
	
	sum *= stp/2;
	
	return sum; 
}

float simpson13(float a, float b, int k){
	/*
	Es una forma extendida de la regla del trapezoide donde se aproxima a un polinomio de segundo orden
	*/
	int kk = k;
	float aa=a,bb=b,sum=0.0,stp,n;
	
	stp = (bb-aa)/kk;
	sum = f(aa) + f(bb);
	for (int i=1;i<= kk-1;i++){
		n= aa + i*stp;
		if(i%2 == 0) sum += 2*(f(n)); 
		else sum += 4*(f(n));  // El valor de la integral sera delta(x)/3 * ( f(a) + 4f((a+b)/2) + f(b) )
	}
	
	sum *= stp/3;
	
	return sum;
}

float simpson38(float a, float b, int k){
	/*
	Es igual que la regla de simpson (1,3) con la diferencia que la anterior se usa para cuando k es par y esta para k multiplo de 3.
	*/
	int kk = k;
	float aa = a,bb = b,sum=0.0,stp,n;
	
	stp = (bb-aa)/kk;
	sum = f(aa) + f(bb);
	for (int i=1;i<= kk-1;i++){
		n= aa + i*stp;
		if(i%3 == 0) sum += 2*(f(n)); 
		else sum += 3*(f(n)); // El valor de la integral es 3 delta(x)/ 8 * ( f(x0) + f(xn) + 3( f(x1) + f(x2) + f(x4) + ... ) + 2( f(x3) + f(x6) + ... ) ).
	}
	
	sum *= (stp*3.0)/8.0;
	
	return sum;
}

int main(){
	float a,b,k,int1,int2,int3;
	
	cout << "Ingrese el valor del limite inferior: "; cin >> a;
	cout << "Ingrese el valor del limite superior: "; cin >> b;
	cout << "Ingrese el valor del numero de sub intervalos: "; cin >> k;
	
	int1 = trapezoide(a,b,k);
	int2 = simpson13(a,b,k);
	int3 = simpson38(a,b,k);
	
	cout << "----------------------------------------------------------------------------------------------------------------------------------\n" << endl;
	cout << "Se realizara la comparacion entre los metodos investigados de la REGLA TRAPEZOIDAL Y LA REGLA DE SIMPSON (1/3) Y (3/8)" << endl;
	cout << "Ademas se compara con el resultado encontrado por la web especializada en este tipo de resultados (wolpham alpha)" << endl;
	cout << "La integral a resolver es: " << endl;
	cout << "------------------------------------------------------------------------------------\n" << endl;
	cout << "                                f(x) = raiz_cubica( 1 + 7x )" << endl;
	cout << "        Con los limites de integracion: a = " << a << " , b = " << b << ", k = tamaño del paso = " << k << endl;
	cout << "\n------------------------------------------------------------------------------------" << endl;
	cout << "El resultado de la integral usando la REGLA TRAPEZOIDAL es: " << int1 << endl;
	cout << "El resultado de la integral usando la DE SIMPSON (1/3) es: " << int2 << endl;
	cout << "El resultado de la integral usando la DE SIMPSON (3/8) es: " << int3 << endl;
	cout << "El resultado de la integral usando Wolpham Alpha es: " << 1.60714 << endl;
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "Se comprueba que el valor mas cercano al teorico (debido a su precision es el obtenido por la herramienta Wolpham Alpha)" << endl;
	cout << "es la integral realizada usando el metodo de la REGLA DE SIMPSON (1/3), cuya precision se encuentra hasta la 5ta cifra significativa" << endl;
	cout << "Hay que tener en cuenta que al manipular y aumentar el tamaño del paso k, la precision aumenta en cada metodo." << endl;
	
	system("pause");
	return 0;
}
