#include <iostream> //se incluyen las librerías necesarias
#include <cmath>
#include <iomanip>

/* Regla trapezoidal:
 * Reemplaza la función con n segmentos de una línea recta para calcular el área bajo una curva. la integral de a hasta b se aproxima a 
 * h/2 * [f(x0) + 2f(x1) + 2f(x2) + ... + f(xn)]
 * con h= (b-a)/n */

/* Regla de Simpson:
 * Reemplaza la función con n segmentos parabólicos para calcular el área bajo una curva. la integral de a hasta b se aproxima a 
 * h/3 * [f(x0) + 4(f(x1) + ... + f(xn-1)) + 2(f(x2) + ... + f(xn-2)) + f(xn)]
 * con h= (b-a)/n */

using namespace std;

float funcion(float x){ //Aquí se define una función Fx para probar los métodos de integración
	float Fx= exp(x);
	return Fx;
	}

float trapezoidal(float a, float b, int n){ //Aquí se define la regla trapezoidal
	float h, FX; //se inicializan las variables

	if (n < 3){
		cout << "El número de trapecios debe ser mayor, no se puede calcular la integral." << endl;
		}
	else{
		float sum = 0; //Para calcular los trapecios
		
		h= (b - a)/n; //Se define el ancho del trapecio
		sum= funcion(a); //Se inicia la suma en el límite inferior
		
		for (int i =1; i <= n - 1; i++){ //Para calcular los trapecios consecutivos
			sum += (2 * funcion(h * i));
			}
			
		sum += funcion(b); //La suma finaliza en el límite superior
		FX= h* sum/2; //Valor de la integral
		
		cout << "El resultado de la integral con la regla trapezoidal es:" << FX << endl;
		}
	
	}

float simpson(float a, float b, int n){ //Aquí se define la regla de Simpson
	float h, FX; //se inicializan las variables
	if (n < 3){
		cout << "El número de trapecios debe ser mayor, no se puede calcular la integral." << endl;
		}
	else{
		float sum_impar, sum_par; //Para calcular las sumas de índice par e impar por separado
		sum_impar= 0;
		sum_par= 0;
		
		h= (b - a)/n; //Se define la distancia entre los puntos
		
		for (int i = 1; i < n; i += 2){ //Para calcular la suma de los intervalos de índice impar
			sum_impar += funcion(a + i * h);
			}
		for (int i = 2; i < n; i += 2){ //Para calcular la suma de los intervalos de índice par
			sum_par += funcion(a + i * h);
			}
		FX= h / 3 * (funcion(a) + funcion(b) + 2 * sum_par + 4 * sum_impar); //Valor de la integral
		
		cout << "El resultado de la integral con la regla de Simpson es:" << FX << endl;
		}
	
	}

int main() { 
	float a, b; //Para guardar el intervalo de integración
	int n; //Para guardar el número de particiones
	
	cout << "Compararemos la integración con la regla trapezoidal y la de Simpson, usando como ejemplo la función exponencial. " << endl;
	cout << "Ingrese el intervalo inferior a, el superior b, y el número n de particiones: " << endl;
	cin >> a >> b >> n;
	
	trapezoidal(a, b, n); //Calcula la integral con la regla trapezoidal
	simpson(a, b, n); //Calcula la integral con la regla de Simpson
	cout << "Al comparar ambos valores con el valor teórico se encontró que es más precisa la regla de Simpson." << endl;
	return 0;
	}

