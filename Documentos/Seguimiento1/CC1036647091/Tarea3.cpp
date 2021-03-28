#include <iostream>
#include <iomanip>
#include <cstdlib> // contiene el prototipo de la función rand
#include <ctime>  // a la c++ :)


using namespace std;


int main()
{
  int aleatorio, n, para; //variables necesarias
  
  para = 1;
  while (para = 1) //se ejecuta bucle para controlar por el usuario si desea continuar
    {
      srand(time(0)); //semilla de los numeros aleatorios
  
      aleatorio = 1 + rand()%(1001 - 1); //genera aleatorio

      if (aleatorio == n) //si se cumple esta condicion para el juego 
    {
      cout << "El juego termino" << endl;
      break;

    }
      // cout << aleatorio << endl; //era para poder observar el numero generado

  
      while (aleatorio != n) //se ejecuta bucle siempre y no se adivine el numero
    {
      cout << "Ingrese numero entre 1 y 1000" << endl;
      cin >> n;
     
      if (n > aleatorio) //muestra mensaje de mayor
	{
	  cout << "Intente mas abajo a ver si le atina"  << endl;
	}
      else if (n < aleatorio)  //muestra mensaje de menor
	{
	  cout << "Intente mas arriba a ver si le atina"  << endl;
	}
      else  //muestra mensaje de ganador
	{
	   cout << "¡Adivino!"<< endl;
	}
      }
  cout << "si desea continuar, marque 1, de lo contrario, marque otro numero" << endl; //para continuar
  cin >> para;
  if (para != 1 ) //condicion para continuar
    {
      cout << "Muchas gracias" << endl;
      break;
	}
  else {
    continue;
      }
     }
   }

