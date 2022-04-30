/*
                                        ** Present Value **
Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw interest for the next 10 years. At the end of 10 years you would like to have $10,000 in the account. How much do you need to deposit today to
Programming Challenges 369 make that happen? You can use the following formula, which is known as the present
value formula, to find out:

                                        P = F / ((1 + r)^n)

The terms in the formula are as follows:
• P is the present value, or the amount that you need to deposit today.
• F is the future value that you want in the account. (In this case, F is $10,000.)
• r is the annual interest rate.
• n is the number of years that you plan to let the money sit in the account.
Write a program that has a function named "presentValue" that performs this calculation. The function should accept the future value, annual interest rate, and number of years as arguments. It should return the present value, which is the amount that you need to deposit today. Demonstrate the function in a program that lets the user experiment with different values for the formula’s terms.
*/

#include <iostream>
using namespace std;

double presentValue(double , double , double);

int main()
{
    double fvalue, int_rate , num_years;

    while(true)
    {
        // Get the desired data from the user
        cout << "Enter the future value that you want in the account(USD): ";
        cin >> fvalue;
        cout << "Enter the annual interest rate(%): ";
        cin >> int_rate;
        cout << "Enter the number of years that you plan to let the money sit in the account: ";
        cin >> num_years;

        // Determine the present value
        cout << "The amount that you need to deposit today: $" << presentValue(fvalue , int_rate , num_years) << endl;

        cout << "Do you want to continue?[y/n]: ";
        char decision;
        cin >> decision;

        if(decision == 'y')
        continue;
        
        else
        break;
        
    }
}

double presentValue(double futureValue , double interestRate , double numYears)
{
    double presentValue = futureValue / (pow((1 + (interestRate / 100)) , numYears));

    return presentValue;
}