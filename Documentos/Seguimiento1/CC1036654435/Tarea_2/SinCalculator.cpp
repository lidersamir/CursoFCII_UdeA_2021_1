#include "SinCalculator.h"
#include <iostream>
#include<iomanip>

using namespace std;

SinCalculator::SinCalculator(float rad, int pre){
	x = rad;
	N = pre;
}

float SinCalculator::pot( float base, int exp ){
	int i=0;
	float a = base;
	
	
	while (i <= exp){

		if (i == 0){
			a = 1;
		}
		else {
			a = a*base;	
		}
		i++;
	}
	
	return a;
}


int SinCalculator::factorial( int facto ){
	int op=1;

	while(facto>1){
	op = op*facto;
	facto--;
	}

	return op;	
}


float SinCalculator::seno( float r, int p){
	float sum = 0;
	float res3= 0;
	
	for(int i=0; i <= p;i++){
		sum = sum + pot(-1,i)*( ( pot(r,2*i+1) )/( factorial(2*i+1) ) );
	}

	return sum;
}

void SinCalculator::respuesta(){
	
	float res = seno(x,N);
	cout << "El resultado del calculo es: " << res << endl;
}
