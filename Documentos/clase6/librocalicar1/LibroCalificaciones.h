#include <string>

using namespace std;

class LibroCalificaciones
{
public:
  // constante -- número de estudiantes que tomaron la prueba
  const static int estudiantes = 10; // observe los datos públicos

  LibroCalificaciones( string, const int [] );
  void establecerNombreCurso( string );
  string obtenerNombreCurso(); 
  void mostrarMensaje();
  
  void procesarCalificaciones(); // realiza varias operaciones con los datos de calificaciones
  int obtenerMinimo(); // 
  int obtenerMaximo(); //
  double obtenerPromedio(); 
  void imprimirGraficoBarras(); 
  void imprimirCalificaciones(); 
 private:
  string nombreCurso; 
  int calificaciones[ estudiantes ]; // arreglo de calificaciones de estudiantes
};
