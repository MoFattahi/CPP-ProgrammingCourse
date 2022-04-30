#include <iostream>

using namespace std;

int main()
{
    int value;
    char ch;

    cin >> ch;

    if (ch == 'A')
    {
        value = 10;
    }

    else if (ch == 'P')
    {
        cin >> value;
    }

    else if (ch == 'T')
    {
        value = ch;
    }

    else if (ch == 'V')
    {
        value = ch + 1000;
    }

    else
    {
        value = 50;
    }

    cout << value << endl;
}
