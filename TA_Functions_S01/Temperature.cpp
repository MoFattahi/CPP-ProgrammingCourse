/*
Write 3 functions named Celsius, Fahrenheit and Kelvin. Each function accepts an argument which is a temperature in scale as it’s name then returns this temperature in two other scales mentioned. Then call these functions in a loop and show the outputs for (0, 1, 2, 3, 4, 5) as inputs.
*/

#include <iostream>
using namespace std;

void Celsius(double C)
{
    // Kelvin
    double K = C + 273.15;

    // Fahrenheit
    double F = (C * (9.0 / 5)) + 32;

    cout << "Input: " << C << " C\n"
         << "Outputs:\n"
         << K << " k\n"
         << F << " F\n\n";
}

void Kelvin(double K)
{
    // Celsius
    double C = K - 273.15;

    // Fahrenheit
    double F = ((K - 273.15) * (9.0 / 5)) + 32;

    cout << "Input: " << K << " K\n"
         << "Outputs:\n"
         << C << " C\n"
         << F << " F\n\n";
}

void Fahrenheit(double F)
{
    // Celsius
    double C = (F - 32) * (5.0 / 9);

    // Kelvin
    double K = ((F - 32) * (5.0 / 9)) + 273.15;

    cout << "Input: " << F << " F\n"
         << "Outputs:\n"
         << K << " k\n"
         << C << " C\n\n";
}

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << "\nIteration " << i + 1 << " :\n"
             << endl;
        Celsius(i);
        Kelvin(i);
        Fahrenheit(i);
        cout << "-------------------------------------------" << endl;
    }
}