//DESARROLLO PUNTO#1 DEL PRIMER EXAMEN

//Ambiente de usuario

#include <iostream>
#include <cmath>

#include "punto1.h"

using namespace std;

int main()
{
	cout <<"-------------------------------------------------------------------------"<<endl;
	cout <<"-------------------------------------------------------------------------"<<endl;
	
	cout <<"El siguiente programa realiza operaciones sobre numeros complejos" <<endl;
	cout <<"tales como suma, resta, y en respuesta positiva al item 1-d) del parcial," <<endl;
	cout <<"modulo (norma) y conjugado de un numero complejo" <<endl;
	
	cout <<"-------------------------------------------------------------------------"<<endl;
	cout <<"-------------------------------------------------------------------------"<<endl;
	
	cout <<"Ingrese la parte real e imaginaria de los numeros complejos Z1 y Z2" <<endl;
	cout <<"========================================================================="<<endl;
	cout<< "complejo Z1."<<endl;
	
	// define un numero complejo Z = ReZ + ImZ*i
	COMPLEJO Z;
	
	// define un numero complejo Z1 = ReZ1 + ImZ1*i
	double ReZ1;
	double ImZ1;
	
	// el usuario ingresa los valores pedidos
	cout << "Real:"<<endl;
	cin >> ReZ1;
	cout << "Imaginaria:"<<endl;
	cin >> ImZ1;
	
	COMPLEJO Z1(ReZ1, ImZ1);
	
	Z1.PrintScream();
	
	cout <<"-------------------------------"<<endl;
	
	cout <<"complejo Z2."<<endl;
	
	// define un numero complejo Z2 = ReZ2 + ImZ2*i
	double ReZ2;
	double ImZ2;
	
	// el usuario ingresa los valores pedidos
	cout << "Real: "<<endl;
	cin >> ReZ2;
	cout << "Imaginaria: "<<endl;
	cin >> ImZ2;
	
	COMPLEJO Z2(ReZ2, ImZ2);
	
	Z2.PrintScream();
	

	//Efectuamos la suma
	cout <<"\n================================"<<endl;
	cout <<"              SUMA              "<<endl;
	cout <<"================================"<<endl;
	
	Z1.PrintScream();
	cout << "              +  " <<endl;
	Z2.PrintScream();
	cout<< "--------------------------------" << endl;
	Z.ComplexSum(Z1.GetRePart(), Z1.GetImPart(), Z2.GetRePart(), Z2.GetImPart()); 
	
	//Efectuamos la resta
	cout <<"\n================================"<<endl;
	cout <<"             RESTA              "<<endl;
	cout <<"================================"<<endl;
	
	Z1.PrintScream();
	cout << "              -  " <<endl;
	Z2.PrintScream();
	cout<< "--------------------------------" << endl;
	Z.ComplexRes(Z1.GetRePart(), Z1.GetImPart(), Z2.GetRePart(), Z2.GetImPart());
	
	//Efectuamos la modulo(norma)
	cout <<"\n================================"<<endl;
	cout <<"             MODULO             "<<endl;
	cout <<"================================"<<endl;
	cout <<"Modulo de Z1 = "<< Z1.ComplexMod() <<endl;
	cout <<"Modulo de Z2 = "<< Z2.ComplexMod() <<endl;
	
	//Efectuamos la modulo(norma)
	cout <<"\n================================"<<endl;
	cout <<"            CONJUGADO           "<<endl;
	cout <<"================================"<<endl;
	cout <<"Conjugado de Z1 "<<endl;
	Z1.Conjugate();
	cout <<"\nConjugado de Z2 "<<endl;
	Z2.Conjugate();
	
	
	return 0;
}
