#include<iostream>
#include<stdlib.h>
#include"Complejo.h"

using namespace std;

int main(){
	
	double a1,b1,a2,b2;//Se definen las variables locales de la función main. En ellas se guardarán los valores ingresados por el usuario
	Complejo c1,c2,c3,c4,c5,c6; //Se definen los objetos de la clase. 
	
	cout<<"Ingrese la parte real e imaginaria del primer número complejo en su respectivo orden: "<<endl;
	cin>>a1;
	cin>>b1;
	cout<<"Ingrese la parte real e imaginaria del segundo número complejo en su respectivo orden: "<<endl;
	cin>>a2;
	cin>>b2;
	
	c1.AsignarDatos(a1,b1);//Crea un objeto de la clase
	c1.ObtenerParteReal();
	c2.AsignarDatos(a2,b2);//Crea un objeto de la clase
	c2.ObtenerParteImaginaria();
	c3.Suma(c1,c2); //Efectúa la suma entre los objetos c1 y c2, y la guarda en el objeto c3
	c3.MostrarComplejo(); //Muestra el complejo c3 en la forma a+bi
	c4.Resta(c1,c2);//Efectúa la resta entre los objetos c1 y c2, y la guarda en el objeto c4
	c4.MostrarComplejo(); //Muestra el complejo c4 en la forma a+bi
	c5.Multiplicacion(c1,c2);//Efectúa la multiplicación entre los objetos c1 y c2, y la guarda en el objeto c5
	c5.MostrarComplejo();//Muestra el complejo c5 en la forma a+bi
	
	
	


	return 0;
}
