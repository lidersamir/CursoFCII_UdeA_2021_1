#include "Seno.h" // importa la clase Seno

int main()  //función principal
{
   double x;  //definición de variables
   int N;
   cout << "Este programa calcula el seno de un ángulo mediante la serie de Taylor." << endl; // mensaje para el usuario
   cout << "Por favor ingrese un ángulo en grados" << endl; 
   cin >> x;   //ingreso del ángulo por teclado
   cout << "Por favor ingrese el número de terminos que quiere que tenga la serie,\ndebe ser un número entre 0 y 170."
        << endl << "Recuerde que esto influye en la precisión del valor calculado." << endl;
   cin >> N;   //ingreso del número de terminos de la serie por teclado
   Seno seno(x,N);  //crea un objeto seno
   seno.displayMessage(); //muestra el valor de seno calculado
   cout << "El factorial de " << N << " es: " << seno.factorial(N) << endl; //muestra el factorial de N 
   return 0; 
} 
