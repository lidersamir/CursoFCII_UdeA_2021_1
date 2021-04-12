#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include "Craps.h"

using namespace std;

void craps::main_game()
{
    // enumeración con constantes que representa el estado del juego
  enum Estado { CONTINUAR, GANO, PERDIO }; // todas las constantes en mayúsculas
  int miPunto; // punto si no se gana o pierde en el primer tiro
  Estado estadoJuego; // puede contener CONTINUAR, GANO o PERDIO
  // randomiza el generador de números aleatorios, usando la hora actual
  srand( time( 0 ) );
  cout<< "Introduzca una apuesta a continuacion, el juego empezara automaticamente." << endl;
  cout<< "Apuesta: ";
  get_bet();

  suma_dados = tirar_dados(); // primer tiro del dado
  // determina el estado del juego y el punto (si es necesario), con base en el primer tiro
  switch ( suma_dados )
    {
    case 7: // gana con 7 en el primer tiro
    case 11: // gana con 11 en el primer tiro
      estadoJuego = GANO;
      saldo += apuesta;
      ganadas += 1;
      perdidas = 0;
      break;
    case 2: // pierde con 2 en el primer tiro
    case 3: // pierde con 3 en el primer tiro
    case 12: // pierde con 12 en el primer tiro
      estadoJuego = PERDIO;
      saldo -= apuesta;
      perdidas += 1;
      ganadas = 0;
      break;
    default: // no ganó ni perdió, por lo que recuerda el punto
      estadoJuego = CONTINUAR; // el juego no ha terminado
      miPunto = suma_dados; // recuerda el punto
      cout << "El punto es " << suma_dados << endl;
      break; // opcional al final del switch
    } // fin de switch

  // mientras el juego no esté completo
  while ( estadoJuego == CONTINUAR ) // no ganó ni perdió
    {
      suma_dados = tirar_dados(); // tira los dados de nuevo
      
      // determina el estado del juego
      if ( suma_dados == miPunto ){ // gana al hacer un punto
	  estadoJuego = GANO;
      saldo += apuesta;
      ganadas += 1;
      perdidas = 0;}
      else if ( suma_dados == 7 ){ // pierde al tirar 7 antes del punto
	  estadoJuego = PERDIO;
      saldo -= apuesta;
      perdidas += 1;
      ganadas = 0;}
    } // fin de while
  
  // muestra mensaje de que ganó o perdió
  if ( estadoJuego == GANO ){
    cout << "El jugador gana" << endl;
    cout << "El saldo restante es: " << saldo << endl;}
  else{
    cout << "El jugador pierde" << endl;
    cout << "El saldo restante es: " << saldo << endl;}
}

int craps::tirar_dados()
{
// elige valores aleatorios para el dado
  int dado1 = 1 + rand() % 6; // tiro del primer dado
  int dado2 = 1 + rand() % 6; // tiro del segundo dado
  
  int suma = dado1 + dado2; // calcula la suma de valores de los dados
  
  // muestra los resultados de este tiro
  cout << "El jugador tiro " << dado1 << " + " << dado2
       << " = " << suma << endl;
  return suma;
}

void craps::get_bet()
{
    cin >> apuesta;
    while (cin.fail() or apuesta > saldo)
    {
        cout<<"Por favor ingrese un valor valido:"<< endl;
        cin.clear();
        cin.ignore();
        cin >> apuesta;
    }
}