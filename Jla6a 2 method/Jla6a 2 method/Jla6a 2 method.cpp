#include <cmath>
#include <iostream>
using namespace std;


double f(double x)
{
    return 0.25 * pow(x, 3) + x - 1.2502;
}

int main()
{
    double a = 0, b = 2, e = 0.00001, s;
    if (f(a) * f(b) < 0)
    {
        while (abs(b - a) > e)
        {
            s = (a + b) / 2;
            if (f(a) * f(s) < 0)
            {
                b = s;
            }
            else
            {
                a = s;
            }
        }
        cout << s;
    }
    else
    {
        return 0;
    }
    return 0;
}
