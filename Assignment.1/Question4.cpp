#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";

    Input:
    cin >> a;

    if(a>9 || a<0)
    {
        cout << "Input out of range.\n";

        goto Input;
    }

    for(int i=0; i<a; i++)
    {
        for(int j=a-1; j>i; j--)
            cout << " ";

        for(int j=0; j<=i; j++)
            cout << i+1;

        cout << endl;
    }

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<=i; j++)
            cout << " ";

        for(int j=a-1; j>i; j--)
            cout << a-i-1;

        cout << endl;
    }

}
