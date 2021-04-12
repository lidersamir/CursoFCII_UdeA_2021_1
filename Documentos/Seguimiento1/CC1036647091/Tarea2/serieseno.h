#include <iostream>
#include<math.h> //se llama libreria math.h para usar la funcion powf()


using namespace std; //espacio de nombres ara simplificar notacion



class SerieSeno //definicion de clase
{

public: //metodos de la clase persona, accion que en este caso es calcular el seno
  SerieSeno(int,float); //constructor de la clase
  void calculaseno();
  void mostrarMensaje();
  void calculafactorial();
private: //atributos de la clase 
  int N, i, factorial; //numeros de terminos que se usan en la serie
  float x, sum; //valor de x donde se calcula el seno
};

