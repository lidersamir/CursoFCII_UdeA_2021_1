#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

float SaldoenBanco = 1000000.0; //Inicializa el saldo

int jugar(){ //Aquí se va a definir todo el juego
	int dado1, dado2, dado3, dado4, suma, suma2; 
	int ganar; //Para saber si el jugador ganó (ganar= 1) o perdió (ganar= 0)
    srand(time(NULL)); //Inicializa la semilla

    dado1 = 1 + rand() % 6; //Número aleatorio del 1 al 6, los dado 1 y 2 equivalen al lanzamiento inicial
    dado2 = 1 + rand() % 6;
    suma = dado1 + dado2;

    if(suma== 7 || suma== 11){ //Si el jugador saca un 7 o un 11 en el primer lanzamiento gana y se acaba la partida
		cout << "       Tiraste un " << suma << endl;
		cout << "Felicitaciones, ganaste!" << endl;
		ganar= 1;
		}
    else if(suma== 2 || suma== 3 || suma== 12){ //Si saca 2, 3, o 12 en el primer lanzamiento pierde y se acaba la partida
		cout << "       Tiraste un " << suma << endl;
		cout << "Perdiste, la casa gana!" << endl;
		ganar= 0;
		}
    else{ //Si saca otro número el primer lanzamiento es un punto y hay que tirar de nuevo
		cout << "Punto! Tiraste un " << suma << endl; 
		do{ //Se tiran los dados hasta que el nuevo lanzamiento sea igual al primero o se saque un 7
			dado3= 1 + rand() % 6; //los dados 3 y 4 corresponden al nuevo lanzamiento 
			dado4= 1 + rand() % 6;
			suma2= dado3 + dado4;
			cout << "       Tiraste un " << suma2 << endl;
			
			if(suma2== suma){ //Si el nuevo lanzamiento equivale al punto gana y se acaba la partida
				cout << "Felicitaciones, ganaste!" << endl;
				ganar= 1;
				}
			}while(suma2 != 7); //Hace esto siempre y cuando no se saque 7, si saca 7 pierde la partida.
			
		cout << "Perdiste, la casa gana!" << endl;
		ganar= 0;
        }
	return ganar; 
	}
	
void dialogo(){ //Para mostrar diálogos según el saldo que se tenga

  if(SaldoenBanco == 0)
      cout << "Abrite que ya perdiste! "<< endl;
      
  else if(SaldoenBanco >= 1 and SaldoenBanco < 100)
      cout << "Estás en las últimas, pilas... "<< endl;
  
  else if(SaldoenBanco >= 100 and SaldoenBanco < 10000)
      cout << "Te vi mal "<< endl;
      
  else if(SaldoenBanco >= 10000 and SaldoenBanco < 100000)
      cout << "Mucha loca si te vas ya "<< endl;
      
  else if(SaldoenBanco >= 100000 and SaldoenBanco < 1000000)
      cout << "Puedes dar más, sigue "<< endl;
     
  else if(SaldoenBanco >= 1000000 and SaldoenBanco <= 3000000)
      cout << "Eso campeón! "<< endl;
 
  else if(SaldoenBanco >= 3000000)
      cout << "Nos vas a quebrar! mejor andate y mecateate la plata en cositas "<< endl;

}

int main (){
	int x;
	
	cout<< "Bienvenido a Craps, tienes un saldo inicial de 1'000.000, ¿deseas jugar? (NO = 1, SI = 2): ";
	cin >> x;
	
	while(x!=1){//Condición para que siga el juego, si el usuario no preciona 1 se juega:
		
		int Apuesta = 0; //Se inicializa el valor de la apuesta
		do{
			cout << "Ingresa tu apuesta ";
			cin >> Apuesta; 
			if(Apuesta > SaldoenBanco || SaldoenBanco == 0) { //Para verificar que la apuesta no exeda al saldo en banco
				cout << "Estás tirando muy algo, no tienes fondos " << endl;
				break;
				}
			else if(jugar() == 1){ //Si el jugador gana se suma la apuesta al saldo
					SaldoenBanco += Apuesta;
					cout << "Tu nuevo saldo es: " << SaldoenBanco << endl;
					}
			else{ //Si el jugador pierde se resta la apuesta del saldo
				SaldoenBanco -= Apuesta;
				cout << "Tu nuevo saldo es: " << SaldoenBanco << endl;
				}
		dialogo(); //Se generan frases a lo largo del juego
		
		cout<< "¿deseas seguir jugando? (NO = 1, SI = 2): "; //Si el juego termina se le da la opción de seguir jugando y aplica la condición anterior
		cin >> x;
			}while(SaldoenBanco >= Apuesta ); //Se ejecuta siempre y cuando la apuesta sea menor o igual al saldo en banco
		}
		
	return 0;
	}




