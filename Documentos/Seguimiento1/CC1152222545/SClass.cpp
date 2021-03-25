#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
#include "Sclass.h"

void SFclass::Setvar(float a, int n)
  {
    N=n;
    x=a;
  }
float SFclass::F(unsigned int j)
  {
    float fac=1;
    for(int i=1; i<j+1; i++)
    {
      fac*=i;
    }
    return fac;
  }
float SFclass::sin()
  {
    float sin=x;
      for(int j=1; j<N+1;j++)
      {
	      float i=2*j+1;
      	sin=sin+pow(-1,j)*pow(x,i)/F(i);
      }
      return sin; 
   }
void SFclass::displayS()
  {
    printf("El valor de sen(%.3f) con %d terminos es: %.3f ",x, N, sin());
  }