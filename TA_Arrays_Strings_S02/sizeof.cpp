#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    short b = 5;
    long c = 5;
    long long d =5;
    double e =5;

    cout << sizeof(a) << endl
         << sizeof(b) << endl
         << sizeof(c) << endl
         << sizeof(d) << endl
         << sizeof(e) << endl
         << sizeof(25678) << "\n\n";

    int arr[] = {1,2,3};

    cout << sizeof(arr) << "\n\n";

    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n << endl;

}
