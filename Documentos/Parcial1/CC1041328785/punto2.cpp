//DESARROLLO PUNTO # 2

#include<iomanip>
#include <iostream>
#include <cstdlib> // contiene los prototipos para las funciones srand y rand
#include <ctime> // contiene el prototipo para la función time

using namespace std;

// inicializacion de la funciones craps y lanzar dados 

int tirarDados();
int craps();

void presentador(float, float, int);

//Entorno de usuario
int main()
{
	//Se inicializan las variables
	float SaldoenBanco = 1000000; //saldo de banco
	float Best = 0; //Valor de la apuesta
	int TryAgain = 1; // Interaccion con el jugador continuar o salir
	int racha = 0;
	
	cout << "========================================" <<endl;
	cout << "====BIENVENIDO A LA MESA DE CRAPS=======" <<endl; 
	cout << "========================================\n" <<endl;
	
	cout << "al inicio del juego usted \ncuenta con un saldo de 1000000" << endl;
	cout << "por favor ingrese un valor de apuesta \nentre 1 y 1000000 para iniciar el juego" << endl;
	cout << "========================================\n" <<endl;
	
	

	
	while(TryAgain == 1 and SaldoenBanco >= 1) //El bucle permite que el juego siga hasta que el saldo sea 0 o el jugador quiera salir
	{
		cout <<"\n\n      INICIO DE RONDA    \n\n" << endl;
		
			while(Best < 1 or Best > SaldoenBanco) //Verificamos que la puesta tenga un valor valido
		{
			cout << "\nPor favor ingrese un valor de apuesta \nvalido para iniciar" << endl;
			cin >> Best;
			cout << "----------------------------------------" << endl;
			cout << "----------------------------------------" << endl;
		}
		
		presentador(Best, SaldoenBanco, racha); //inverviene el presentador
		
		if(craps() == 1) //Efectuamos la resta o la suma de saldo segun los resultados
		{
			cout << SaldoenBanco << " + " << Best <<endl;
			SaldoenBanco = SaldoenBanco + Best; //accion al ganar
			cout << "----------------------------------------" << endl;
			racha = racha +1;
		}	
	
		else
		{
			cout << SaldoenBanco << " - " << Best <<endl;
			SaldoenBanco = SaldoenBanco - Best; //accion al perder
			cout << "----------------------------------------" << endl;
			racha = 0;
		}
		
		cout << "========================================" <<endl; // se imprime el saldo actual y la apuesta anterior
		cout << "==========ESTADO DEL SALDO==============" <<endl; 
		cout << "========================================" <<endl;
		cout << setw(3) <<"Saldo"
			<< setw(25)<<"Ultima apuesta" <<endl;
		
		cout << setw(3) << SaldoenBanco 
			<< setw(15) << Best <<endl;
		
		cout << "========================================" <<endl;
		
		if (SaldoenBanco == 0) //accion para cuando se acaba el saldo
		{	
			cout << "Lo sentimos te quedaste sin fondos" << endl;
			presentador(Best, SaldoenBanco, racha); // interviene el presentador
			TryAgain = 0;
		}
		
		else
		{
			Best = 0; //Resetea el valor de la apuesta
		}
		
	cout <<"\n\n      FIN DE RONDA    \n\n"	 << endl;
	cout << "========================================" <<endl;
	}
	
	return 0;
}

//=========================================================//
//=============IMPLEMENTACION  DE LAS FUNCIONES============//
//=========================================================//

//funcion de lanzamiento de dados
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
} // fin de la funci� �n tirarDados


//funcion que ejectua el juego de craps
int craps() 
{
	// enumeración con constantes que representa el estado del juego
  enum Estado { CONTINUAR, GANO, PERDIO }; // todas las constantes en mayúsculas
  int out; //seguimiento de estado
  
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
      out = 1;
      break;
    case 2: // pierde con 2 en el primer tiro
    case 3: // pierde con 3 en el primer tiro
    case 12: // pierde con 12 en el primer tiro
      estadoJuego = PERDIO;
      out = 0;
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
      if ( sumaDeDados == miPunto )// gana al hacer un punto
	  {
	  	estadoJuego = GANO;
	  	out = 1;
	  }
	
      else if ( sumaDeDados == 7 ) // pierde al tirar 7 antes del punto
	  {
	  	estadoJuego = PERDIO;
	  	out = 0;
	  }
    } // fin de while
  
  // muestra mensaje de que ganó o perdió
  if ( estadoJuego == GANO )
    cout << "El jugador gana" << endl;
  else
    cout << "El jugador pierde" << endl;
  
  return out;    

}//fin de la funcion craps

//esta funcion imprime comentarios de acuerdo a la situacion del jugador 
void presentador(float best, float saldo, int score)
{
	if(best <= 0.3*saldo and saldo != 0)
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: En serio??.....Vaya taca�o*" << endl;
		cout << "*****************************************\n" << endl;
	}
	
	else if(best > 0.3*saldo and best <= 0.7*saldo and saldo != 0)
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: Arriesgate mas muchachote *\n*se ve que tienes suerte................*" << endl;
		cout << "*****************************************\n" << endl;
	}
	
	else if(best >= 0.8*saldo and saldo != 0)
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: EL TODO POR EL TODO!!!    *\n*asi  me gusta....                      *" << endl;
		cout << "*****************************************\n" << endl;
	}
	
	else if(saldo == 0 )
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: Vaya Vaya en ceros........*\n*Quieres que llame a tu mama para que   *\n*venga por ti??                         *"<< endl;
		cout << "*****************************************\n" << endl;	
	}
	
	if(saldo < 500000 and saldo !=0)
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: Hum.........              *\n*Te veo algo nervioso. Necesitas un     *\ndescanso?                               *" <<endl;
		cout << "*****************************************\n" << endl;
	}

	if(saldo >= 2000000 and saldo <=4000000)
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: Al parecer estas de suerte*\n*Disfrutala no durara mucho............ *" <<endl;
		cout << "*****************************************\n" << endl;
	}
	
	else if(saldo >= 4000000 and saldo <=5000000)
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: A eso le llamo suerte...  *\n*Tambien hay un toreno de poker esta    *\n*semana si te interesa                  *" <<endl;
		cout << "*****************************************\n" << endl;
	}
	
	
	
	if(score >1 and score<= 3 )
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: Jummmmmmm.....racha??     *\n*Debe haber algo mal con estos dados... *" << endl;
		cout << "*****************************************\n" << endl;
	}
	
	else if(score >3 )
	{
		cout << "\n*****************************************" << endl;
		cout << "*Presentador: WOW!!!!                   *\n*Yo en tu lugar lo apostaria todo,      *\n*la tienes ganada                       *" << endl;
		cout << "*****************************************\n" << endl;
	}
}//fin de la funcion presentador
