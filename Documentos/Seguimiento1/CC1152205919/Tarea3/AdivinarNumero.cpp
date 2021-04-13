#include <iostream>
#include <iomanip>
#include <cstdlib> // contiene el prototipo de la función rand
#include <ctime>  // a la c++ :)
using namespace std;

int main()
{
  //srand(time(0));
  srand(time(NULL)); // TENGA CUIDADO SOLO LLAMAR UNA VEZ
  
  int Numero = 1 + rand() % 1001; 
  int Adivina;
  char VolveraJugar = 'y';

  cout << "Bienvenido al juego Adivinar Número" << endl;
  cout << "Por favor introduzca un número entre 1 y 1000" << endl;
  cin >> Adivina;
  while(Adivina != 0){
  if(Adivina == 0){
    break;
    }
  if(Adivina < Numero){
    cout << "Su número es menor que el número correcto" << endl;
    cout << "Vuelva a intentarlo" << endl;
    cin >> Adivina;
  }
  if(Adivina > Numero){
    cout << "Su número es mayor que el número correcto" << endl;
    cout << "Vuelva a intentarlo" << endl;
    cin >> Adivina;
  }
  if(Adivina == Numero){
    cout << "Su número es correcto. Ganó!!" << endl;
    cout << "Quiere volver a jugar? Escriba y para si ó n para no." << endl;
    cin >> VolveraJugar;
    switch ( VolveraJugar ){
           case 'y':
           case 'Y':
                Numero = 1 + rand() % 1001;
                cout << "Por favor introduzca un número entre 1 y 1000" << endl;
                cin >> Adivina;
                break;
           case 'n':
           case 'N': // incrementa el contador de 2s
                Adivina = 0;
                break;
           default: // valor inválido
                cout << "El caracter no es correcto.";
                Adivina = 0;
    } // fin de switch
  }
  }// fin while

return 0; // indica que
}
