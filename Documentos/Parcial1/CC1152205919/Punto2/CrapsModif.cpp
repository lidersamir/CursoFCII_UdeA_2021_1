/*
Un jugador tira dos dados. Cada dado tiene seis caras, las cuales contienen 1, 2, 3, 4, 5 y 6 puntos negros. Una
vez que los dados dejan de moverse, se calcula la suma de los puntos negros en las dos caras superiores. Si la
suma es 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12 en el primer tiro (llamado “craps”),
el jugador pierde (es decir, la “casa” gana). Si la suma es 4, 5, 6, 8, 9 o 10 en el primer tiro, esta suma se
convierte en el “punto” del jugador. Para ganar, el jugador debe seguir tirando los dados hasta que salga otra
vez “su punto”. El jugador pierde si tira un 7 antes de llegar a su punto.
*/

#include <iostream>
#include <cstdlib> // contiene los prototipos para las funciones srand y rand
#include <ctime> // contiene el prototipo para la función time

using namespace std;

int tirarDados(); // tira los dados, calcula y muestra la suma
int Craps();  // juega Craps y devuelve una bandera que indica si ganó o perdió

int main(){
    int SaldoenBanco = 1000000;
    int Apuesta;
    int Bandera;
    cout << "VAMOS A JUGAR CRAPS!!.\n" << endl;
    cout << "Escriba el caracter 0 para terminar el juego\n" << endl;
    cout << "Su saldo en el banco es: " << SaldoenBanco << endl;
    cout << "Por favor intruduzca su apuesta" << endl;
    cin >> Apuesta;
    while ( Apuesta != 0 ){   // itera hasta que el usuario escriba 0 en la apuesta.
          while(Apuesta <= SaldoenBanco && SaldoenBanco != 0){
               Bandera = Craps(); // estado final del juego
               if(Bandera == 1){  // si el jugador gana le paga la apuesta y le pide que apueste de nuevo
                 SaldoenBanco = SaldoenBanco + Apuesta;
                 cout << "Su nuevo saldo en banco es: " << SaldoenBanco << endl;
                 cout << "Aproveche su suerte y haga una nueva apuesta" << endl;
                 cout << "Ingrese su nueva apuesta" << endl;
                 cin >> Apuesta;
                 if(Apuesta == 0){ // si la apuesta es cero el jugador sale del juego
                   cout << "Miedoso!";
                    break;
                 }
               }
               if(Bandera == 0){ // si el jugador pierde, cobra la cantidad apostada
                 SaldoenBanco = SaldoenBanco - Apuesta;
                 cout << "Su nuevo saldo en banco es: " << SaldoenBanco << endl;
                 if(SaldoenBanco != 0){ //si el saldo es diferente de cero, el jugador puede continuar jugando
                    cout << "Mala suerte. Pero todo puede cambiar!!. Haga una nueva apuesta" << endl;
                    cout << "Ingrese su nueva apuesta" << endl;
                    cin >> Apuesta;
                    if(Apuesta == 0){ //si la apuesta es cero el jugador sale del juego 
                      cout << "Miedoso!";
                      break;
                     }
                   }
                 
                 if(SaldoenBanco == 0){ //si el jugador pierde todo el dinero lo saca del juego
                    cout << "Mala suerte. Perdió todo su dinero, ya no puede apostar más." << endl;
                    Apuesta = 0;
                 }

               }
           }
          while(Apuesta > SaldoenBanco && SaldoenBanco != 0){ // si el jugador introduce un valor mayor al saldo que tiene le pide que corrija su apuesta
               cout << "Usted no cuenta con tanto dinero, pobretón!!" << endl;
               cout << "Ingrese una apuesta que pueda pagar" << endl;
               cin >> Apuesta;
               if(Apuesta <= SaldoenBanco){ // si el jugador corrije la apuesta sigue jugando
                  break;
               }
               if(Apuesta == 0){ // si el jugador apuesta cero sale del juego
                 cout << "Miedoso!";
                  break;
               }
           }
    }
}

/**********************************************************************Funciones********************************************************************/

int Craps(){
  int bandera; //bandera para saber el resultado del juego
  // enumeración con constantes que representa el estado del juego
  enum Estado { CONTINUAR, GANO, PERDIO }; // todas las constantes en mayúsculas
  
  int miPunto; // punto si no se gana o pierde en el primer tiro
  Estado estadoJuego; // puede contener CONTINUAR, GANO o PERDIO
  
  // randomiza el generador de números aleatorios, usando la hora actual
  srand( time( 0 ) );

  int sumaDeDados = tirarDados(); // primer tiro del dado
  // determina el estado del juego y el punto (si es necesario), con base en el primer tiro
  switch ( sumaDeDados )
    {
    case 7: // gana con 7 en el primer tiro
    case 11: // gana con 11 en el primer tiro
      estadoJuego = GANO;
      break;
    case 2: // pierde con 2 en el primer tiro
    case 3: // pierde con 3 en el primer tiro
    case 12: // pierde con 12 en el primer tiro
      estadoJuego = PERDIO;
      break;
    default: // no ganó ni perdió, por lo que recuerda el punto
      estadoJuego = CONTINUAR; // el juego no ha terminado
      miPunto = sumaDeDados; // recuerda el punto
      cout << "El punto es " << miPunto << endl;
      break; // opcional al final del switch
    } // fin de switch

  // mientras el juego no esté completo
  while ( estadoJuego == CONTINUAR ) // no ganó ni perdió
    {
      sumaDeDados = tirarDados(); // tira los dados de nuevo
      
      // determina el estado del juego
      if ( sumaDeDados == miPunto ) // gana al hacer un punto
	estadoJuego = GANO;
      else if ( sumaDeDados == 7 ) // pierde al tirar 7 antes del punto
	  estadoJuego = PERDIO;
    } // fin de while
  
  // muestra mensaje de que ganó o perdió
  if ( estadoJuego == GANO ){
    cout << "El jugador gana" << endl;
    bandera = 1;
  }
  else{
    cout << "El jugador pierde" << endl;
    bandera = 0;
  }
  return bandera; // indica que terminó correctamente
} // fin de main



// tira los dados, calcula la suma y muestra los resultados
int tirarDados()
{
  // elige valores aleatorios para el dado
  int dado1 = 1 + rand() % 6; // tiro del primer dado
  int dado2 = 1 + rand() % 6; // tiro del segundo dado
  
  int suma = dado1 + dado2; // calcula la suma de valores de los dados
  
  // muestra los resultados de este tiro
  cout << "El jugador tiro " << dado1 << " + " << dado2
       << " = " << suma << endl;
  return suma; // devuelve la suma de los dados
} // fin de la función tirarDados
