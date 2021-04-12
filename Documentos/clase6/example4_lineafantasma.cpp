#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  char cadena1[ 20 ]; 
  char cadena2[] = "literal de cadena";
  
  // lee la cadena del usuario y la coloca en el arreglo cadena1
  cout << "Escriba la cadena \"hola todos\": ";
  cin >> cadena1;
    
  cout << "cadena1 es: " << cadena1 << "\ncadena2 es: " << cadena2;
  cout << "\ncadena1 con espacios entre caracteres es:\n";
  
  // imprime caracteres hasta llegar al caracter nulo
  for ( int i = 0; cadena1[ i ] != '\0'; i++ ){
    cout << cadena1[ i ] << ' ';
  }
  
  cin >> cadena1; // lee "todos"
  cout << "\ncadena1 es: " << cadena1 << endl; // NOTE: cuidado con la linea fantasma. aca debe usar getline(cin,string)
  return 0; 
}
