#include<iostream>
#include<vector>
#include "Complex.h"
#include<math.h>

using namespace std;

// Guarda un numero complejo como un vector de dim 2
vector<double> complejo::assign(double x, double y)
{
    re = x;
    im = y;
    vector<double> cmplx = {re, im};
    return cmplx;
}

double complejo::get_im(vector<double> complx)
{
    im = complx[1];
    return im;
}

double complejo::get_real(vector<double> complx)
{
    re = complx[0];
    return re;
}

// a) Suma de dos numeros complejos 
vector<double> complejo::sum(vector<double> x, vector<double> y)
{
    re = x[0] + y[0];
    im = x[1] + y[1];
    return assign(re, im);     
}

// b) Resta de dos numeros complejos 
vector<double> complejo::rest(vector<double> x, vector<double> y)
{
    re = x[0] - y[0];
    im = x[1] - y[1];
    return assign(re, im);     
}

// c) Imprime el numero complejo 
void complejo::display_com(vector<double> x)
{
    re = x[0];
    im = x[1];
    cout<< "El numero complejo es: "<< re << " + " << im << "i" << endl; 
} 

// d) Otras operaciones que se pueden programar
// Norma al cuadrado de un numero complejo.
double complejo::norm(vector<double> x)
{
    return pow(x[0],2) + pow(x[1],2);
}

// Multiplicacion de numeros complejos
vector<double> complejo::multy(vector<double> x, vector<double> y)
{
    re = x[0]*y[0]-x[1]*y[1];
    im = x[0]*y[1]+x[1]*y[0];
    return assign(re, im);
}

// Se obtiene el complejo conjugado
vector<double> complejo::conj(vector<double> x)
{
    return assign(x[0],-x[1]);
}

vector<double> complejo::div(vector<double> x, vector<double> y)
{
    vector<double> numerador = multy(x, conj(y));
    numerador[0] /= norm(y);
    numerador[1] /= norm(y);
    return numerador;
}
