#include <iostream>
#include <string.h>

#include <cstring>
/* 
It includes various functions for handling, testing, and manipulating C-strings.
*/

#include <cctype> 
/* It provides several functions that allow you to test the value of a character. These functions test a single char argument and return either true or false. 
*/

using namespace std;

// // Range-based for loop

int main()
{
    // to output each element of an array:
    int myArray[] = {34,5,6,7,8,9};


    for(int rangeVar : myArray)
    {
        cout << rangeVar << " ";
    }
    cout << endl;


}

//-----------------------------------------------------------------


// get array elements from the user and output the entered elements
// int main()
// {
//     const int size = 5;
//     int numbers[size];

//     // Get values for the array. 
//     for (int &val : numbers)
//     {
//         cout << "Enter an integer value: ";
//         cin >> val; 
//     }

//     // Display the values in the array.
//     cout << "\n\nHere are the values you entered:\n"; 
//     for (int val : numbers)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

// }


/* Character testing functions:("cctype" header file must be included)

             isalpha()
             isalnum()
             isdigit()
             islower()
             isprint()
             ispunct()
             isupper()
             isspace()
             toupper()
             tolower()

*/


/* C-string handling functions:("cstring" header file must be included)
             
             strlen() //Size of the string(null terminator excluded)
             sizeof() // It indicates size of the array
             strcat()
             strcpy()


             strncat() 
             ** it takes a third argument specifying the maximum number of characters from the second string to append to the first. **


             strncpy()
             ** It takes specifying the maximum number of characters from the second string to copy to the first. **

             strstr() //The strstr function searches for a string inside of a string.
*/