/*El metodo del trapecio es una tecnica de integracion numerica que consiste en hacer una division del intervalo de modo que se obtengan varios trapecios con una altura igual a la función evaluada en el punto x_i y calculando el area de cada uno de los trapecios se obtiene una aproximacion al valor de la integral de la funcion.*/

/*El metodo de simpson es una tecnica de integracion numerica, esta tecnica asegura que el valor de la integral de una funcion es proporcional a ((b-a)/6)*(f(a)+4f(m)+f(b)). Haciendo una particion del intervalo de integracion y aplicando varias veces este resultado podemos aproximar el valor de la integral.*/

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double f(float x)
{
  return pow(9-x*x,0.5); 
}

int main()
{

  /*INICIA EL METODO DEL TRAPECIO*/
  
  int n=10; // Numero de divisiones del intervalo
  float a=-3; // Limite inferior
  float b=3; // Limite superior
  float dx=(b-a)/n; // Ancho de los trapecios
  float areaT;
  float IntegralT=0;
  for(int i=0;i<n;i+=1){
    areaT = (f(a)+f(a+dx))*dx/2; // Area de cada uno de los trapecios
    IntegralT += areaT; // Suma cada area para calcular el valor de la integral
    a+=dx;
  };
  cout<<endl;
  cout<<"El valor de la integral con el metodo del trapecio es: "<<IntegralT<<endl;


  /*INICIA EL METODO DE SIMPSON 1/3*/
  
  a =-3; //asignamos el limite superior
   
 /* float b = 3; //asignamos el limite inferior
    int n=10; //numero de particiones
    float dx=(b-a)/n;*/ //ancho de los intervalos

  float integralS=0;

  for(int i=1;i<=n;i+=1){
    b = a + dx; //pasamos al siguiente intervalo
    float areaS= (b - a)/6*(f(a)+4*f((a+b)/2)+f(b));//calculamos simpson para cada intervalo
    integralS+=areaS;//agregamos los resultados y sumamos
    a=b; //se reasigna a para pasar al siguiente intervalo
  };
  cout<<"El valor de la integral por el metodo simpson es: "<<integralS<<endl;


  /*CONCLUSION*/

  /*----------------------------------------*/
  cout<<endl;
  cout<<"El metodo de Simpson arroja un resultado mas aproximado que el metodo del trapecio usando la misma cantidad de iteraciones."<<endl;
}

