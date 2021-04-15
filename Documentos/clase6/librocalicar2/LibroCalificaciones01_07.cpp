#include <string>

using namespace std;

#include "LibroCalificaciones.h" 

int main()
{

  // arreglo bidimensional de calificaciones de estudiantes
  int arregloCalificaciones[ LibroCalificaciones::estudiantes ][ LibroCalificaciones::pruebas ] =
    { { 87, 96, 70 },
      { 68, 87, 90 },
      { 94, 100, 90 },
      { 100, 81, 82 },
      { 83, 65, 85 },
      { 78, 87, 65 },
      { 85, 75, 83 },
      { 91, 94, 100 },
      { 76, 72, 84 },
      { 87, 93, 73 } };

  LibroCalificaciones miLibroCalificaciones("CS101 Introduccion a la programacion en C++", arregloCalificaciones );
  miLibroCalificaciones.mostrarMensaje();
  miLibroCalificaciones.procesarCalificaciones();
  
  return 0;
}
