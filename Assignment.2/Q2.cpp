// Calculate the Greatest common divisor(GCD) of two integers taken from the user.

#include <iostream>
using namespace std;

int cal_GCD(int num1, int num2)
{
    // Determine the smaller number
    int min = (num1 < num2) ? num1 : num2;

    // 1 is the common divisor(factor) for all integers; so we initialies the gcd with 1.
    int gcd = 1;

    for (int i = 2; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            if (i > gcd)
            {
                gcd = i;
            }
        }
    }

    return gcd;
}

int main()
{
    cout << "Enter two integers: ";
    int val1, val2;
    cin >> val1 >> val2;

    cout << "GCD(" << val1 << " , " << val2 << ") = " << cal_GCD(val1, val2) << endl;

    // cout << "GCD(" << val1 << " , " << cal_GCD(val1, val2) << ") = " << cal_GCD(val1, cal_GCD(val1, val2)) << endl;
}

// ----------------------------------------------------------------------

// Find GCD using a recursive function.

// int rec_GCD(int num1, int num2)
// {
//     if (num2 == 0)
//     {
//         return num1;
//     }

//     else
//     {
//         return rec_GCD(num2, num1 % num2);
//     }
// }

// int main()
// {
//     cout << "Enter the numbers: " << endl;
//     int val1, val2;
//     cin >> val1 >> val2;

//     cout << "GCD(" << val1 << " , " << val2 << ") = " << rec_GCD(val1, val2) << endl;
// }

/* Recursion form would be more efficient and faster than the iterative form; however, the final results are the same. */
