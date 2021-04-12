#include <iostream>
#include "serieseno.h"

using namespace std;

int main() //funcion principal 
{
  SerieSeno s(3,0.785); //crea el objeto de la clase serie de seno y pasa como paramentros numero de terminos y valor de x

  s.calculaseno(); //llama la funcion calculaseno()
  s.mostrarMensaje();
  return 0;
}

