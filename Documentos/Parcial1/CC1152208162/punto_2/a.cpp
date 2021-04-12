#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void jugar(){ //Aquí se va a definir todo el juego
	
	int dado1, dado2, dado3, dado4, suma, suma2;
	
	srand(time(NULL)); //Inicializa la semilla
	
	dado1 = 1 + rand() % 6; //Número aleatorio del 1 al 6, los dados 1 y 2 equivalen al lanzamiento inicial
	dado2 = 1 + rand() % 6;
	suma = dado1 + dado2;
	
	if(suma== 7 || suma== 11){ //Si el jugador saca un 7 o un 11 en el primer lanzamiento gana y se acaba la partida
		cout << "       Tiraste un " << suma << endl;
		cout << "Felicitaciones, ganaste!" << endl;
		return;
		}
	
	else if(suma== 2 || suma== 3 || suma== 12){ //Si saca 2, 3, o 12 en el primer lanzamiento pierde y se acaba la partida
		cout << "       Tiraste un " << suma << endl;
		cout << "Perdiste, la casa gana!" << endl;
		return;
		}
	
	else{ //Si saca otro número el primer lanzamiento es un punto y hay que tirar de nuevo
		cout << "Punto! Tiraste un " << suma << endl; 
		do{ //Se tiran los dados hasta que el nuevo lanzamiento sea igual al primero o se saque un 7
			dado3= 1 + rand() % 6; //Los dados 3 y 4 corresponden al nuevo lanzamiento 
			dado4= 1 + rand() % 6;
			suma2= dado3 + dado4;
			
			cout << "       Tiraste un " << suma2 << endl;
			
			if(suma2== suma){ //Si el nuevo lanzamiento equivale al punto gana y se acaba la partida
				cout << "Felicitaciones, ganaste!" << endl;
				return;
				}
			}while(suma2 != 7); //Hace esto siempre y cuando no se saque 7, si saca 7 pierde la partida.
		
		cout << "Perdiste, la casa gana!" << endl;
		}
	}

int main (){
	int x;
	cout<< "Bienvenido a Craps, ¿deseas jugar? (NO = 1, SI = 2): ";
	cin >> x;
	
	while(x!=1){//Condición para que siga el juego, si el usuario no preciona 1 se juega:
		jugar();
		
		cout<< "¿deseas seguir jugando? (NO = 1, SI = 2): "; //Si el juego termina se le da la opción de seguir jugando y aplica la condición anterior
		cin >> x;
		}
	
	return 0;
	}
