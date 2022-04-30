/*
                                             *** Payroll ***
Write a program that uses the following arrays:

• empId: an array of seven long integers to hold employee identification numbers. The array should be initialized with the following numbers:
5658845 4520125 7895122 8777541 8451277 1302850 7580489

• hours: an array of seven integers to hold the number of hours worked by each employee
• payRate: an array of seven doubles to hold each employee’s hourly pay rate
• wages: an array of seven doubles to hold each employee’s gross wages

The program should relate the data in each array through the subscripts. For example, the number in element 0 of the hours array should be the number of hours worked by the employee whose identification number is stored in element 0 of the empId array.

That same employee’s pay rate should be stored in element 0 of the payRate array.
The program should display each employee number and ask the user to enter that employee’s hours and pay rate. It should then calculate the gross wages for that employee (hours times pay rate) and store them in the wages array. After the data has been entered for all the employees, the program should display each employee’s iden- tification number and gross wages.

Input Validation: Do not accept negative values for hours or numbers less than 15.00 for pay rate.
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int empID[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    
    double hours[7];
    double payRate[7];
    double wages[7];

    for (int i=0; i<7; i++)
    {
        cout << "Enter the hours for employee " << i+1 << " : ";
        cin >> hours[i];
        if (hours[i] < 0)
        {
            cout << "The value for the hours must be positive.\nTry again." << endl;
            i--;
            continue;
        }

        cout << "Enter the pay rate for employee " << i+1 << " : ";
        cin >> payRate[i];
        if (payRate[i] < 15.0)
        {
            cout << "The value for the pay rate must be greater than 15.0/hr.\nTry again." << endl;
            i--;
            continue;
        }

        wages[i] = hours[i] * payRate[i];
    }

    
    for (int k=0; k<7; k++)
    {
        cout << setprecision(2);
        cout << setw(7) << "Employee ID: " << empID[k] << "    Wage: " << wages[k] << endl;
    }
}
    