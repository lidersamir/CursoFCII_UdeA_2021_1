#include<iostream>
#include<cstdlib>

using namespace std;


class Complejo{
	//Atributos de la clase.
	private:
	
		double ParteImaginaria;
		double ParteReal;
	
	//métodos de la clase.
	public:
	
		Complejo(); //Constructor
		void AsignarDatos(double, double); /*Esta función recibe los valores de la parte real e imaginaria de un número complejo, y asigna estos a los datos privados de la clase, respectivamente.*/ 
		
		void ObtenerParteImaginaria();
		void ObtenerParteReal();
		void MostrarComplejo();//Se utiliza para expresar el número complejo contenido en un objeto de la clase.
		void Suma(Complejo, Complejo);/* Recibe dos objetos de la clase y hace una suma entre ellos. La forma de realizar esta suma y la forma en la que se asigna esta a los datos privados se esclarece de mejor manera en Intermediate_complejo.cpp */
		
		void Resta(Complejo, Complejo);//Análogamente a la anterior función pero en lugar de la suma efectúa la resta.
		void Multiplicacion(Complejo, Complejo);//Análogamente a la functión anterior pero en lugar de la resta efectúa la multiplicación.
};
