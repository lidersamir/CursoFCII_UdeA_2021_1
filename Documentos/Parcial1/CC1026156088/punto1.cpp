/* Las funciones suma, resta e imprimir numero que se encuentran dentro de complejo.h no retornan valores, en cambio imprimen el resultado en pantalla, mientras que para ver la parte real o imaginaria si retornal el valor de tipo double   */
/*
si es posible incluir otras funciones, por ejemplo en este caso incluimos una funcion que imprime la norma del numero complejo
*/


#include "complejo.h"
#include <iostream>

using namespace std;

int main()
{
 
  complejo c1(1,2);
  complejo c2(1.2,2);

  
  c1.imprimirNumero();
  c1.norma();
  c2.imprimirNumero();
  c2.norma();  
  c1.suma(c2);
  c1.resta(c2);
  
  return 0;
}
