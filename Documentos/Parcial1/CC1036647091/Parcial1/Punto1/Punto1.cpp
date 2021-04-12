#include <iostream>
using namespace std; //para imprimir resultados con notacion mas simple 
#include "Punto1.h" //llama la clase Complejo

Complejo::Complejo(double x, double yi) //se inicializa el constructor
{
    parteReal = x;
    parteImaginaria = yi;
}
void Complejo::asignarDatos(double real, double imaginaria) //llama a la funcion donde asigna datos 
{
    parteReal = real;
    parteImaginaria = imaginaria;
}
double Complejo::obtenerParteReal()  //llama a la funcion donde asigna obtenerParteReal
{
    return parteReal;
}
double Complejo::obtenerParteImaginaria() //llama a la funcion donde asigna obtenerParteImaginaria
{
    return parteImaginaria;
}
Complejo Num(Complejo N)
{
    return N;
}
Complejo Complejo::Sum(Complejo n1, Complejo n2) //suma complejos
{
    Complejo suma;
    double x1, x2, yi1, yi2, sumx, sumyi; //variables necesarias para realizar suma
    
    x1 = n1.obtenerParteReal();
    x2 = n2.obtenerParteReal();
    yi1 = n1.obtenerParteImaginaria();
    yi2 = n2.obtenerParteImaginaria();
    sumx = x1 + x2; //suma reales
    sumyi = yi1 + yi2; //suma imaginarias
    suma.asignarDatos(sumx,sumyi);
    
    return suma;
}
Complejo Complejo::Res(Complejo n1,Complejo n2) //resta complejos
{
    Complejo resta;
    double x1, x2, yi1, yi2, resx, resyi; //variables necesarias para realizar resta
    
    x1 = n1.obtenerParteReal();
    x2 = n2.obtenerParteReal();
    yi1 = n1.obtenerParteImaginaria();
    yi2 = n2.obtenerParteImaginaria();
    resx = x1 - x2;
    resyi = yi1 - yi2;
    resta.asignarDatos(resx,resyi);
    
    return resta;
}
void Complejo::Print(Complejo c)
{
    cout << c.obtenerParteReal() <<" + " << c.obtenerParteImaginaria() << "i" << endl;
    cout << " " << endl;
   
}
