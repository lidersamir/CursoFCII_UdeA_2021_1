#include <string>

using namespace std;

#include "LibroCalificaciones.h" 

int main()
{

  // arreglo de calificaciones de estudiantes
  int arregloCalificaciones[ LibroCalificaciones::estudiantes ] = { 0, 0, 0, 82, 42, 52, 74, 82, 100, 88 };
  LibroCalificaciones miLibroCalificaciones("CS101 Introduccion a la programacion en C++", arregloCalificaciones );
  miLibroCalificaciones.mostrarMensaje();
  miLibroCalificaciones.procesarCalificaciones();
  return 0;
}
