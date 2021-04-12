#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>


using namespace std;


int Lanzamiento(); //Genera números aleatorios para cada dado, guarda y retorna la suma de estos.
int Craps(int, int); //Se empaqueta la parte del programa que ejectura el juego de craps.

int main(){
	
	srand(time(NULL));//Establece la semilla para que los números aleatorios sean diferentes cada vez que el cliente desea jugar
	int SaldoenBanco=1000000;
	int apuesta=0;
	int n;
	
	cout<<"Bienvenido a Craps, el juego donde las personas se hacen más ricas."<<endl;
	cout<<"Su saldo en la cuenta es "<<SaldoenBanco<<" pesos. Introduzca una apuesta: "<<endl;
	cin>>apuesta; //Se guarda la apuesta del cliente
	
	
	while(SaldoenBanco!=0){ //el cliente puede jugar mientras no se haya quedado sin fondos
		while(apuesta>SaldoenBanco){ //Se verifica que la apuesta ingresada por el cliente sea menor que el saldo del que dispone
		cout<<"Recuerde que no puede apostar una cantidad mayor al saldo en su cuenta. Su saldo es: "<<SaldoenBanco<<" pesos."<<endl;
		cout<<"Introduzca una nueva apuesta válida."<<endl;
		cin>>apuesta;
		}
		SaldoenBanco=Craps(SaldoenBanco, apuesta); //Se modifica el saldo del cliente en cada juego. Se invoca el empaquetamiento Craps
		cout<<"Su saldo en banco es "<<SaldoenBanco<<"."<<endl; //Imprimimos el saldo en banco después de la primera apuesta del cliente
		if(SaldoenBanco<=50000 and SaldoenBanco>=1){ //Cuando el saldo en banco del cliente es bajo, el programa le advierte que no ha sido una buena niche para él.
			cout<<"---------------------------------------------------------------------------------------"<<endl;
			cout<<"---------------------------------------------------------------------------------------"<<endl;
			cout<<"¡Cuidado! Su saldo en banco es demasiado bajo. Tal vez sea mejor que se de un descanso."<<endl;
			cout<<"---------------------------------------------------------------------------------------"<<endl;
			cout<<"---------------------------------------------------------------------------------------"<<endl;
		}
		else if(SaldoenBanco<=0){ //Termina el juego si el jugador pierde todos sus fondos
			cout<<"Lo sentimos, se ha quedado sin dinero. Vuelva más tarde para intentar recuperarlo."<<endl;
			break;}
		cout<<"Si desea seguir jugando presione el número 1, de lo contrario presione el número 2."<<endl;
		cin>>n; //el usuario decide si continua seguir jugando
		
		if(n==2){break;}//Termina el juego si el cliente desea dejar de jugar 
		else if(n==1){
			cout<<"¡Un placer que decida seguir ganando dinero con nosotros! ¿Cuánto desea ganar esta vez?"<<endl;
			cout<<"Introduzca una apuesta: "<<endl;
			cin>>apuesta;//El cliente vuelve a apostar dado que decidió continuar jugando
			while(apuesta>SaldoenBanco){//Verifica nuevamente que esta nueva apuesta sea inferior al nuevo saldo en banco del usuario
		cout<<"Recuerde que no puede apostar una cantidad mayor al saldo en su cuenta. Su saldo es: "<<SaldoenBanco<<" pesos."<<endl;
		cout<<"Introduzca una nueva apuesta válida."<<endl;
		cin>>apuesta;
			}	
		}
		
		
	}

	return 0;
}





int Craps(int saldo, int bet){//La funcion devuleve el nuevo saldo en banco y recibe tanto el saldo anterior, como la apuesta que realiza el cliente

	for(int i=0; i<=1000;i++){
		
		int punto; //Se define la variable que guarda el punto del cliente
		int lanzamiento= Lanzamiento(); //Se guarda el lanzamiento hecho por el cliente
		
		if(i==0){//Analiza el primer lanzamiento del cliente
			
			switch(lanzamiento){
			
				case 7:
				case 11: //Si el primer lanzamiento es 7 u 11, ,e hace saber al cliente que ha ganado
					cout<<"¡Felicitaciones! Ha ganado, se añadirán "<<bet<<" pesos a su cuenta."<<endl;
					i=1001;
					break;
				case 2:
				case 3:
				case 12://Si el usuario lanza 2,3 o 12 el sistema le hace saber que ha perdido
					cout<<"Ha perdido. No se rinda, siga intentándolo. Se han retirado "<<bet<<" pesos de su cuenta."<<endl;
					i=1001;
					bet=-bet;//Si el usuario pierde, su apuesta se hace un numero negativo
					break;
				default: //Para cualquier otro lanzamiento se guarda este como el punto
					punto=lanzamiento;
					cout<<"Continúe jugando, su punto es: "<<punto<<endl;
					i=1;
					break;
			}
		}
		else{
			
			cout<<"Ha lanzado "<<lanzamiento<<endl; //Muestra el lanzamiento que ha hecho el cliente
			if(lanzamiento==7){ //Si el cliente saca 7 en esta instancia pierde
				cout<<"Ha perdido, ha sacado 7 antes que "<<punto<<". Se han retirado "<<bet<<" pesos de su cuenta."<<endl;
				i=1001;
				bet=-bet;//Se hace negativa la apuesta del cliente, para que represente una perdida en el saldo del banco
			}
			else if(lanzamiento==punto){ //Si el cliente lanza su punto antes que 7 gana
				cout<<"¡Felicitaciones! Ha ganado, se añadirán "<<bet<<" pesos a su cuenta."<<endl;
				i=1001;
			}
		}
	}
	saldo=saldo+bet; //Modifica el saldo y lo hace igual al saldo anterior más la apuesta (que es negativa en caso deq ue el jugador haya perdido)
	return saldo; //La función retorna el saldo
}

int Lanzamiento(){
	
	int dice1, dice2; //Se definen las variables que guardan el número en el que cae cada dado.
	int suma=0;
	
	dice1=1+rand()%(6+1-1);  //Se genera para cada dado un número aleatorio entre 1 y 6.
	dice2=1+rand()%(6+1-1);
	suma=dice1+dice2;
	
	return suma;
}
