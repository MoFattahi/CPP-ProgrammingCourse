#include <iostream>

using namespace std;

int main()
{
    int value;
    char ch;

    cin >> ch;

    if (ch == 'A')
    {
        cout << ch << endl;
        value = 10;
    }

    else if (ch == 'P' || ch == 'E')
    {
        cin >> value;
    }

    else if (ch == 'T')
    {
        cin >> ch;
        value = ch;
        cout << "value=" << value << ", ch=" << ch << endl;
    }

    else if (ch == 'C')
    {
        value = ch;
        cout << "value=" << value << ", ch=" << ch << endl;
    }

    else if (ch == 'V')
    {
        value = ch + 1000;
    }

    cout << value << endl;
}
