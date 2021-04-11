#include <iostream>
#include <iomanip>
using namespace std;

int i;
float largo, ancho, volumen, perimetro, area, profundidad=5;

int main(){
  
  cout<<endl;
  cout<<"|"<<"largo "<<"|"<<"|"<<"ancho "<<"|"<<"|"<<"profundidad"<<"|"<<"perimetro"<<"|"<<"volumen"<<" |"<<"area superficie"<<"|"<<endl;
  for (i=1; i<=8; i++) {
    cout<<fixed<<setprecision(1);
      if (i<=4){
	
	largo=25;
	ancho=10;
	perimetro = 2*(largo+ancho);
	area = largo*ancho+2*largo*profundidad+2*ancho*profundidad;
	volumen = largo*ancho*profundidad;
	cout<<"|"<<setw(5)<<largo<<" |"<<"|"<<setw(5)<<ancho<<" |"<<"|"<<setw(7)<<profundidad<<"    |"
	    <<setw(7)<<perimetro<<"  |"<<setw(7)<<volumen<<" |"<<setw(10)<<area<<"     |"<<endl;
      profundidad=profundidad + 0.5;
    }
      if(i==5){
	profundidad=5.0;
      }
      if (i>4){
	ancho=12;
	largo=30;
	perimetro = 2*(largo+ancho);
	area = largo*ancho+2*largo*profundidad+2*ancho*profundidad;
	volumen = largo*ancho*profundidad;
	cout<<"|"<<setw(5)<<largo<<" |"<<"|"<<setw(5)<<ancho<<" |"<<"|"<<setw(7)<<profundidad<<"    |"
	    <<setw(7)<<perimetro<<"  |"<<setw(7)<<volumen<<" |"<<setw(10)<<area<<"     |"<<endl;
	profundidad=profundidad + 0.5;
    }
    
  };
  cout<<endl;
  return 0;
}
