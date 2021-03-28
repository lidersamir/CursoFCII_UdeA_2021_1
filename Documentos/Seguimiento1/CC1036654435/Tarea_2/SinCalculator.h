#ifndef SINCALCULATOR_H
#define SINCALCULATOR_H

class SinCalculator
{
	public:
		SinCalculator(float,int);
		float pot(float, int);
		int factorial(int);
		float seno(float, int);
		void respuesta();
	
	private:
		float x;
		int N;
};

#endif
