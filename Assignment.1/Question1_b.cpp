#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 6, c = 7, d;

    if (++a == b--)
    {
        if (a++ >= --c)
        {
            d = c + a++;
        }

        else
        {
            d = --a - c;
        }
    }
    else
    {
        d = --a - c;
    }

    cout << "a=" << a << "\nb=" << b << "\nd=" << d << "\nc=" << c << endl;
}
