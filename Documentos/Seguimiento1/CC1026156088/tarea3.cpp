#include <iostream>
#include <cstdlib>
#include <ctime>
#include "pruebaentero.h"

using namespace std;

void adivina(int in,int al)  //funcion para adivinar, basicamente es el juego
{
  while (1==1)
    {
      if(Pruebaentero(in)==0)
	{
	  cout<<"el valor ingresado no es entero, se detiene el juego\n";
	  break;
	}
      
      if(in==al)
	{
	  int juego;
	  cout<<"\nadivinaste el numero, felicitaciones!\n\n";
	  break;
	}
      
      if(in<al)
	{
	cout<<"el numero que ingreso es menor, ingrese uno nuevo\n";
	cin>>in;
	}
      
      if(in>al)
	{
	cout<<"el numero que ingreso es mayor,ingrese uno nuevo\n";
	cin>>in;
	}
    }
}




int main()
{
  float in; //numero que ingresa el jugador
  int al; //numero generado aleatoriamente
  
  while(1==1) //nos sirve para jugar infinitamente utilizando la funcion adivinar
    {
      int juego;

      cout<<"\nTienes que adivinar el numero que penso el programa XD\n\n";
      cout<<"ingrese un numero entero para comenzar a jugar\n";
      cin>>in;

      if(Pruebaentero(in)==0)
	{
	  cout<<"el valor ingresado no es entero, se detiene el juego\n";
	  break;
	}
      

      
      srand(time(NULL)); //sirve para hacer los numeros aleatorios con diferentes semillas
      al=1+rand()%(1000+1-1); //genera el numero aleatorio n

      
      
      adivina(in,al); //llama la funcion para adivinar

      
      cout<<"- si desea jugar de nuevo escriba 1\n";
      cout<<"- si desea terminar el juego escriba cualquier numero\n";
      cin>>juego;
      
      if(juego!=1)
	{
	  cout<<"\nGRACIAS POR JUGAR!!\n";
	  break;
	}
    }

    return 0;
}
