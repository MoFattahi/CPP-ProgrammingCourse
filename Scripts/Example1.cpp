#include <iostream>
using namespace std;

// maghloobe adad
int main()
{
    int n, r;

    cout << "Enter a number: ";
    cin >> n;

    while(n>0)
    {
        r = n%10;
        n /= 10;
        cout << r;
    }

    cout << endl;

}
