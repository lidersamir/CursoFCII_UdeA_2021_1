# include <iostream>
# include <iomanip>
using namespace std;


//suma entre el largo y el ancho
float suma(float l, float a){return l+a;}

//multiplicacion entre el largo y el ancho
float multiplicacion(float l, float a){return l*a;}

//perimetro del lago
float perimetro(float l,float a){return 2*suma(l,a);}

//volumen de la alberca
float volumen(float l,float a,float pprof){return multiplicacion(l,a)*pprof;}

//area de la superficie subterranea
float areasupsub(float l,float a, float pprof){return 2*suma(l,a)*pprof+multiplicacion(l,a);} 



int main()
{
  float largo, ancho;
  float promprofu; //promedio de profundidad

  //condiciones iniciales para la tabla
  largo=25;
  ancho=10;
  promprofu=5;
  
  
  // imprime los encabezados de la tabla
  cout<<"\n";
  cout<<"Largo |"<<setw(9)<<"Ancho |"
      <<setw(12)<<" Profundidad |"
      <<setw(12)<<"Perimetro |"<<setw(12)<<"Volumen  |"
      <<setw(12)<<" Area de superficie subterranea |"<<"\n"<<endl;

  
  for(int i=1;i<=4;i++)
    {
      cout<<fixed<<setprecision(2)<<largo
	  <<setw(9)<<ancho<<setw(11)<<promprofu
	  <<setw(13)<<perimetro(largo,ancho)
	  <<setw(13)<<volumen(largo,ancho,promprofu)
	  <<setw(12)<<areasupsub(largo,ancho,promprofu)<<endl;

      
      promprofu=promprofu+0.5;
      
      
      if(largo==30 && ancho==12 && promprofu==6.5)
	{
	  cout<<fixed<<setprecision(2)<<largo
	      <<setw(9)<<ancho<<setw(11)<<promprofu
	      <<setw(13)<<perimetro(largo,ancho)
	      <<setw(13)<<volumen(largo,ancho,promprofu)
	      <<setw(12)<<areasupsub(largo,ancho,promprofu)<<"\n"<<endl;
	  ;break;
	}

      
      if(i==4){largo=30;ancho=12;promprofu=5; i=1;}
    }
  
  return 0;
}
