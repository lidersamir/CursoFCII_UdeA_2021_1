#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;


class Craps
{

 public:
  Craps(); //constructor de la clase 
  void Apuesta(); //avisa el saldo que se apuesta
  int TirarDados(); //tira dados, retorna suma de dados
  void Resultado( bool ); //suma o resta (depende el caso) a la variable SaldoenBanco
  void Juego(); //es donde juega y envia booleano a Resultado
  void Menu(); //da las opciones al usuario

 private:
  int SaldoenBanco = 1000000; //saldo inicial
  int ValorApuesta = 0; 
};
Craps::Craps() //inicializa el constructor
{
  srand(time(0)); //controla el flujo
}
void Craps::Apuesta()
{
  bool condicion = false; //mientras condicion sea falsa se repite el ciclo para controlar los valores a apostar

  while (condicion == false){

    cout << "El saldo que tiene es: " << SaldoenBanco << endl; //avisa saldo
    cout << " " << endl;
    
    cout << "Por favor ingrese cuanta plata quiere apostar: " << endl;
    cin >> ValorApuesta; //guarda valor a apostar en variable ValorApuesta
    cin.clear(); //borra indicador para nuevas operaciones

    if (ValorApuesta > SaldoenBanco) //como apuesta mas de lo que tiene sigue en el ciclo
      {
      cout << "Usted no tiene esa plata, apueste menos." << endl;
    }
    
    else if (ValorApuesta < 0) //mensaje para que no apueste lo que no tiene
      cout << "No existe la plata negativa." << endl;

    else if (ValorApuesta == SaldoenBanco) //avisa que se queda sin plata, cambia condicion para salir del ciclo
      {
      cout << "¿Seguro que quiere apostar todo?, si pierde, se queda sin plata" << endl;
      condicion = true;
    }
    else if (ValorApuesta > 0.5*SaldoenBanco) //avisa que apuesta mas de la mitad, cambia condicion para salir del ciclo
      { 
      cout << "Va a apostar mas de la mitad de su plata, que vacaneria personas como vos" << endl;
      condicion = true;
    }    
    else if (ValorApuesta < 0.5*SaldoenBanco) //avisa que apuesta menos de la mitad, cambia condicion para salir del ciclo
      {
      cout << "Va a apostar menos de la mitad de su plata, hay que arriesgar, porque si no cuando va a ganar buena platica!" << endl;
      condicion = true;
    }
     else if (ValorApuesta == 0.5*SaldoenBanco) //avisa que apuesta la mitad, cambia condicion para salir del ciclo
       {
       cout << "Va a apostar el 50% de su plata" << endl;
       condicion = true;
     }
  }
  cin.clear(); //borra indicador para nuevas operaciones
}
int Craps::TirarDados()
{                                                               
                                                                                
  int dado1 = 0; //dado 1                                                               
  int dado2 = 0; //dado 1                                                           
  int tiro = 0; //guarda suma
  char ingreso; //guarda letra ingresada por el usuario para poder tirar dados
  
  cout << " " <<endl;
  cout<<"Por favor, para jugar, ingrese cualquier letra + enter."<<endl;
  cin>>ingreso; //recibe ingreso
  cin.ignore(); //limppia el bufer de entrada

  dado1 = 1 + rand()%6; //generar aleatorio (dado)                                 
  dado2 = 1 + rand()%6; //generar aleatorio (dado)
                                                                                
  tiro = dado1 + dado2; //suma dados 
  
  cout<<"El tiro fue " << dado1 << " + " << dado2 << " = " << tiro << endl;
                                                                                
  return tiro;                                                         
}
void Craps::Resultado(bool apuesta) //recibe booleano desde Jugar() 
{

  if (apuesta==true) 
    {
      SaldoenBanco = SaldoenBanco + ValorApuesta; //aumenta SaldoenBanco
  }
  else{
    SaldoenBanco = SaldoenBanco - ValorApuesta; //disminuye SaldoenBanco
  }

}
void Craps::Juego() //donde juega
{

  Apuesta(); //llama la funcion Apuesta()

  bool con = true; //condicon
  int p = 0; //punto para el jugador
  
while(con==true)
  {   
      int tirada = 0; //inicializa variable tirada
      tirada = TirarDados(); //llama a la funcion tirar los dados, aqui empieza el juego en la primera tirada
      
      cout << "Obtuviste: " << tirada  << endl;

      
      if (p == 0)
	{

	  if (tirada == 7 or tirada == 11) //condicion para ganar 
	  {
	  cout<<"Gano en la primera, excelente!"<<endl;
	  Resultado(true); //envia booleano a Resultado
	  con = false; 
	}
	
	  else if (tirada == 2 or tirada == 3 or tirada == 12) //condicion de perder 
	  {
	  cout<<"Perdio, perder es ganar un poco decia Maturana. :("<<endl;
	  Resultado(false);
	  con = false;
	}
	  else //si no gana ni pierde en la primera, entra aqui en esta ruta
	  {
	  p = tirada; //se pone el punto que si se repite gana
	  cout << "Saco el punto  " << tirada << "Si saca ese mismo numero gana, empiece a tirar" << endl;
	  cout << " " <<endl;
      }
    }
      else
	{
	  if (tirada == p) //gana
	  {
	  cout<< "Saco el punto, Gano!"<<endl;
	  cout << " " <<endl;
	  Resultado(true);
	  con = false;
	}
	  else if (tirada == 7) //pierde
	  {
	  cout<<"Sacaste un 7 y por lo tanto has perdido. :( "<<endl;
	  cout << " " <<endl;
	  Resultado(false);
	  con = false;
	}
      }
  }
 Menu();
}
void Craps::Menu()
{

  int opcion;

 
  cout << " " << endl;
  cout << "Menu:"<<endl;
  cout << " " << endl;
  cout << "Usted tiene esta plata: " << SaldoenBanco << endl;
  cout << "Seleciona una opcion: "<< endl;
  cout << "Presione 1 para jugar ahora." <<  endl;
  cout << "Presione 2 para salir del juego." << endl;
  cout << " " << endl;
  cin>>opcion; //guarda opcion de usuario
  
  if (opcion==1) //juega
    {
      if (SaldoenBanco>0) //revisa que tenga plata
      {
	Juego(); //llama la funcion juego
    }
      else //sale del juego
      {
      string volver;
      cout << "Chao. Cuando quiera aqui puede venir a apostar." << endl;
      }
  }
  else if (opcion==2) //se despide del usuario
    {
    cout << "Sale del juego, su plata actual es: " << SaldoenBanco << endl;
  }
  else //se asegura que lo que puso este en el menu
    {
    cout << "Lo que puso no esta en el menu." << endl;
    Menu();
  }
 
}

int main() //funcion principal
{
  Craps JuegoCraps; //crea objeto de la clase Craps
  JuegoCraps.Menu();  //llama menu para comenzar
  
  return 0;
}


