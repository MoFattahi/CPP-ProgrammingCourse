// Math Library

#include <iostream>
#include <math.h> //This library is used to access the predefined math funtions
using namespace std;

#define _USE_MATH_DEFINES // Use this to access the Pi value.
// #define PI 3.14159265     Alternative Method 


int main()
{
    double a = 30;
    double b = 1;

    cout << sin(a * M_PI / 180) << endl;
    cout << log10(10) << endl;
    cout << exp(4.7) << endl; //Exponential Function
    cout << pow(2,10) << endl; //Power Function
    cout << sqrt(2) << endl;
    cout << tan(a * M_PI / 180) << endl;
    cout << atan(b) * 180 / M_PI << endl;
    //asin()
    //acos()
    
    // csc function
    cout << "csc(" << a << ") = " << 1 / sin(a * M_PI / 180) << endl;

}


