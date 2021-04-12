#include<iostream>

using namespace std;

class intg_metds
{
    public:
        double trapezoidal(double f(double x ), int k, double init, double end );
        double simpson(double g(double x ), int k, double init, double end);
};