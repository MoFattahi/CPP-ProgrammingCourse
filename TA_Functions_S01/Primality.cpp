/*
Write an entire C++ program using fuctions that checks primality of each integer from 2 up to a value provided by the user.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num)
{
    bool status = true;
    double dec = num, root_num = sqrt(dec);

    for (int i = 2; status && i <= root_num; i++)
    {
        status = (num % i != 0);
    }

    return status;
}



int main()
{
    int val;
    cout << "Enter the number: ";
    cin >> val;

    for (int n = 2; n <= val; n++)
    {
        if (is_prime(n))
        {
            if (!is_prime(val))
            {
                if (n < val)
                {
                    cout << n << endl;
                }
            }
        }
    }
    if (is_prime(val))
    {
        cout << val << "is prime." << endl;
    }
}