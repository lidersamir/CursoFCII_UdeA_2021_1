// Este programa calcula la serie de Taylor para el seno usando
// clases y POO

//Creamos nuestro prototipo de clase

# include <iostream>
# include <math.h>
using namespace std;


class SenoTaylor{
private:
  int n;
  float x;
  int i;
public:
  SenoTaylor(int, float);  // Seno recibira el entero n y el argumento x flotante
  int Factorial(int);
  float AproxSeno();
  void MuestraValor();
};
