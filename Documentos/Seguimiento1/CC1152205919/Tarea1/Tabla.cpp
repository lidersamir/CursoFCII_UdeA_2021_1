#include <iostream>
#include <iomanip>
using namespace std;

float Perimetro (int); //define las variables
float Volumen (int, float);
float Area (int, int, float);

int main()  //funcion principal
{
  int largo = 25;  //valores iniciales de las variables largo y ancho 
  int ancho = 10;

  cout << "--------------------------------------------------------------------------------------\n"
       << "| Largo | Ancho | Profundidad | Perímetro | Volumen | Área de superficie subterranea |" << endl   //encabezado de la tabla
       << "--------------------------------------------------------------------------------------\n";

  for (int i=0; i<2 ; i++){  //primer ciclo
      float profundo = 5.0;  //inicializa el valor de profundo
      for (int j=0; j<4 ; j++){  //segundo ciclo
          int a = largo + ancho; //calculo de a y b
          int b = largo * ancho;

          cout << "|" << setw(7) << largo << "|" << setw(7) << ancho << "|" << setw(13) << fixed << setprecision(1) << profundo 
               << "|" <<  setw(11) << fixed << setprecision(1) << Perimetro(a) << "|" <<  setw(9) << fixed << setprecision(1) << Volumen(b,profundo) << "|" << setw(32) << fixed << setprecision(1) << Area(a,b,profundo) << "|" << endl;  //Llena la tabla con los valores calculados
          profundo = profundo + 0.5;  //suma 0.5 al valor inicial de profundo
  }
      largo = largo + 5;  //nuevos valores de largo y ancho para la siguiente iteración
      ancho = ancho + 2;
}
  cout << "---------------------------------------------------------------------------------------\n";

  return 0;
}


//funciones 
float Perimetro (int x) //funcion que calcula el perimetro
{
  float Per = 2 * x;
  return Per;
}

float Volumen (int x, float y) //funcion que calcula el volumen
{
  float Vol = x * y ;
  return Vol;
}

float Area (int x, int y, float z) // funcion que calcula el area de la superficie subterranea
{
  float area = 2 * x * z + y;
  return area;
}
