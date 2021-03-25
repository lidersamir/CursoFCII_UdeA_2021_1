#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

class Seno{

	private:
		float x;
		int N;
		
	public:
		Seno(float, int);
		int factorial(int n);
		float sine();
		void ShowSine(float seno);
};
