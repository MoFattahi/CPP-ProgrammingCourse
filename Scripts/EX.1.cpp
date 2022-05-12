#include <iostream>
// using namespace std; //instead of this line of the code, we can write std:: before each of the standard name.

// int main() {
//     std:: cout << "Hello";
//     return 0;
// }

// Both std::endl and \n have the same functionality.
// int main()
// {
//     std::cout << "Hi All, This is Mohammad.\n";
//     std::cout << "This is my first code.";
//     std::cout << "Hope you enjoy it." << std::endl;
//     return 0;
// }

/* If you want to write multi-lines comments, 
you should write it in this way */

// Variables : type variable = value

int main()
{
    // integer
    int a = 19;
    cout << a;
    cout << "\n";

    // Float
    double b = 20.2;
    cout << b;
    cout << "\n";

    // String
    string c = "Mohammad";
    cout << c;
    cout << "\n";

    double number;
    number = a + b;
    cout << number;
    cout << "\n";

    int value = 30;
    value = 35;
    cout << value;
    cout << "\n";

    char letter = 'K';
    cout << letter;
    cout << "\n";

    bool valid = true; // if it is true, the output will be 1, otherwise, it will be 0.
    cout << valid;
    cout << "\n";

    int price = 7000;
    cout << "The final price would be $" << price << " after tax.\n"
         << "Is that right?";
}

