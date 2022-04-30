#include <iostream>
using namespace std;

int main()
{
    int a = 5 , b = 6 , c = -4 , d;
    if(++a <= b--)
    {
        if(a++ >= b++)
            d = c++;

        else
        {
            d = a;
        }
    }
    else
    {
        d = a;
    }
    cout <<  "a=" << a << "\nb=" << b << "\nd=" << d << "\nc=" << c << endl;
}


