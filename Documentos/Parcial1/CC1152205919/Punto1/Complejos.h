#include <iostream>
using namespace std;


// Seno class definition
class Complejos
{
public: // Variables públicas de la clase
   Complejos(double, double, double, double); //constructor, las dos entradas son: parte real y parte imaginaria
   void AsignarDatos(double, double, double, double); //función para asignar datos
   double getParteReal1(); //Función que entrega la parte real del primer número 
   double getParteReal2();  //Función que entrega la parte real del segundo número
   double getParteImaginaria1(); //Función que entrega la parte imaginaria del primer número
   double getParteImaginaria2(); //Función que entrega la parte imaginaria del segundo número
   void suma();  //Funcion para sumar números complejos
   void resta();  //Funcion para restar números complejos
   void printNum1();  //Funcion para imprimir el primer número complejo
   void printNum2();  //Funcion para imprimir el segundo número complejo
   void mult();  //Funcion para multiplicar numeros complejos
private:// Variables privadas
   double parteReal1; //parte real del numero1
   double parteImaginaria1; //parte imaginaria del numero1
   double parteReal2; //parte real del numero2
   double parteImaginaria2; //parte imaginaria del numero2
};

