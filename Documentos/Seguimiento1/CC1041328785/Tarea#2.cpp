
/*solution task number two, Sin(x, n), with POO methods
the next script give the sine for moderate inputs of an real x whit n 
terms in the power series, for large values of x, we need add more terms in 
the power serie, and the method lose its precision*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class SenCalcular //STRUCTURE CLASS
{
	public:
		SenCalcular(double, double);
		void SetValues(double, double);
		double Factorial(double);
		double Sen();
		void ShowResults();
		
	
	private:
		double n;
		double x;
		
};

// CLASS IMPLEMENTATION
SenCalcular::SenCalcular(double x, double n)//constructor
{
	SetValues(x, n);
}

void SenCalcular::SetValues(double X, double N)
{
	x = X;
	n = N; //only integer input 
	while(n < 0) //control of negative values 
	{
		cout <<"Invalid value for N, please input a positive integer number" << endl;
		cin >> n;
	}	
	
}

double SenCalcular::Factorial(double number)
{
	double fact = 1;
	if (number < 0 ) 
	{
		fact = 0;
	}
	else
	{
		for (double i = 1; i <= number; i++)
		{
			fact = fact*i;
		}
		
	}
	
	return fact;		
}

double SenCalcular::Sen()
{
	double s = 0;
	for (double j = 0; j <= n; j++)
	{
		s = s + (pow(-1, j)*pow(x, 2*j + 1))/Factorial(2*j + 1);
	}
	
	return s;
}

void SenCalcular::ShowResults()
{
	double senx = Sen();
	 
	cout <<  "The funtion Sine valued in " << x << " with " << n << " terms in the power series" <<endl;
	cout << " is " << senx <<endl;
}

//USER ENVIRONMENT
int main()
{
	
	double terms;
	double variable;
	
	cout << "Wellcome to SenCacular" <<endl;
	cout << "Please input the argument value for the funtion: X" << endl;
	cin >> variable;
	cout << "Now set the number of terms of powers series: N" <<endl;
	cin >> terms;
	cout << "\n";
	

	SenCalcular a(variable, terms);
	a.ShowResults();

	return 0;
}
