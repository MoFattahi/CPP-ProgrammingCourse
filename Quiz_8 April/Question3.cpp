#include <iostream>
#include <cmath>
// tests: 1,5,6 / 1,5,56
using namespace std;


int main()
{
    double a, b, c, delta, x1, x2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;



    delta = b*b - 4*a*c;
    if(delta < 0)
    {
        cout << "No real root." << endl;
    }
    else
    {
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        cout << "Roots of this equation are: " << x1 << " and " << x2 << endl;
    }
}
