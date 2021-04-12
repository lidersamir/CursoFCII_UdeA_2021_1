#include <iostream>
#include <cmath>
#include "sine.h" //La clase

#define pi 3.14159265359 //para convertir x a radianes

using namespace std; 

Sine::Sine(){ //El constructor, inicializa las variables
	varX = 0;
	varN = 0;
	} 

int Sine::Factorial( int X ){ //Definición del factorial
	if (X == 0 or X == 1){ 
		X= 1;
		} //Si X es 0 o 1 el factorial será 1
		
	else if (typeid(X) != typeid( int ) or X < 0 ){ //Si X no es entero o es negativo bota error
		cout << " El número ingresado no es válido, por favor ingrese un número entero mayor o igual a cero "<< " \n" << endl;
		}
	
	else{
		int Xfact = X-1;
		while (Xfact > 0){
			X = (X) * Xfact;
			Xfact = Xfact-1;
			}
		}
		
	return X;
	}


void Sine::Sin(double X, int N){ //Para calcular el seno
	varN = N;
	float seno = 0.0;
	float rad= X * pi/180; //Se transforma x a radianes
	
	for(int i= 0; i <= varN; i++){ //Se define la serie de Tailor del seno
		int exp= 2 * i + 1; //Se toman solo las potencias impares
		seno = seno + (pow(rad, exp) * pow(-1, i))/Factorial(exp);
		}
	cout << "sin("<< X << ") = " << seno << endl;
}

void Sine::Resultado(){ //Se piden los datos y se imprime el resultado
	double X;
	int N;
	
	cout << "Ingrese x, el valor al cual desea calcularle el seno:"<< endl;
	cin >> X;
	cout << "Ahora ingrese N, la precisión con la que se desea calcular:" << endl;
	cin >> N;
	
	Sin(X, N);
	}
