#include <iostream>
#include <iomanip>

using namespace std;

class PerAreaVol
{
public:

  void setvar(float x,float y,float z)
  {
    l=x;
    a=y;
    p=z;
    la=l*a;  
    lpa=l+a;  
  }
  float per()
  {
    return P=2*lpa;
      }
  float vol()
  {
    return V=la*p;
      }
  float asup()
  {
    return  A=2*lpa*p+la;
      }
  void displayM()
  {
    cout<< fixed << setprecision(1)<<l<<"   "<<a <<"   "<<p<<"          "<< per()<<"       "<< vol()<<"   "  <<asup()<<"  "<<endl;
  }
private:
  float P, V, A;
  float l,a,p;
  float la, lpa;
};

int main()
{
  
  PerAreaVol myPAV;
  
  int Lon[2]={25,30};
  int Width[2]={10,12};
  float Deep[4]={5.0,5.5,6.0,6.5};
  cout << "Largo  "<<"Ancho  "<<"Profundidad  "<< "Perimetro  "<<"Volumen  "<<"Área Sup"<< endl;
  
  for (int j=0; j<2;j++)
    {
      for (int i=0; i<4;i++)
    {
      myPAV.setvar(Lon[j],Width[j],Deep[i]);
      myPAV.displayM();}
    }
  return 0;
}
