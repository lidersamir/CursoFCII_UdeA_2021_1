#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class Craps{
 private:
  int a;
  int b;
  int r;
  int S;
  int apuesta;
  string seguir;
  int valido;
 public:
  Craps();
  int ArrojaDados(); // Funcion que arroja los dados
  void Estado(); // Funcion que muestra el estado del juego 
};

// Implementacion de la clase

Craps::Craps(){
  cout<<"Bienvenido a Craps..."<<endl;
  cout<<"-------------------------------------------------"<<endl;
  
  cout<<"Si en el primer tiro sacas 7 o 11 el jugador gana, en caso de salir 2,3,12 en el primer tiro entonces la casa gana. si sale 4,5,6,8,9,10 este sera el punto asignado al jugador, entonces se continua jugando hasta que el jugador vuelva a sacar su punto o en caso de salir 7 antes la casa ganara."<<endl;
  cout<<"-------------------------------------------------"<<endl;
  cout<<"pulsa s para jugar: ";
  cin>>seguir;

  srand(time(NULL));  //Semilla de los numeros random
    }

int Craps::ArrojaDados(){
    
    a = 1 + rand()%(7-1); // Lanza el primer dado
    b = 1 + rand()%(7-1); // Lanza el segundo dado
    r = a + b;

    return r; // Retornar la suma de los puntos en los dados
    
}
void Craps::Estado(){
  S=1000000; // Saldo inical en banco

  while(S>-1){ // Condición para que el jugador apueste todo lo que quiera o hasta agotar su dinero
    ArrojaDados();
    cout<<"su saldo en banco es: "<< S <<endl;
    cout<<" "<<endl;
    if(S==0){
      cout<<"¡Lo siento! no tiene fondos suficientes..."<<endl;
      break; // El juego acaba, el cliente se gasto el dinero
    }
    cout<<"pulsa s para continuar o una tecla distinta para retirarte con tu dinero: "; // Si el apostador esta seguro inicia el juego craps
    cin>>seguir;
    if(seguir!="s"){
      cout<<"¡Esperamos vuelvas pronto!"<<endl;
      break;
    }
    valido=0; // Condicion para entrar al bucle e ingresar apuesta
    while (valido!=1){
      cout<<"ingresa un valor a apostar menor a tu saldo: ";
      cin>>apuesta;
      if (apuesta>0 and apuesta<=S){ // La apuesta debe ser positiva y menor al saldo
	valido=1;
      }
    }
    
    cout<<endl;
    cout<< "El primer dado arrojado fue: " <<a<<endl; // Resultados de los dados
    cout<< "El segundo dado arrojado fue: "<<b<<endl;
    cout<< "El resultado obtenido es: "<<r<<endl;
    cout<<endl;

    if(r==7 or r==11){ // Primer tiro, opciones donde gana el jugador
      cout<<"Jugador gana"<<endl;
      S+=apuesta;
      cout<<"su nuevo saldo en banco es: "<<S<<endl;
      cout<<"Parece que es tu dia de suerte"<<endl;
      cout<<endl;
    }

    else if(r==2 or r==3 or r==12){ // primer tiro, opciones donde gana la casa
      cout<<"La casa gana, tu pierdes"<<endl;
      S-=apuesta;
      cout<<"su nuevo saldo en banco es: "<<S<<endl;
      cout<<"No pasa nada... esto apenas empieza"<<endl;
      cout<<endl;
    }
    else{ // Si no gana ninguno en el primer tiro entra craps en segunda fase
      cout<<endl;
      cout<<"Parece que esta muy reñido"<<endl;
      cout<<" "<<endl;
      cout<<"Continua Craps..."<<endl;
      cout<<"-------------------------------------------------"<<endl;
      cout<<"Punto del jugador: "<<r<<endl;
      int f=r;

      while(r!=13){  // Condicional que se evalua hasta que uno de los dos gane en la segunda fase
	
	cout<<" "<<endl;
	cout<<"¿Deseas seguir jugando o quieres retirarte con el dinero actual?"<<endl;
	cout<<"pulsa s para continuar o pulsa otra tecla para terminar esta partida e iniciar una nueva: ";
	cin >> seguir;
	cout<<" "<<endl;
	if (seguir=="s"){
	  ArrojaDados(); // Tira los dados una vez mas
      
	  cout<< "El primer dado arrojado fue: " <<a<<endl;
	  cout<< "El segundo dado arrojado fue: "<<b<<endl;
	  cout<< "El resultado obtenido es: "<<r<<endl;
	  cout<<endl;

	  if (r==7){
	    cout<<"La casa gana, tu pierdes"<<endl;
	    S-=apuesta;
	    cout<<"su nuevo saldo en banco es: "<<S<<endl;
	    cout<<"calma, esto puede mejorar"<<endl;
	    cout<<endl;
	    break;
	  }
	  else if(r==f){ // Si cae el punto del jugador entonces gana
	    cout<<"Tu ganas"<<endl;
	    S+=apuesta;
	    cout<<"su nuevo saldo en banco es: "<<S<<endl;
	    cout<<"Estupendo, vas por buen camino..."<<endl;
	    cout<<endl;
	    break;
	  }
	  else{
	    cout<<"Vamos, continua con optimismo";
	  }
	}
	else if(seguir!="s"){
	  cout<<" "<<endl;
	  cout<<"¡Esta bien, finalicemos esta partida!"<<endl;// El jugador se asusto en la partida y prefiere iniciar una nueva
	  break;
	}
      }
    }
    valido=0; //Vuelve a cambiar la condicion para asegurar que la apuesta ingresada sea valida
  }
}

int main(){
  Craps c;
  c.ArrojaDados();
  c.Estado();

  return 0;
}
