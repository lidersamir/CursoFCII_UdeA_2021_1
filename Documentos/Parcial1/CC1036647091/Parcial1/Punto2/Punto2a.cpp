#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int tirarDados() //tira dados
{
  int dado1, dado2, suma;
  dado1 = 1 + rand()%6;
  dado2 = 1 + rand()%6;

  suma = dado1 + dado2;

  cout << "El jugador tiro " << dado1 << "+" << dado2  << "=" << suma << endl;

  return suma;
}

int main() //funcion principal
{
  enum Estado {CONTINUAR, GANO, PERDIO};
  int miPunto; //punto si no gana o pierde en el primer tiro
  Estado estadoJuego;

  srand(time(0)); //controla tiempo de ejecucion

  int sumaDados = tirarDados(); //llama tira dados y almacena suma

  switch(sumaDados) //bloque de condiciones para el juego
        {
    //gana en el primer tiro
    case 7: 
    case 11:
      estadoJuego = GANO;
      break; //sale del switch
    //perdio en el primer tiro
    case 2:
    case 3:
    case 12:
      estadoJuego = PERDIO;
      break; //sale del switch
   
    //el juego continua
    default:
      estadoJuego = CONTINUAR;
     
      miPunto = sumaDados;
      cout << "Esta en el punto " << miPunto << endl;
      break;
     
	}

  while(estadoJuego == CONTINUAR) //bucle que se repite hastq que cambie la variariable estado del juego
    {
      sumaDados = tirarDados();

      if(sumaDados == miPunto)
	  estadoJuego = GANO;
      else if(sumaDados == 7)
          estadoJuego = PERDIO; 
    }
}

