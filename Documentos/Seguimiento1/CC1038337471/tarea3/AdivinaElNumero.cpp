// Este codigo genera un numero aleatorio que debera ser adivinado por el usuario dandole pistas respecto al numero que introduzca


#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;


int a,b; 
string seguir;


int main(){
  //condicion para entrar en el primer while
  seguir="s"; // Variable para detener o continuar el juego una vez se termina
  while (seguir=="s"){
    srand(time(NULL));  //Semilla de los numeros random
    a = 1 + rand()%(1001-1); // Creacion de numeros aleatorios entre 1 y 1000
    //cout << "El numero es: " << a<<endl; // linea para mostrar el numero en pantalla
    cout <<"Este sera un gran reto"<<endl;
    cout<<"-----------------------------------"<<endl;
    b=0; // condicion para entrar al bucle

    while (a!=b){
      cout<<"Intenta adivinar el numero: ";
      cin >> b;
      if (a==b){
	cout<<"Felicitaciones has adivinado"<<endl;
	//break;
      }
      else if(a!=b){
	cout<<"Vuelve a intentarlo"<<endl;
	if(a<b){
	  cout<<"Intenta con un numero menor"<<endl;
	}
	else if(a>b){
	  cout<<"Intenta con un numero mayor"<<endl;
	}
      }
    }
    cout<<"Presiona s para jugar otra vez o cualquier otra letra para salir: ";
    cin>>seguir;
    if(seguir=="s"){
      cout<<"Vamos de nuevo"<<endl;
      cout<<"-----------------------------------"<<endl;
    }
    else {
      cout<<"Vuelve pronto"<<endl;
      cout<<"-----------------------------------"<<endl;
      break;
    }
  }
  return 0;
}
