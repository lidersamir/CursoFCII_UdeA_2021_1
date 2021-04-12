#include<iostream>
#include<vector>
#include "Complex.h"

int main()
{
    complejo Complex;
    vector<double> com1 = Complex.assign(1.4, 5.3);
    vector<double> com2 = Complex.assign(6.34, -2.5);
    vector<double> com = Complex.div(com1, com2);
    // Comprobemos que la norma al cuadrado es igual a multiplicar por el conjugado
    
    vector<double> norm_com1 = Complex.multy(com1, Complex.conj(com1));
    cout<< "La multiplicacion por el conjugado da un numero complejo."<<endl;
    Complex.display_com(norm_com1);
    cout<<"Lo cual viene siendo un numero real. La funcion para sacar la norma da: "<<Complex.norm(com1)
    <<" lo cual es igual a la parte real del numero complejo anterior." << endl;

    return 0;
}