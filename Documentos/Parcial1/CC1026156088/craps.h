#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

//srand(time(NULL));

int sumadados()
{
   
  int dado1=1+rand()%6; // tira el dado 1
  int dado2=1+rand()%6;  // tira el dado 2

  int suma=dado1+dado2; // suma el valor de los dos dados

  cout<<"el jugador saco en los dados "<<dado1<<" y "<<dado2<<"  la suma es: "<<suma<<endl;

  return suma;
}

int craps()
{
  srand(time(0));
  enum estado{ continua, gana, pierde}; // posibles resultados del juego

  int retorno; //valor que retorna la funcion, 1 si gana, 0 si pierde
  int punto; // puntos del jugador
  estado resultado; //dice como va el jugador, gano, perodio o continua

  int dados=sumadados(); //resultado de la suma de los dados

  switch(dados)
    {
    case 7:
    case 11:
       resultado=gana;
       retorno=1;
       break;
    case 2:
    case 3:
    case 12:
       resultado=pierde;
       retorno=0;
       break;
    default: // cuando no gana ni pierde
       resultado=continua;
       punto=dados; //dice cual es puntaje que tiene
       //cout<<"por el momento su puntaje es:"<<punto<<endl;
       break;
    }

  while(resultado == continua)
    {
     dados=sumadados();

     if(dados==punto)
       {
	 resultado=gana;
	 retorno=1;
       }
     if(dados==7)
       {
         resultado=pierde;
	 retorno=0;
       }

    } // final de while
  
  return retorno; // devuelve 1 si gano, 0 si perdio
}
