//DESARROLLO PUNTO #3

#include <iostream>
#include <cmath>

using namespace std;

float funtion(float); //Se define la funcion a integrar 

int main()
{
	//======================================================//
	//=========REGLA DEL TRAPECIO (INTEGRACION)=============//
	//======================================================//
	
	//Limites de integracion 
	float a = 0; 
	float b = 10;
	
	//Se inicializa el valor numerico de la integral
	float I = 0;
	
	//Numero de divisiones del intervalo de integracion
	int k = 10000; 
	
	//Ancho de la divisiones del intervalo 
	float dx = (b - a)/k;
	
	//Implementacion regla de simpson
	//Se hace una sumatoria sobre todo los elementos del trapecio en el intervalo de integracion
	while(a <= b)
	{
		I = I + (funtion(a) + funtion(a + dx))*dx*0.5; 
		
		a = a + dx;  
	}
	cout << "==================================================================================" <<endl;
	cout << "El valor de la integral mediante el metodo del trapecio es : " << I <<endl;
	cout << "==================================================================================" <<endl;
	
	//======================================================//
	//===========REGLA DE SIMPSON (INTEGRACION)=============//
	//======================================================//
	
	//Limites de integracion
	float A = 0;
	float B = 10;
	
	///Numero de divisiones del intervalo de integracion
	int K = 10000;
	
	//Ancho de las divisiones del intervalo
	float Dx = (B - A)/K;
	
	//Se inicializa el valor numerico de la integral
	float  In = Dx * (funtion(A) + funtion(B))/3; //se agregan 
	
	//Implementacion regla de simpson
	
	for(int i = 1; i < K; i += 1 )
	{
		if(i%2 == 0)
		{
			In = Dx * 2 *funtion(A)/3 + In; //Sumatoria de indices pares
 		}	
		else
		{
			In = Dx * 4 *funtion(A)/3 + In; //Sumatoria de indices impares
		}
		
		A = A + Dx;	//Barrido de las K diviones	del intervalo A-B
	}
	
	cout << "==================================================================================" <<endl;
	cout << "El valor de la integral mediante el metodo del Simpson es : " << In <<endl;
	cout << "==================================================================================" <<endl;
	
	
	cout << "==================================================================================" <<endl;
	cout << "Notese que la diferencia entre ambos calculos es de orden de : " << abs(In - I) <<endl;
	cout << "==================================================================================" <<endl;;
	
	return 0;
}

//Implementacion de la funcion a integrar
float funtion(float X)
{
	return sqrt(pow(X, 3) + X);
}
