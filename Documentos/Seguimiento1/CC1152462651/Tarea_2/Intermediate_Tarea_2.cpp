#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<iomanip>
#include "Tarea_2.h"

using namespace std;

Seno::Seno(float variable, int number_of_terms){
	x=variable;
	N=number_of_terms;
	
}

int Seno::factorial(int n){
	int fact=1;
	
	for(int k=1;k<=n;k++){
		fact=fact*k;
	}
	return fact;
}
float Seno::sine(){
	float seno=0;
	x=x*(M_PI/180);
	for(int i=0; i<N;i++){
		seno+=pow(-1,i)*pow(x,2*i+1)/factorial(2*i+1);
		
	}
	return seno;
}
void Seno::ShowSine(float seno){
	x=x*(180/M_PI);
	cout<<"El valor del seno de "<<x<<" radianes es: "<<setw(6)<<fixed<<setprecision(4)<<seno<<endl;
}

