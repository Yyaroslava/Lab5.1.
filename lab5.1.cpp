#include <iostream> 
#include <cmath> 

using namespace std;

double f(const double a, const double b, const double c);  // прототип 
double c(double t, double s); // прототип

int main() 
{
    double s, t;
   
        cout << "s = "; cin >> s; 
        cout << "t = "; cin >> t;

        double cc = c(t,s);

    cout << "c = " << cc << endl;

    return 0;
}

double c(double t, double s) 

{
    double gg = f(t, s, 2) + f(1, s + t, t - s) / (1 + pow(f(1, 1, t * t + s * s), 2));
    gg = round(gg * 100000) / 100000;
    return gg;
}
 
double f(const double a, const double b, const double c)  // визначення 
{ 
    return (a+b+c)/((sin(a*b)*sin(a*b)+c*c)); 
} 