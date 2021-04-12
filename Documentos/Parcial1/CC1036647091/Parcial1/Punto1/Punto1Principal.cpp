#include <iostream>
using namespace std; //para imprimir resultados con notacion mas simple  
#include "Punto1.h"  //llama la clase Complejo

int main() //funcion principal
{
    Complejo  C1(5,4), C2(3,6), funcion; //variables necesarias
    
    funcion=funcion.Sum(C1,C2); //llama a la funcion para hacer suma 
    cout << "La suma de los numeros complejos\n" << endl;
    cout << C1.obtenerParteReal() << " + " << C1.obtenerParteImaginaria() << "i" << endl;
    cout << C2.obtenerParteReal() << " + " << C2.obtenerParteImaginaria() << "i" << endl;
    cout << "Da como resultado:\n" << endl;
    funcion.Print(funcion); 

   
    funcion = funcion.Res(C1,C2);
    cout << "\nLa resta de los numeros complejos\n";
    cout << C1.obtenerParteReal() << " + " << C1.obtenerParteImaginaria() << "i" << endl;
    cout << C2.obtenerParteReal() << " + " << C2.obtenerParteImaginaria() << "i" << endl;
    cout << "Da como resultado:\n" << endl;
    funcion.Print(funcion);

     cout << "Respuesta al punto D: Existen mas operaciones entre complejos, la multiplicacion y la division, ambas se pueden programar, siendo mas sencillo programar la multiplicacion, ya que la division lleva en si misma multiplicaiones, por ende, es mas simple programar la multiplicacion " << endl;

    return 0;
}
