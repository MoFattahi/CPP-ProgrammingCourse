#include <iostream>
#include <cmath> // It allowsus to use math functions.
using namespace std;

// int main()  //main function
// {

//     int directions = 2;
//     int trees = 20;

//     cout << "This is the C++ tutorial.\n";
//     cout << "\n";
//     cout << "The number of directions are: " << directions << "\n";
//     // Alternative for "/n" is endl
//     cout  << trees << endl;
//     return 0; // This is optial, We can remove it. It means everything works well.
// }

//------------------------------------------------------------

// int main()
// {
//     // user input
//     int participant; // declaration
//     cout << "Enter the number of participants you saw: ";
//     cin >> participant;
//     cout << "\nThere are " << participant << " participants in the room." << endl;

// /*
// using multi-line comments
// */

// }

//------------------------------------------------------------

// int main()
// {
//     // calling a function
//     double num = pow(4 , 3); // Power function

//     double rate;
//     cout << "Enter the rate: ";
//     cin >> rate;

//     double num_new = num * rate;

//     cout << "\nThe final cost is: " << num_new << endl;
//     cout << "\nThe previous cost was: " << pow(5,2) << endl;

// }

//------------------------------------------------------------

// declaring a function
// double My_Function(int , int , double);

// defining + declaring a customized function:
double My_Function(int x, int y, double rate)
{
    double final_result = (x + y) * rate;
    return final_result;
}

// int main()
// {
//     int x , y;
//     double rate;

//     cout << "Enter the value of x: ";
//     cin >> x;

//     cout << "Enter the value of y: ";
//     cin >> y;

//     cout << "Enter the value of rate: ";
//     cin >> rate;

//     cout << My_Function(x , y , rate) << endl;

// }

//------------------------------------------------------------

// defining the void function.
// It does not return values; but it does a specific task.

void print_stuff(int x, int y, double rate)
{
    double cost = My_Function(x, y, rate);
    cout << "The final cost would be " << cost << ".\n";
}

int main()
{
    int x;
    int y;
    double rate;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of rate: ";
    cin >> rate;

    print_stuff(x, y, rate);
}
