#include <cmath>
#include "Seno.h"

Seno::Seno( double x, int N ){  //Constructor, asigna los valores de las variables privadas
       n = N ;
       tetha = x;
} 

double Seno::factorial( unsigned int N ){   //Factorial
       double fact = 1;   //inicializa el valor de factorial
       if (N > 0){     //condicion para N>0
          int i = 1;   //contador
          while (i <= N){  //ciclo paracalcular factorial de un número positivo
                fact = fact*i;
                i++;
                }
       }
       if (N = 0){     //condicion para N<0
          //fact = fact; 
       }
 
       return fact;
} 

double Seno::getSeno(){   //Calculo del seno
          const double PI = 3.141592654;  //constante pi
          int i = 0;   //contador
          float s = 0.0;   //inicializa el valor de la suma
          while (i <= n){  //ciclo
                s = s + (pow((-1),i)*pow((tetha*PI/180.0),(2*i+1)))/Seno::factorial(2*i+1);
                i++;
           }
          return s;
} 

void Seno::displayMessage(){  //mensaje final.
        cout << "\nEl valor del seno de "<< tetha <<" es: " << Seno::getSeno() << endl;
        return;
}


