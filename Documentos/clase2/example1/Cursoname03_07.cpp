// Crea una instancia de múltiples objetos de la clase LibroCalificar y usando
// el constructor LibroCalificar para especificar el nombre del curso
#include <iostream>
#include <string> 

using namespace std;

class LibroCalificar
{
public:
   // el constructor inicializa courseName con una cadena suministrada como argumento
   LibroCalificar( string name )
   {
      setCourseName( name ); //llamar a la función set para inicializar courseName
   }
  
   void setCourseName( string name )
   {      
      courseName = name; 
   } 
   
   string getCourseName() 
   {
      return courseName; 
   }

   void displayMessage()
   {
     cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() << "!" 
         << endl;
   } 
private:
   string courseName; 
};   

int main()
{
   // create two LibroCalificar objects
   LibroCalificar gradeBook1( "Introduction to C++ Programming" );
   LibroCalificar gradeBook2( "metodos computacionales II" );

   //Mostrar el valor inicial de courseName para cada LibroCalificar.
   cout << "libroCalificar1 creado para el  curso: " << gradeBook1.getCourseName()
      << "\nlibroCalificar2 creado para el  curso: " << gradeBook2.getCourseName() 
      << endl;
   return 0; 
} 
