#include <iostream>
#include <cmath>

using namespace std;

// ---- FUNCION FACTORIAL ----

double factorial(float n)
{
  int c=n;
  
  if(n-c==0)
    {
      double f=1;
      for (int i=1;i<=n;i++)
	{
	  f=f*i;
	}
      return f;
    }
  
  else;
    {
      cout<<"el numero ingresado no se le puede calcular el factorial, el numero que usted ingreso es: ";
      return n;
      
    }
}

// ---- final funcion factorial ----


// ---- CLASE SENO ----

class Seno
{
 public:
    
  Seno(float X, float N)
  {
    setnumero(X,N);  //llama el constructor 
  }

  
  void setnumero(float X,int N)
  {
    numero=X; //numero al que se le va a calcular el seno
    
    precision=N; //precision para calcular
  }

  
  float getnumero()
  {
    return numero; //retorna el valor del numero
  }
  

  int getprecision()
  {
    return precision; //retorna el valor de la precision ingresado
  }


  
  double getseno() //funcion que nos calculara el seno del numero con precision n
  {
    float nn=numero; //variable local para el angulo

    // si da mas de una vuelta nos cambia el angulo
    if (numero>2*M_PI)
      {
      int nv=numero/(2*M_PI); //numero de vueltas
      nn=numero-nv*2*M_PI; //nos cambia el angulo por uno que se encuentra entre cero y dos pi
      }

    
    double s=0; //contador para el seno
    
    for(int i=1;i<=precision;i++)
      {
	int q=2*i-1; //generador numero impar
	s=s+pow(-1,i+1)*pow(nn,q)/factorial(q);
	
      }
    return s;
  }


  
 private:
  float numero; //numero al que se le va a calcular el factorial
  int precision; // numero al que se le va a calcular el factorial
  
};

// ---- final clase seno ----



int main()
{
  int p;
  int n;

  cout<<"ingrese el numero en radianes al que se le desea calcular el seno\n";
  cin>>n;
  cout<<"ingrese la precision con la que desea que se calcule su seno\n";
  cin>>p;
  cout<<"\nTENGA EN CUENTA QUE:\n";
  cout<<"\n- si no ingreso un numero entero en la precision, se calcula hasta la parte entera de su numero ademas si es negativo el resultado sera de cero.\n";
  cout<<"- si no ingreso su numero en radianes, es muy probable que el resultado se encuentre erroneo\n\n";
  
  
  Seno N(n,p);
  
  cout<<"el seno de "<<n<<" es "<<N.getseno()<<"\n";
  
  
  return 0;
}
