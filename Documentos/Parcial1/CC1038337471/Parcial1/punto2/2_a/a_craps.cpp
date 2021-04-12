#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class Craps{
 private:
  int a;
  int b;
  int r;
  string seguir;
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

    return r;
    
}
void Craps::Estado(){
  
  cout<< "El primer dado arrojado fue: " <<a<<endl;
  cout<< "El segundo dado arrojado fue: "<<b<<endl;
  cout<< "El resultado obtenido es: "<<r<<endl;

  if(r==7 or r==11){ // El jugador gana en el primer tiro
    cout<<"Jugador gana"<<endl;
    cout<<"El juego ha finalizado"<<endl;
  }

  else if(r==2 or r==3 or r==12){// La casa gana en el primer tiro
    cout<<"La casa gana"<<endl;
    cout<<"El juego ha finalizado"<<endl;
  }
  else{
    cout<<" "<<endl;
    cout<<"Continua Craps..."<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Punto del jugador: "<<r<<endl;// Se selecciona un punto para el jugador
    int f=r; // fijamos el punto y el juego entra en segunda fase

    while(r!=13){  // Condicional que se evalua hasta que uno de los dos gane
      
      cout<<" "<<endl;
      cout<<"¿Deseas seguir jugando? pulsa s para continuar o pulsa otra tecla para salir: ";
      cin >> seguir;
      cout<<" "<<endl;
      if (seguir=="s"){
	ArrojaDados(); // Tira los dados una vez mas
      
	cout<< "El primer dado arrojado fue: " <<a<<endl;
	cout<< "El segundo dado arrojado fue: "<<b<<endl;
	cout<< "El resultado obtenido es: "<<r<<endl;

	if (r==7){
	  cout<<"La casa gana, tu pierdes"<<endl;
	  
	  break;
	  }
	else if(r==f){
	  cout<<"Tu ganas"<<endl;
	  cout<<"El juego ha finalizado"<<endl;
	  break;
	}
      }
      else if(seguir!="s"){
	cout<<" "<<endl;
	cout<<"¡Esperamos vuelvas pronto!"<<endl;
	break;
      }
      }
  }
}

int main(){
  Craps c;
  c.ArrojaDados();
  c.Estado();

  return 0;
}
