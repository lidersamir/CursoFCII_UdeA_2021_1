#include <iostream>
#include <iomanip>
#include "craps.h"

using namespace std;


int main()
{
  
  double saldoenBanco=1000000;
  double apuesta; // valor que se va a apostar
  double compararjuego=1; // sirve para comparar si continua jugando o no
  double comparaApuesta; // sirve para que la apuesta ingresada sea correcta
  int contador=0; // para cuando lleva varias ganadas

  int c1=0, c2=0, c3=0, c4=0; // asi solo se repite una vez las condiciones
  
  
  while(saldoenBanco>0 && compararjuego!=0) // sirve para jugar mientras que su saldo no sea cero
    {
      cout<<"ingresa el valor que quieres apostar"<<endl;
      cin>>comparaApuesta;
      

      while(saldoenBanco-comparaApuesta<0) // cuando ingresa una apuesta menor al saldo
	{
	  cout<<"ingreso una apuesta mayor al saldo en banco, porfa ingresa una apuesta mas acorde ";
	  cin>>comparaApuesta;
	}
      

      apuesta=comparaApuesta; // cuando por fin se hace una apuesta coherente continua jugando


      
      if(c4==0 && apuesta==saldoenBanco) // condicion para cuando apuesta todo
	{cout<<"\nPrimera vez que apuestas todo!!, ojala ganes el juego!"<<endl; c4+=1;}


      

      // REALIZA EL JUEGO DE CRAPS Y CONDICION SI GANA O PIERDE
      
      
      int resultadoJuego=craps(); // resultado del juego, 1 si gana, 0 si pierde
	
	
      if(resultadoJuego==1) //si gana aumenta el valor al saldo
	{
	 saldoenBanco=saldoenBanco+apuesta;
	 cout<<"\nGanaste!!"<<endl;
	 contador+=1;
	}

      if(resultadoJuego==0) // si pierde resta el saldo en banco
	{
	 saldoenBanco=saldoenBanco-apuesta;
	 cout<<"\nHas perdido :("<<endl;
	 contador=0;
	}


      
      cout<<setprecision(8)<<"\nEn estos momentos tu saldo es: "<<saldoenBanco<<endl;  // saldo disponible

      

      if(saldoenBanco==0) // condicion para cuando esta quebrado
	{
	  cout<<"\nLo siento, estas en quiebra y no puedes seguir jugando"<<endl;
	  break;
	}

      

      // DIALOGO CON EL JUGADOR
      
      if(c1==0 && saldoenBanco<1000)
	{ cout<<"\nes muy problable que quedes en bancarrota, mejor dejalo ya"<<endl; c1=c1+1;}

      if(c2==0 && saldoenBanco>=2000000)
	{ cout<<"\nYa ganaste el doble de tu saldo incial, yo me retiraria muy feliz"<<endl; c2=c2+1;}

      if(c3==0 && saldoenBanco<600000 && saldoenBanco>400000)
	{ cout<<"\nEstas por la mitad de tu valor inicial, sigue!, tal vez lo recuperes"<<endl; c3+=1;}

      if(resultadoJuego==1 && contador==3)
	{cout<<"\nVan tres victorias en linea, continua que estas en racha!"<<endl; }

      //--- --- ---

	
      cout<<"\nsi deseas seguir jugando ingrese cualquier numero, de lo contrario ingrese 0"<<endl;
      cin>>compararjuego;
      
      
    } // fin del wihile para jugar
  
  return 0;
} // fin del main
