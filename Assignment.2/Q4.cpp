// Days off

#include <iostream>
using namespace std;

double numsEmployee()
{
    double numsOfEmployee;
    while(true)
    {
    cout << "Enter the number of employees in the company: ";
    cin >> numsOfEmployee;

    if (numsOfEmployee <1)
    {
        cout << "Incorrect Input\nTry Again." << endl;
        continue;
    }
    else 
    break;
    }
    return numsOfEmployee;
}
//------------------------------------------------------------------------------------------------------
double totalDaysOff(double numsOfEmployee)
{
    double sumDays;
    double numDays;
    cout << "Enter the number of days each employee missed during the past year: " << endl;
    for (int i = 0; i< numsOfEmployee; i++)
    {
        while(true)
        {
            cin >> numDays;
            if (numDays < 0)
            {
                cout << "The number of days off must be a positive number.\nTry again." << endl;
                i--;
                continue;
            }
            else
            break;
        }
        sumDays += numDays;
    }
    return sumDays;
}
//------------------------------------------------------------------------------------------------------

double averageDaysOff(double numsOfEmployee , double sumDays)
{
    double averageDays = sumDays / numsOfEmployee;
    return averageDays;
}
//------------------------------------------------------------------------------------------------------


int main()
{
    //Get the number of employees in the company
    double numsEmployees = numsEmployee();

    // Get the total number of days off
    double numsDaysOff = totalDaysOff(numsEmployees);

    //Average days off
    cout << "The average number of days off: " << averageDaysOff(numsEmployees , numsDaysOff) << " days" << endl;
}

