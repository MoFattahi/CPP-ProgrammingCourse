#include <iostream>
using namespace std;


int main()
{
    int n, r=0, sum=0;

    cout << "Enter a number: ";
    cin >> n;

    while(n!=0)
    {
        if (n < 0)
        {
            n = abs(n);
            sum+= n%10;
            r++;
            n/=10;
        }
        sum+=n%10;
        r++;
        n/=10;
    }

    cout << "\nThis number has " << r << " digits.\n"
         << "The sum of it's digits is " << sum << ".\n";
}
