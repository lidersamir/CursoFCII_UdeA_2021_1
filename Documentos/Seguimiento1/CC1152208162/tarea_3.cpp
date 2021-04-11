#include <iostream>  
#include <time.h>       

using namespace std;

int main (){
	int numero, intento;
	int x;
	
	srand (time(NULL)); //Inicializa la semilla
	
	while(x!= 1){ //Condición para que siga el juego, si el usuario no preciona 1 se juega:
		numero = rand() % 1000 + 1; //Para generar el número aleatorio entre 1 y 1000
		
		do{
			cout << "Adivina el numero (entre 1 y 1000): ";
			cin >> intento;
			
			if (numero< intento){ //Si el número ingresado es mayor, se le da la pista y se vuelve a guardar el nuevo intento
				cout << "El número es menor al ingresado" << endl;
				}
			if (numero> intento){ //Si el número ingresado es menor, se le da la pista y se vuelve a guardar el nuevo intento
				cout << "El número es mayor al ingresado" << endl;
				}
				
			}while (numero!= intento); //La comparación del intento con el número se hace siempre y cuando sean diferentes
		
		cout << "Felicitaciones, adivinaste!" << endl;
		cout<< "Si quieres salir del juego presiona 1, si deseas seguir jugando presiona 2: ";
		cin >> x;
		}
	
	return 0;
	}
