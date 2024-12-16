#include <iostream>
#include <cmath>
using namespace std;


double f(double x) 
{
    return 0.25 * pow(x, 3) + x - 1.2502;
}

double f1(double x) 
{
    return 1.5 * pow(x, 2) + 1;
}

double f2(double x) 
{
    return 3 * x;
}

int main()
{
    double a = 0, b = 2, x0, x, e = 0.00001;
    
    if (f(a) * f2(a) > 0)
    {
        x0 = a;
    }
    if (f(b) * f2(b) > 0)
    {
        x0 = b;
    }


    x = x0 - f(x0) / f1(x0);
    while (abs(x - x0) > e)
    {
        x0 = x;
        x = x0 - f(x0) / f1(x0);
    }

    cout << x;
    return 0;
}
