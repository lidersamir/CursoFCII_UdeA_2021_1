#include <string>

class Complejo{ //Definición de la clase
	
	public:
	Complejo( double, double ); //Constructor
	
	Complejo Suma(Complejo C); //Para calcular la suma, el resultado es también miembro de la clase
	Complejo Resta(Complejo C); //Para calcular la resta, el resultado es también miembro de la clase
	
	double obtenerParteReal(); //Para extraer la parte real
	double obtenerParteImaginaria(); //Para extraer la parte imaginaria
	double Norma(); //Sí se pueden definir más operaciones, éste es un ejemplo
	void Imprimir(); //Para imprimir el resultado
	
	private:
	double parteReal; //Variable para la parte real
	double parteImaginaria; //Variable para la parte imaginaria
	void asignarDatos(double, double); //Para asignar los valores
	};    
