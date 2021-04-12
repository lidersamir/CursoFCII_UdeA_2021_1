#include <iostream>
#include <vector>
using namespace std;


class complejo
{
public:
    vector<double> assign(double x, double y);
    double get_im(vector<double>);
    double get_real(vector<double>);
    vector<double> sum(vector<double> x, vector<double> y);
    vector<double> rest(vector<double> x, vector<double> y);
    void display_com(vector<double>);
    double norm(vector<double>);
    vector<double> multy(vector<double> x, vector<double> y);
    vector<double> div(vector<double> x, vector<double> y);
    vector<double> conj(vector<double>);

private: 
    double im;
    double re;

};