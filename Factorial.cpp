#include <iostream>
using namespace std;

int main()
{
    long double factorial = 1.0;
    int number;
    
    while(number)
    {
        cout << "Enter the number: ";
        cin >> number;

        if (number < 0)
        {
            cout << "\nIncorrect input. Enter a positive integer." << endl;
            continue;
        }
        else 
        {
            for(int k = 1; k<= number ; k++)
            {
                factorial *= k;
            }
            cout << number << "! = " << factorial << endl;

            cout << "\nDo you want to continue?[y/n] ";
            char answer;
            cin >> answer;

            if (answer == 'y')
            {
                continue;
            }
            else
            {
                break;
            }
        }

    }

    











}