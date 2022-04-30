/* Write a program to determine whether a number entered by the user is prime or not. if the number is prime, print the number, otherwise, print all of the prime numbers before that number.
*/

#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Please enter a positive integer: ";
    cin >> value;

    bool status_1 = true;
    
    for (int l = 2; status_1 && l <= value / 2; l++)
    {
        status_1 = (value % l != 0);
    }

    if (status_1)
    {
        cout << value << " is prime." << endl;
    }

    if (!status_1)
    {
        for (int i = 2; i < value; i++)
        {
            bool status_2 = true;

            for (int k = 2; status_2 && k <= i / 2; k++)
            {
                status_2 = (i % k != 0);
            }

            if (status_2)
            {
                cout << i << endl;
            }
        }
    }
}
