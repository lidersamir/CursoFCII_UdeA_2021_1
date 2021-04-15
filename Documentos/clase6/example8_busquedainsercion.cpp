#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int tamanioArreglo = 10; 
  int datos[ tamanioArreglo ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
  
  int insertar; // variable temporal para guardar el elemento a insertar
  
  cout << "Arreglo desordenado:\n";

  for ( int i = 0; i < tamanioArreglo; i++ ){
    cout << setw( 4 ) << datos[ i ];
  }

  // ordenamiento por inserción
  for ( int mm = 1; mm < tamanioArreglo; mm++ )
    {
      insertar = datos[ mm ]; // almacena el valor en el elemento actual
      
      int moverElemento = mm; // inicializa la ubicación para colocar el elemento
      
      // busca la ubicación en la que va a colocar el elemento actual
      while ( ( moverElemento > 0 ) && ( datos[ moverElemento - 1 ] > insertar ) )
	{
	  // desplaza el elemento una posición a la derecha
	  datos[ moverElemento ] = datos[ moverElemento - 1 ];
	  moverElemento--;
	}
      
      datos[ moverElemento ] = insertar; // coloca el elemento insertado en el arreglo
    } 
  

  cout << "\nArreglo ordenado:\n";
  // imprime el arreglo ordenado
  for ( int i = 0; i < tamanioArreglo; i++ ){
    cout << setw( 4 ) << datos[ i ];
  }
  
  cout << endl;
  
 return 0;
}  
