//DESARROLLO PUNTO#1 DEL PRIMER EXAMEN

//Implementacion de la clase

#include <iostream>
#include <cmath>


#include "punto1.h" //llamamos el archivo .h que contiene nuestra clase COMPLEJO 

using namespace std;



COMPLEJO::COMPLEJO(double Re, double Im) //Se inicializan las variable mediante el constructor
{
	SetValues(Re, Im);
}

void COMPLEJO::SetValues(double Re, double Im) //Se establecen la parte real e imaginaria del complejo
{
	RePart = Re;
	ImPart = Im;
}


// Estructura de un numero complejo X = Real + i*Imaginaria con i = sqrt(-1)

double COMPLEJO::GetRePart() // Se asigna la parte Real de la esturctura
{
	return RePart;
}

double COMPLEJO::GetImPart() // Se asigna la parte Imaginaria de la estructura 
{
	return ImPart;
}

// Operaciones de suma y resta en numeros complejo X + Y = (ReX + iImX) +- (ReY + iImY) = (ReX +- ReY) + i(ImX +- ImY)

void COMPLEJO::ComplexSum(double ReX, double ImX, double ReY, double ImY)
{
	double ReSum = ReX + ReY; //parte real de la suma
	double ImSum = ImX + ImY; //Parte imaginaria de la suma
	
	if(ImSum < 0)
	{
		cout <<"Resultado: Z = " << ReSum << " + (" << ImSum <<")i"<<endl;
	}
	else
	{
		cout <<"Resultado: Z = " <<ReSum << " + " << ImSum <<"i"<<endl;
	}
}  

void COMPLEJO::ComplexRes(double ReX, double ImX, double ReY, double ImY)
{
	double ReRes = ReX - ReY; //parte real de la resta
	double ImRes = ImX - ImY; //Parte imaginaria de la resta
	
	if(ImRes < 0)
	{
		cout << "Resultado: Z = " <<ReRes << " + (" << ImRes <<")i"<<endl;
	}
	else
	{
		cout <<"Resultado: Z = " <<ReRes << " + " << ImRes <<"i"<<endl;
	}
}

// Modulo de un numero complejo
double COMPLEJO::ComplexMod()
{
	return sqrt(GetRePart()*GetRePart() + GetImPart()*GetImPart());
}

// Conjugado de un numero complejo
void COMPLEJO::Conjugate()
{
	if(ImPart < 0)
	{
		cout << GetRePart() << " - (" << GetImPart() <<")i"<<endl;
	}
	else
	{
		cout << GetRePart() << " - " << GetImPart() <<"i"<<endl;
	}
}

// Mostrar en pantalla

void COMPLEJO::PrintScream() 
{
	if (GetImPart() < 0)
	{
		cout << "Complejo: Z = " << GetRePart() << " + (" << GetImPart() << ")i" << endl;
	}
	else
	{
		cout << "Complejo: Z = " << GetRePart() << " + " << GetImPart() << "i" << endl;
	}
	
}

