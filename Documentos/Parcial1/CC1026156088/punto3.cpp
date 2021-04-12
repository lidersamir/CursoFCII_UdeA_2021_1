/*
-El metodo de integracion del trapecio, como su nombre lo indica utiliza trapecios para encontrar el valor de la integral, entonces un intervalo que va desde 'a' hasta 'b' lo divide en 'n' subintervalos, donde se calcula el area del trapecio formado por cada subintervalo y luego se suman dichas areas.
-El metodo de simpson se calcula las integrales por medio de un polinomio interpolador, dicho metodo tambien divide el intervalo que se quiere integrar en subintervalos de igual tamaño, solo que en vez de sumar el area de los trapecios lo hace por medio de polinomios.

Para mi el metodo que da una respuesta mas cercana a la real es el de simpson, ya que este aproxima las integrales con la suma de areas de polinomios y esto permite que se ajusten mejor a la mayoria de funciones, mientras que el metodo del trapecio al utilizar lineas rectas, no permite un ajuste tan optimo.

 */



#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;




// ---- DEFINICION DE LA FUNCION A INTEGAR ---

double fun(double x)
  {
    return x*x*x-3*x;
  }

// --- --- ---





// --- REGLA INTEGRACION DEL TRAPECIO ---


// a: limite inferior de integracion
// b: limite superior integracion
// n: numero de intervalos en los que se va a dividir

double trapecio(double a, double b, double n)
{
  double h=(b-a)/n;   // division de los subintervalos 
  double xk=a;   // es el argumento que va a evaluar la funcion
  double s=0;   // suma de los xk
  double I;   // resultado de la integral
  
  
  while(xk<b)
    {
      s=s+fun(xk);
      xk=xk+h;
      
    }
  
  
  I=(h/2)*(fun(a)+2*s+fun(b));

  return I;
}

// --- --- ---






// --- REGLA SIMPSON ---

double simpson(double a,double b,double n)
{
  double I;             // valor de la integral
  double h=(b-a)/n;     // valor de la variacion
  double s0=fun(a)+fun(b);   // suma de los dos extremos
  double s1=0;          // para sumatoria de numeros impares
  double s2=0;          // para suma de numeros pares
  double x;             // valor de x

  for(int i=1;i<n;i++)
    {
      x=a+i*h;
      
      if(i%2==0)
	s2=s2+fun(x);
      
      else
	s1=s1+fun(x);
    }
  
  I=(h/3)*(s0+2*s2+4*s1);
  

  return I;
}


// --- --- ---





// --- FUNCION MAIN ---

int main()
{
  double a;
  double b;
  double n;

  cout<<"ingrese el menor valor del intervalo"<<endl;
  cin>>a;
  cout<<"ingrese el valor mas grande del intervalo"<<endl;
  cin>>b;
  cout<<"ingrese en cuantos numeros quiere dividir el intervalo"<<endl;
  cin>>n;
    
  
  cout<<setprecision(5)<<"\n -resultado con simpson  \n"<<simpson(a,b,n)<<endl;
  cout<<setprecision(5)<<"\n -resultado con trapecio \n"<<trapecio(a,b,n)<<endl;

  cout<<setprecision(5)<<"\n -la diferencia entre ambos metodos es de\n"<<abs(simpson(a,b,n)-trapecio(a,b,n))<<endl;
  return 0;
}
