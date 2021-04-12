#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include "Tarea_2.h"

using namespace std;

int main(){

	int terms;
	float angle;
	
	cout<<"Digite el número de términos que desea incluir en la serie (procure que este no sea mucho mayor que 10):  "<<endl;
	cin>>terms;
	cout<<"Ahora digite el ángulo en grados del que desea conocer el seno: "<<endl;
	cin>>angle;
	
	Seno S1(angle, terms);
	S1.ShowSine(S1.sine());
	

	return 0;
}
