#include <iostream>

class Complejo //definicion de la clase 
{

  	public: //metodos de la clase persona, accion que en este caso es calcular el seno
        Complejo(double =1 , double =1); //constructor de la clase
        //funciones pedidas
  	void asignarDatos(double, double);
  	double obtenerParteReal();
  	double obtenerParteImaginaria();
  
        Complejo Num(); //esta funcion guarda el numero complejo
        Complejo Sum(Complejo, Complejo); //esta funcion realiza la suma de los numeros complejos
        Complejo Res(Complejo, Complejo); //esta funcion realiza la resta de los numeros complejos
  	void Print(Complejo);  //esta funcion imprime el resultado
  
	private://atributos de la clase 
        double parteReal; //parte real del numero complejo que se suma o resta 
	double parteImaginaria; //parte imaginaria del numero complejo que se suma o resta 
	

};
  
  
