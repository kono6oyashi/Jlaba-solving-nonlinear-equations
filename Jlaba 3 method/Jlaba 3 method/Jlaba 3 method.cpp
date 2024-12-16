#include <iostream>
#include <cmath>
using namespace std;


double fi(double x)
{
    return 1.2502 - 0.25 * pow(x, 3);
}

int main()
{
    double x0 = 1.0, e = 0.00001, x = fi(x0);

    while (abs(x - x0) > e)
    {
        x0 = x;
        x = fi(x0);
    }
    cout << x;
    return 0;
}
