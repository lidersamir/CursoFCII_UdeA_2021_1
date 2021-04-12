#include<iostream>
#include<cmath>
#include "Metodos_num.h"

using namespace std;

double f(double x)
{
    return exp(-pow(x,2)); // Función error que se integra numericamente
}

int main()
{   
    intg_metds metd;
    int k = 2; // Orden del calculo
    double valor = 0.74682404;  // Resultado exacto de la funcion error entre 0 y 1 
    double valor_trap = metd.trapezoidal(f, k, 0, 1); // Valor de la integral obtenido por el metodo trapezoidal
    double valor_simp = metd.simpson(f, k, 0, 1);   // Valor de la integral obtenido por el metodo de simpson
    double err_trap = abs(valor_trap-valor)/valor*100; // Error porcentual del metodo trapezoidal al orden 2
    double err_simp = abs(valor_simp-valor)/valor*100; // Error porcentual del metodo de simpson al orden 2
    cout << "La integral de la funcion error entre 0 y 1 con el metodo trapezoidal es: " << valor_trap<<endl;
    cout << "con un error porcentual respecto al valor exacto del "<< err_trap <<"%"<<endl;
    cout << "La integral de la funcion error entre 0 y 1 con el metodo de simpson es: " << valor_simp<<endl;
    cout << "con un error porcentual respecto al valor exacto del "<< err_simp <<"%"<<endl;

    return 0;
}

