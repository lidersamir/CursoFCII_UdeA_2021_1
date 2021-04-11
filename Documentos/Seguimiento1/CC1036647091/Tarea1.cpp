#include<iostream> 
#include <iomanip> //libreria necesaria para el setw()
using namespace std; //evitar el uso del std en cada linea



int main(){
  int largo, ancho; //se definen variables de tipo entero 
  float perimetro, volumen, profundidad, area_sub;  //se definen variables de tipo float
  
  cout<<" \n Programa para la alberca \n"<<endl;

  //impresion de titulos
  
  cout<<"Largo"<< "|"<< setw(3) <<"Ancho"<<"|"<< setw(3) <<"Profundidad"<<"|"<< setw(3) <<"Perimetro"<< "|"<< setw(3) <<"Volumen"<<"|"<< setw(3) <<"Area superficial"<<"|" << setw(3) <<endl;

  //definen los valores a las variables para esta linea
  
  largo = 25;
  ancho = 10;
  profundidad = 5.0;

  //se realizan calculos necesarios
  
  perimetro = 2*(largo+ancho); 
  volumen = largo*ancho*profundidad;
  area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  //impresion de valores
  
  cout<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

  //definen los valores a las variables para esta linea
  
   largo = 25;
   ancho = 10;
   profundidad = 5.5;

   //se realizan calculos necesarios
   
  perimetro = 2*(largo+ancho);
  volumen = largo*ancho*profundidad;
  area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  cout<<setw(3)<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

  //definen los valores a las variables para esta linea
  
   largo = 25;
   ancho = 10;
   profundidad = 6.0;

   //se realizan calculos necesarios
   
  perimetro = 2*(largo+ancho);
  volumen = largo*ancho*profundidad;
  area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  //impresion de valores
  
  cout<<setw(3)<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

   //definen los valores a las variables para esta linea
  
   largo = 25;
   ancho = 10;
   profundidad = 6.5;

   //se realizan calculos necesarios
   
   perimetro = 2*(largo+ancho);
   volumen = largo*ancho*profundidad;
   area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  //impresion de valores
  
  cout<<setw(3)<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

 //definen los valores a las variables para esta linea
  
   largo = 30;
   ancho = 12;
   profundidad = 5.0;

   //se realizan calculos necesarios
   
   perimetro = 2*(largo+ancho);
   volumen = largo*ancho*profundidad;
   area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  //impresion de valores
  
  cout<<setw(3)<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

  //definen los valores a las variables para esta linea
  
   largo = 30;
   ancho = 12;
   profundidad = 5.5;

   //se realizan calculos necesarios
   
   perimetro = 2*(largo+ancho);
   volumen = largo*ancho*profundidad;
   area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  //impresion de valores
  
  cout<<setw(3)<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

 //definen los valores a las variables para esta linea
  
   largo = 30;
   ancho = 12;
   profundidad = 6.0;

   //se realizan calculos necesarios
   
   perimetro = 2*(largo+ancho);
   volumen = largo*ancho*profundidad;
   area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  //impresion de valores
  
  cout<<setw(3)<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

 //definen los valores a las variables para esta linea

   largo = 30;
   ancho = 12;
   profundidad = 6.5;

   //se realizan calculos necesarios
   
   perimetro = 2*(largo+ancho);
   volumen = largo*ancho*profundidad;
   area_sub = 2*(largo+ancho)*profundidad+largo*ancho;

  //impresion de valores
  
  cout<<setw(3)<< largo << setw(3)<< "|"<< setw(4) << ancho << setw(2)  <<  "|"<<  setw(8)  <<profundidad <<  setw(4)  << "|"<< setw(8) << perimetro <<  setw(2)  << "|"<< setw(6)  <<  volumen <<   setw(2)  << "|"<< setw(8) << area_sub <<  setw(9)  << "|"  <<endl;

 
  return 0;

}
