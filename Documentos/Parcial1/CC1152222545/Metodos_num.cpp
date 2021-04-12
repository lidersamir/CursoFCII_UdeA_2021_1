#include<iostream>
#include<cmath>
#include "Metodos_num.h"

using namespace std;

/* Los metodos de integración numericos acá implementados fueron desarrollados para buscar soluciones numericas 
a integrales que solo se pueden hacer de esta forma, o para optimizar la solucion de muchas otras al hacerlas 
de forma computacional*/

/* El metodo trapezoidal consiste en aproximar el area debajo de la curva al area de un trapezoide formado al unir
por una linea dos puntos a y b, al poner más puntos intermedios se aumentan los trapezoides y se obtiene
mejores resultados al sumar el area de todos estos. */
double intg_metds::trapezoidal(double f(double x ), int k, double init, double end )
{
    int n = pow(2,k); // Numero de paneles o divisiones
    double cte = (end-init)/n/2; // Constante que multiplica a todas las entradas
    double area = f(end) + f(init); // Area bajo la curva iniciada en los valores extremos
    for (int i=1; i<n; i++)
    {
        area += 2*f(init + i*cte*2); // Contribuciones al area
    }
    return area*cte;
}

/* El metodo de simpon es una mejora a este metodo trapezoidal, en vez de trapezoides se usa el area debajo
de una parabola, la cual se define por tres puntos, tomando varias parabolas y sumando el area de estas
se obtiene una buena aproximación del area bajo la curva d euna función. */
double intg_metds::simpson(double g(double x ), int k, double init, double end)
{
    int n = pow(2,k); // Numero de paneles o divisiones
    double cte = (end-init)/n/3; // Ancho de las divisiones
    double area = g(end) + g(init); // Area bajo la curva iniciada en los valores extremos
    for (int j=1; j<n; j++)
    {
        if (j % 2 == 0 )     
            area += 2*g(init + j*cte*3);
        else
            area += 4*g(init + j*cte*3);   
    }
    return area*cte;
}

