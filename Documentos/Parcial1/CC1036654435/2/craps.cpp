#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string>

using namespace std;

int tirarDados(){ // Funcion de tirar dados.
	int dado1,dado2,suma=0;
	
	dado1 = 1 + rand() % 6; 
	dado2 = 1 + rand() % 6;
	suma = dado1 + dado2;
	cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << suma << endl;
	return suma; 
}

int Craps(int saldoEnBanco, int apuesta){ // Funcion de tipo int que permite realizar los calculos del juego Craps.
	int sumaDeDados, puntos;
	enum estado { CONTINUAR, GANO, PERDIO};
	estado estadoJuego;
	
	sumaDeDados = tirarDados();
	switch (sumaDeDados){
		case 7:
		case 11: {
			estadoJuego = GANO;
			break;
		}
		case 2:
		case 3:
		case 12: {
			estadoJuego = PERDIO;
			break;
		}
		default: {
			estadoJuego = CONTINUAR;
			puntos = sumaDeDados;
			cout << "El punto es: " << puntos << endl;
			break;
		}
	}
	
	while (estadoJuego == CONTINUAR){
		sumaDeDados = tirarDados();
		if (sumaDeDados == puntos) estadoJuego = GANO;
		else if (sumaDeDados == 7 ) estadoJuego = PERDIO;
	}

	if (estadoJuego == GANO){
		saldoEnBanco += apuesta;  // Se suma la apuesta al saldo en el banco si es que gano.
		cout << "El jugador gana!" << endl;
		cout << "El nuevo saldo en el banco es: " << saldoEnBanco << endl;
	} 
	else {
		saldoEnBanco -= apuesta; // Se resta la apuesta al saldo en el banco si se perdio.
		cout << "El jugador pierde!" << endl;
		cout << "El nuevo saldo en el banco es: " << saldoEnBanco << endl;
	}
	return saldoEnBanco; // Retorna el saldo en el banco.
}

int main(){
	bool start = true, pause = false; // start indica el bucle de juego completo, el pause se usara para dejar de apostar si asi lo desea el jugador.
	int co, saldoEnBanco = 1000000,apuesta; // Cantidad de dinero inicial en banco.
	string frases[3][5] =  {{"Mas suerte en la proxima!.","Sigue intentando!.","No se preocupe, aun tiene mucho dinero.","Puede arriesgarse! continue!.","La vida es una aventura o nada, atrevete a seguir!"},
							{"Creo que ya deberias dejar de apostar...","Es hora de cambiar las fichas por dinero, no crees?","Ya perdio mucho dinero, puede parar","Esta dificil jugar contra el azar?","No te engañes, no recuperaras lo inicial."},
							{"Tenemos un ganador!","Felicidades!!","Esta victoria puede ser el comienzo de otras","Le has ganado a la computadora!","La sacaste del estadio!"}};
	
	/* String frases es un arreglo 3x5 que indica las posibles frases que pueden aparecer a medida que se juega, estas frases dependeran del estado del juego o de la cantidad de dinero.
	   Si el jugador pierde pero tiene mas de 200 mil entonces puede aparecer una de las 5 frases de la primera columna.
	   Si el jugador pierde pero y tiene menos de 200 mil entonces puede aparecer una de las 5 frases de la segunda columna.
	   Si el jugador gana en cualquier cantidad de dinero puede aparecer una de las 5 frases de la tercera columna.
	   
	   LAS FRASES APARECEN DE FORMA ALEATORIA.
	*/
	srand(time(0)); 
	
	
	while (start == true){
		while (pause != true){
			int f_id = 0+ rand()%4; // Numero aleatorio que indica el indice de la frase que se usara cuando pierda o gane.
			
			cout << "Su saldo en banco es de: " << saldoEnBanco << endl;
			cout << "Ingrese una apuesta: "; cin >> apuesta;
			while (apuesta > saldoEnBanco || apuesta < 0){  // Bucle que impide apostar un valor invalido.
				if (apuesta > saldoEnBanco){
					cout << "No tiene suficiente dinero para apostar esa cantidad" << endl;  // Condicional si el dinero excede el monto en el banco.
					cout << "Ingrese una apuesta valida: "; cin >> apuesta;
				}
				if (apuesta < 0){
					cout << "No se permite apuestas negativas!" << endl;  // Condicional que impide ganar dinero usando numeros negativos.
					cout << "Ingrese una apueta valida: "; cin >> apuesta;
				}	
			}
			cout << "Comienza el juego de Craps" << endl;
			
			int viejoSaldo = saldoEnBanco; // Guarda el saldo viejo antes de comenzar el juego, esto para comparar luego.
			saldoEnBanco = Craps(saldoEnBanco, apuesta); // Comienza el juego de craps y obtiene el saldo nuevo en banco dependiendo de la apuesta.
			
			
			if (saldoEnBanco < 200000 && saldoEnBanco > 0){ // Si el jugador pierde pero y tiene menos de 200 mil entonces puede aparecer una de las 5 frases de la segunda columna.
				cout << "------------------------------------\n" << endl;
				cout << frases[1][f_id] << endl;
				cout << "\n------------------------------------" << endl;
			}
			if (saldoEnBanco < viejoSaldo && saldoEnBanco > 200000 && saldoEnBanco > 0){ // Si el jugador pierde pero tiene mas de 200 mil entonces puede aparecer una de las 5 frases de la primera columna.
				cout << "------------------------------------\n" << endl;
				cout << frases[0][f_id] << endl;
				cout << "\n------------------------------------" << endl;
			}
			if (saldoEnBanco > viejoSaldo){
				cout << "------------------------------------\n" << endl; //  Si el jugador gana en cualquier cantidad de dinero puede aparecer una de las 5 frases de la tercera columna.
				cout << frases[2][f_id] << endl;
				cout << "\n------------------------------------" << endl;
			}
			if (saldoEnBanco == 0){
				cout << "------------------------------------\n" << endl; // Si el jugador pierde todo su dinero.
				cout << "Lo siento, se quedo sin fondos" << endl;
				cout << "\n------------------------------------" << endl;
				break; // Sale del bucle ya que no tiene dinero para apostar.
			}
			
			cout << "Desea volver a Jugar? " << endl;  // Cada que se termina una jugada de Craps, se pregunta si desea seguir jugando.
			cout << "1. Si,  2. No" << endl;
			cout << "ELECCION: "; cin >> co;
			while (co !=1 && co !=2){  // Bucle que no permite una eleccion invalida.
				cout << "Ingrese una eleccion valida" << endl;
				cout << "ELECCION: "; cin >> co;
			}
			if (co == 2) pause = true; // Si desea dejar de jugar (retirarse y cambiar fichas por dinero) cambia el estado de pause a verdadero (se sale del bucle)
			else if (co == 1) continue; // Si desea volver a jugar se repite el bucle con el nuevo saldo en el banco.
		}
		cout << "-------------------------------------------\n" << endl;  // Termina el juego cuando el usuario pierda todo el dinero o decida retirarse. Se imprime el saldo final.
		cout << "El juego ha terminado" << endl;
		cout << "Su saldo final es: " << saldoEnBanco << endl;
		cout << "\n-------------------------------------------" << endl;
		start = false; // Cierra el bucle del juego.
	}
	
	system("pause");
	return 0;
}
