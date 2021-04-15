#include <string>

using namespace std;

class LibroCalificaciones
{
public:
  // constantes
  const static int estudiantes = 10; // numero de estudiantes
  const static int pruebas = 3; // número de pruebas

  LibroCalificaciones( string, const int [][ pruebas ] );
  void establecerNombreCurso( string );
  string obtenerNombreCurso(); 
  void mostrarMensaje();
  
  void procesarCalificaciones();
  int obtenerMinimo(); // 
  int obtenerMaximo(); //
  double obtenerPromedio( const int [], const int ); 
  void imprimirGraficoBarras(); 
  void imprimirCalificaciones();
  
 private:
  string nombreCurso;
  int calificaciones[ estudiantes ][ pruebas ];//arreglo bidimensional de estudiantes
};
