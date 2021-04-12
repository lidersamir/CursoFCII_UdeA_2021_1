#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "LibroCalificaciones.h"

using namespace std;

// el constructor inicializa nombreCurso y el arreglo calificaciones
LibroCalificaciones::LibroCalificaciones( string nombre, const int arregloCalificaciones[] )
{
establecerNombreCurso( nombre );
 
 for ( int calificacion = 0; calificacion < estudiantes; calificacion++ ){
   calificaciones[ calificacion ] = arregloCalificaciones[ calificacion ];
 }
 
}

void LibroCalificaciones::establecerNombreCurso( string nombre )
{
nombreCurso = nombre; 
} 

string LibroCalificaciones::obtenerNombreCurso()
{
return nombreCurso;
} 

void LibroCalificaciones::mostrarMensaje()
{
cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!" << endl;
}

// realiza varias operaciones con los datos
void LibroCalificaciones::procesarCalificaciones()
{
  imprimirCalificaciones();
  
  cout << "\nEl promedio de la clase es " << setprecision( 2 ) << fixed << obtenerPromedio() << endl;
  
  cout << "La calificacion mas baja es " << obtenerMinimo() << "\nLa calificacion mas alta es "
       << obtenerMaximo() << endl;
  
   imprimirGraficoBarras();
}

int LibroCalificaciones::obtenerMinimo()
{
int calificacionInf = 100; 
 
// itera a través del arreglo calificaciones
for ( int calificacion = 0; calificacion < estudiantes; calificacion++ )
  {
    if ( calificaciones[ calificacion ] < calificacionInf )
      calificacionInf = calificaciones[ calificacion ]; // nueva calificación más baja
  }
 return calificacionInf; 
}

int LibroCalificaciones::obtenerMaximo()
{
int calificacionSup = 0;

for ( int calificacion = 0; calificacion < estudiantes; calificacion++ )
{
if ( calificaciones[ calificacion ] > calificacionSup )
calificacionSup = calificaciones[ calificacion ];
} 
return calificacionSup; 
}

double LibroCalificaciones::obtenerPromedio()
{
int total = 0; 
// suma las calificaciones en el arreglo
 for ( int calificacion = 0; calificacion < estudiantes; calificacion++ ){
total += calificaciones[ calificacion ];
 }

return static_cast< double >( total ) / estudiantes;
}

void LibroCalificaciones::imprimirGraficoBarras()
{
  cout << "\nDistribucion de calificaciones:" << endl;

  const int tamanioFrecuencia = 11;
  int frequency[ tamanioFrecuencia ] = {};
  
  // para cada calificación, incrementa la frecuencia apropiada
  for ( int calificacion = 0; calificacion < estudiantes; calificacion++ ){
    frequency[ calificaciones[ calificacion ] / 10 ]++;
  }
    
  // para cada frecuencia de calificación, imprime barra en el gráfico
  for ( int cuenta = 0; cuenta < tamanioFrecuencia; cuenta++ )
    {
      // imprime etiquetas de las barras ("0-9:", ..., "90-99:", "100:" )
      if ( cuenta == 0 )
	cout << " 0-9: ";
      else if ( cuenta == 10 )
	cout << " 100: ";
      else
	cout << cuenta * 10 << "-" << ( cuenta * 10 ) + 9 << ": ";
      // imprime barra de asteriscos
      for ( int estrellas = 0; estrellas < frequency[ cuenta ]; estrellas++ )
	cout << '*';
      
      cout << endl; // empieza una nueva línea de salida
      
    } 
  }

// imprime el contenido del arreglo calificaciones
void LibroCalificaciones::imprimirCalificaciones()
{
  cout << "\nLas calificaciones son:\n\n";

  // imprime la calificación de cada estudiante
  for ( int estudiante = 0; estudiante < estudiantes; estudiante++ ){
    cout << "Estudiante " << setw( 2 ) << estudiante + 1 << ": " << setw( 3 )
	 << calificaciones[ estudiante ] << endl;
  }
}
