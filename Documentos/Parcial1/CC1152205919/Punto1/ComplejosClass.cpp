#include <cmath>
#include "Complejos.h"

Complejos::Complejos( double a, double b, double c, double d ){  //Constructor, asigna los valores de las variables privadas
       AsignarDatos(a, b, c, d);
} 

void Complejos::AsignarDatos(double a, double b, double c, double d){ //función para asignar datos
       parteReal1 = a;
       parteImaginaria1 = b;
       parteReal2 = c;
       parteImaginaria2 = d;
}

double Complejos::getParteReal1(){  //función para obtener la parte real del primer número
       return parteReal1;
}

double Complejos::getParteReal2(){   //función para obtener la parte real del segundo número
       return parteReal2;
}

double Complejos::getParteImaginaria1(){  //función para obtener la parte imaginaria del primer número
       return parteImaginaria1;
}

double Complejos::getParteImaginaria2(){   //función para obtener la parte imaginaria del segundo número
       return parteImaginaria2;
}

void Complejos::suma(){                 //funcion que suma los dos números complejos
     double A = parteReal1+parteReal2;
     double B = parteImaginaria1+parteImaginaria2;
     cout << "La suma de los números es: " << A << "+" << B << "i" << endl;
     return;
}

void Complejos::resta(){                 //funcion que resta los dos números complejos
     double A = parteReal1-parteReal2;
     double B = parteImaginaria1-parteImaginaria2;
     cout << "La resta de los números es: " << A << "+" << B << "i" << endl;
     return;
}

void Complejos::printNum1(){  //imprime el primer número complejo
     cout << "El primer número complejo es: " << parteReal1 << "+" << parteImaginaria1 << "i" << endl;
     return;
}

void Complejos::printNum2(){  //imprime el segundo número complejo.
     cout << "El segundo número complejo es: " << parteReal2 << "+" << parteImaginaria2 << "i" << endl;
     return;
}

void Complejos::mult(){                 //funcion que multiplica los dos números complejos
     double A = (parteReal1*parteReal2)-(parteImaginaria1*parteImaginaria2);
     double B = (parteReal1*parteImaginaria2)+(parteReal2*parteImaginaria1);
     cout << "La multiplicación de los números es: " << A << "+" << B << "i" << endl;
     return;
}
