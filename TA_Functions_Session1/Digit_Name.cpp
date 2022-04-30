/* 
Write a function named "digit_name" that takes an integer argument in the range from 1 to 9 ,
inclusive, and prints the English name for that integer on the computer screen. The function should not return a value. If the argument is not in the required range, then the function
should print "digit error" without the quotation marks but followed by the newline character.
*/

#include <iostream>
using namespace std;

void digit_name(int);

int main()
{
    int value;
    while(value)
    {
        cout << "Enter the value (enter -1 to quite): ";
        cin >> value;

        if (value == -1)
        break;

        else
        digit_name(value);
        continue;
    }
}


void digit_name(int num)
{
    switch(num)
    {
           case 1:
        {
            cout << "one" << endl;
            break;
        }
        case 2:
        {
            cout << "two" << endl;
            break;
        }
        case 3:
        {
            cout << "three" << endl;
            break;
        }
        case 4:
        {
            cout << "four" << endl;
            break;
        }
        case 5:
        {
            cout << "five" << endl;
            break;
        }
        case 6:
        {
            cout << "six" << endl;
            break;
        }
        case 7:
        {
            cout << "seven" << endl;
            break;
        }
        case 8:
        {
            cout << "eight" << endl;
            break;
        }
        case 9:
        {
            cout << "nine" << endl;
            break;
        }
        default:
        {
        cout << "digit error" << endl;
        }
    }
    
}

