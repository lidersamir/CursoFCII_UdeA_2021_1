#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "LibroCalificaciones.h"

using namespace std;

// el constructor inicializa nombreCurso y el arreglo calificaciones
LibroCalificaciones::LibroCalificaciones( string nombre, const int arregloCalificaciones[][pruebas ])
{
establecerNombreCurso( nombre );
 
 // copia calificaciones de arregloCalificaciones a calificaciones
 for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
   for ( int prueba = 0; prueba < pruebas; prueba++ )
     calificaciones[ estudiante ][ prueba ] = arregloCalificaciones[ estudiante ][ prueba ];
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
// imprime el arreglo calificaciones
  imprimirCalificaciones();
  
  // llama a las funciones obtenerMinimo y obtenerMaximo
cout << "\nLa calificacion mas baja en el libro de calificaciones es " << obtenerMinimo()
<< "\nLa calificacion mas alta en el libro de calificaciones es " << obtenerMaximo() <<endl;
 
// imprime gráfico de distribución de todas las calificaciones en todas las pruebas
imprimirGraficoBarras();//
}

// busca la calificación mínima
int LibroCalificaciones::obtenerMinimo()
{
  int calificacionInf = 100; 

  for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
    {
      for ( int prueba = 0; prueba < pruebas; prueba++ )
	{
	  if ( calificaciones[ estudiante ][ prueba ] < calificacionInf )
	    calificacionInf = calificaciones[ estudiante ][ prueba ]; 
	    } 
    }
  return calificacionInf; 
}

// busca la calificación máxima
int LibroCalificaciones::obtenerMaximo()
{
  int calificacionSup = 0;
  
  for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
    {
      for ( int prueba = 0; prueba < pruebas; prueba++ )
	{
	  if ( calificaciones[ estudiante ][ prueba ] > calificacionSup )
	    calificacionSup = calificaciones[ estudiante ][ prueba ]; 
	    } 
    } 
  return calificacionSup;
}

// determina la calificación promedio para la prueba
double LibroCalificaciones::obtenerPromedio( const int conjuntoDeCalificaciones[], const int calificaciones)
{
  int total = 0; 
  
  // suma las calificaciones en el arreglo
  for ( int calificacion = 0; calificacion < calificaciones; calificacion++ ){
    //cout << conjuntoDeCalificaciones[ calificacion ] << endl;
    total += conjuntoDeCalificaciones[ calificacion ];
  }

  return static_cast< double >( total ) / calificaciones;
 }


void LibroCalificaciones::imprimirGraficoBarras()
{
  cout << "\nDistribucion de calificaciones:" << endl;
  
  // almacena la frecuencia de las calificaciones en cada rango de 10 calificaciones
  const int tamanioFrecuencia = 11;
  
  int frecuencia[ tamanioFrecuencia ] = {};
  
  // para cada calificación, incrementa la frecuencia apropiada
  for ( int estudiante = 0; estudiante < estudiantes; estudiante++ ){
    for ( int prueba = 0; prueba < pruebas; prueba++ ){
      ++frecuencia[ calificaciones[ estudiante ][ prueba ] / 10 ];
    }
  }

  // para cada frecuencia de calificaciones, imprime la barra en el gráfico
  for ( int cuenta = 0; cuenta < tamanioFrecuencia; cuenta++ )
    {
      // imprime las etiquetas de las barras ("0-9:", ..., "90-99:", "100:" )
      if ( cuenta == 0 )
	cout << " 0-9: ";
      else if ( cuenta == 10 )
	cout << " 100: ";
      else
	cout << cuenta * 10 << "-" << ( cuenta * 10 ) + 9 << ": ";
      
      // imprime barra de asteriscos
      for ( int stars = 0; stars < frecuencia[ cuenta ]; stars++ ){
	cout << '*';
      }
      cout << endl; // empieza una nueva línea de salida
    }
  
}

// imprime el contenido del arreglo calificaciones
void LibroCalificaciones::imprimirCalificaciones()
{
  cout << "\nLas calificaciones son:\n\n";
  cout << "                 ";
  
  // crea un encabezado de columna para cada una de las pruebas
  for ( int prueba = 0; prueba < pruebas; prueba++ ){
    cout << "Prueba " << prueba + 1 << " ";
  }
  
  cout << "Promedio" << endl;

  // crea filas/columnas de texto que representan el arreglo calificaciones
  for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
    {
      cout << "Estudiante " << setw( 2 ) << estudiante + 1;
      
      for ( int prueba = 0; prueba < pruebas; prueba++ ){
	cout << setw( 9 ) << calificaciones[ estudiante ][ prueba ];
      }
      
      // llama a la función miembro obtenerPromedio para calcular el promedio del estudiante;
      // pasa la fila de calificaciones y el valor de pruebas como argumentos
      double promedio = obtenerPromedio( calificaciones[ estudiante ], pruebas );
      cout << setw( 9 ) << setprecision( 2 ) << fixed << promedio << endl;
    } // fin de for exterior
  
}
