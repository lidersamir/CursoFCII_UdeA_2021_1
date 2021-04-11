#include <iostream>
#include <cmath>
using namespace std;


class complejo
{
  
 public:

  // constructor
  
  complejo(double repart,double impart)
    {
      parteimaginaria=impart;
      partereal=repart;
    }

  
  // FUNCIONES

  
  double obtenerParteReal()
  {
    return partereal;
  }

  
  double obtenerParteImaginaria()
  {
    return parteimaginaria;
  }
  
  void suma(complejo a)
  {
    double prs;  // parte real de la suma
    double pis;  // parte imaginaria de la suma
    
    prs=partereal+a.obtenerParteReal();
    pis=parteimaginaria+a.obtenerParteImaginaria();

    cout<<"\nSUMA"<<endl;

    // Intento de imprimir lindo el resultado de la suma
    
    cout<<"("<<partereal<<")+("<<parteimaginaria<<"i)  +  ("
	<<a.obtenerParteReal()<<")+("<<a.obtenerParteImaginaria()<<"i)  =  ("
	<<prs<<")+("<<pis<<"i)\n"<<endl;
    
  }

  void resta(complejo a)
  {
    double prs;  // parte real de la resta
    double pis;  // parte imaginaria de la resta
    
    prs=partereal-a.obtenerParteReal();
    pis=parteimaginaria-a.obtenerParteImaginaria();

    cout<<"\nRESTA"<<endl;
    
    cout<<"("<<partereal<<")+("<<parteimaginaria<<"i)  -  ("
	<<a.obtenerParteReal()<<")+("<<a.obtenerParteImaginaria()<<"i)  =  ("
	<<prs<<")+("<<pis<<"i)"<<endl;
  }
  

  void imprimirNumero()
  {
    cout<<"\nel numero complejo en la forma a+bi es: ("<<partereal<<")+("<<parteimaginaria<<"i)"<<endl;
  }
  
  void norma()
  {
    double norma=sqrt( pow(parteimaginaria, 2) + pow(partereal, 2) );
    cout<<"\nla norma del numero complejo es: "<<norma<<endl;
  }
  
  
 private:
    
  double parteimaginaria;
  double partereal;
};
