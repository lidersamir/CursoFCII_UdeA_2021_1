#include <cmath>
#include <iostream>
using namespace std;

/*Funciones para calcular el valor específico de la funcion en un valor dado, la integral por el método Trapezoidal y por el método de Simpson*/

//Calcula el valor de una función en un punto dado, para integrar una función diferente es necesario cambiar la función.
double Funcion(double x){  
       return sin(pow(x,2));
}

double Trapezoidal(double a, double b, int n){  //Integral por el método trapezoidal.
     double x;
     double dx = (b-a)/n;
     double suma = (dx/2)*(Funcion(a)+Funcion(b));
     for(int i=1 ; i<n ; i++){
         x = a + i*dx;
         suma = suma + dx*Funcion(x);      
     }
     return suma;
}

double Simpson(double a, double b, int n){  //Integral por el método de Simpson.
     double x;
     double dx = (b-a)/n;
     double suma = (dx/3)*(Funcion(a)+Funcion(b));
     for(int i=1 ; i<n ; i++){
         x = a + i*dx;
         if(i%2==1){
           suma = suma + (dx/3)*4*Funcion(x); 
         }
         if(i%2==0){
           suma = suma + (dx/3)*2*Funcion(x);
         }      
     }
     return suma;
}

/***********************************************Funcion principal**************************************/
int main(){
    double a = 1;  //valor inicial del intervalo de integración.
    double b = 5;  //valor final del intervalo de integración.
    int n = 1000;  //Número de intervalos.
    cout << "El valor de la integral de x^2 entre " << a << " y " << b << " es: " <<endl;
    cout << "Por la regla del trapecio: " << Trapezoidal(a,b,n) << endl;
    cout << "Por la regla de Simpson: " << Simpson(a,b,n) << endl;
    return 0;
}
