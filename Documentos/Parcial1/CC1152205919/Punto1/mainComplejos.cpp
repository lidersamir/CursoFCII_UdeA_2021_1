#include <cmath>
#include "Complejos.h"

int main(){
    double x1;  //definicion de variables
    double x2;
    double y1;
    double y2;

    cout << "Este programa calcula la suma, resta y multiplicación de dos numeros complejos" << endl;
    cout << "Por favor introduzca la parte real del primer número" << endl;
    cin >> x1;  //inicializacion de la primera variable
    cout << "Por favor introduzca la parte imaginaria del primer número" << endl;
    cin >> x2;  //inicializacion de la segunda variable 
    cout << "Por favor introduzca la parte real del segundo número" << endl;
    cin >> y1;  //inicializacion de la tercera variable 
    cout << "Por favor introduzca la parte imaginaria del segundo número" << endl;
    cin >> y2;  // inicializacion de la cuarta variable

    Complejos complejos(x1,x2,y1,y2); //constructor del objeto complejos
    cout << "\n";
    complejos.printNum1(); //imprime el primer numero complejo
    complejos.printNum2(); //imprime el segundo numero complejo
    cout << "\n";
    complejos.suma(); //suma los dos numero y lo imprime 
    complejos.resta();  //resta los dos numeros y lo imprime 
    complejos.mult();  //multiplica los dos numeros y lo imprime
    cout << "La parte real del primer número es: " << complejos.getParteReal1() << endl;  //imprime la parte real del primer numero
    cout << "La parte imaginaria del segundo número es: " << complejos.getParteImaginaria2() << endl; //imprime la parte compleja del segundo número 
    cout << "El complejo conjugado del segundo número complejo es: " << complejos.getParteReal2() << "+" << (-1)*complejos.getParteImaginaria2() << "i" << endl;
}


/*
¿Podrian programarse otras operaciones entre complejos?
Sí, podrían pogramarse operaciones como la de multiplicación, división, complejo conjudado y la norma. En el programa estan incluidos la multiplicación y el complejo conjugado. 
*/
