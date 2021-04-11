//DESARROLLO PUNTO#1 DEL PRIMER EXAMEN

//Estructura de la clase COMPLEJO

#include <iostream>


using namespace std;

class COMPLEJO 
{
	public:
		COMPLEJO(double =0, double = 0); //contructor de la clase
		void SetValues(double, double);  //entrada de la parte real e imaginaria
		double GetRePart(); //se asigna la parte real 
		double GetImPart(); //se asigna la partr imaginaria
		void ComplexSum(double, double, double, double); 
		void ComplexRes(double, double, double, double);
		double ComplexMod();
		void Conjugate();
		void PrintScream();
		
	private:
		double RePart;
		double ImPart;
		
};

