#include <iostream>
using namespace std;


// Seno class definition
class Seno
{
public: // Variables públicas de la clase
   Seno( double, int); //constructor, las dos entradas son: el ángulo de tipo double y el numero de terminos de la serie de tipo int que debe ser un número entre 0 y 16.
   double factorial(unsigned int); //función para calcular el factorial de un número de tipo int
   double getSeno(); //Función que entrega el valor del seno
   void displayMessage();//Esta función entrega un mensaje que dice: "El valor del seno es: ___" con el respectivo valor calculado
private:// Variables privadas
   int n; //número de ternimos de la serie
   double tetha; //Ángulo al que se le calcula el seno
};



