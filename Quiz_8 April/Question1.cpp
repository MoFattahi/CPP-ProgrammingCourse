#include <iostream>
using namespace std;


int main()
{
    int a;
    cout << "Enter a number: ";

    Input:
    cin >> a;

    if(a>9)
    {
        cout << "Input out of range.\n";

        goto Input;
    }

    if(a%2==0)
        a++;

    for(int i=0; i<=a/2; i++)
    {
        for(int j=a/2; j>i; j--)
            cout << " ";

        for(int j=0; j<2*i+1; j++)
            cout << 2*i+1;

        cout << endl;
    }

    for(int i=0; i<a/2; i++)
    {
        for(int j=0; j<=i; j++)
            cout << " ";

        for(int j=a; j>2*i+2; j--)
            cout << a-2*i-2;

        cout << endl;
    }
}
