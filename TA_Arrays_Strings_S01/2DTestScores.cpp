/* 

Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program should have the following functions:
• getTotal. This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
• getAverage. This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
• getRowTotal. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the total of the values in the specified row.
• getColumnTotal. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a column in the array. The function should return the total of the values in the specified column.
• getHighestInRow. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the highest value in the specified row of the array.
• getLowestInRow. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the lowest value in the specified row of the array.
Demonstrate each of the functions in this program.
                                    *** Assumption: Rows=4 | Columns=5 ***
*/

#include <iostream>
#include <iomanip>
using namespace std;


//Determine the total of all elements in the array
double getTotal(const double scoresArray[][5])
{
    int numRows = 4;
    double total = 0;

    for (int i=0; i<numRows; i++)
    {
        for (int j=0; j<5; j++)
        {
            total += scoresArray[i][j];
        }
    }

    return total;
}
//--------------------------------------------------------------

//Determine the average of all elements in the array
double getAverage(const double scoresArray[][5])
{
    int numRows = 4; //number of rows in the array
    double sum = getTotal(scoresArray); //get sum of all elements
    double numElements = numRows * 5; //number of elements in the array

    return (sum / numElements); 
}

//--------------------------------------------------------------

// Determine the total of the values in the specified row.
double getRowTotal(const double scoresArray[][5] , int row)
{
    int total = 0;
    for (int j=0; j<5; j++)
    {
        total += scoresArray[row-1][j];
    }

    return total;
}

//--------------------------------------------------------------

// Determine the total of the values in the specified column.
double getColumnTotal(const double scoresArray[][5] , int column)
{
    int numRows = 4; //number of rows in the array
    int total = 0;
    for (int i=0; i<4; i++)
    {
        total += scoresArray[i][column-1];
    }

    return total;
}

//--------------------------------------------------

// Determine the highest value in the specified row of the array.
double getHighestInRow(const double scoresArray[][5] , int row)
{
    double maxVal = scoresArray[row-1][0];

    for (int j=1; j<5; j++)
    {
        if (scoresArray[row - 1][j] > maxVal)
        {
            maxVal = scoresArray[row - 1][j];
        }
    }

    return maxVal;
}

//--------------------------------------------------

// Determine the lowest value in the specified row of the array.
double getLowestInRow(const double scoresArray[][5] , int row)
{
    double minVal = scoresArray[row - 1][0];

    for (int j=1; j<5; j++)
    {
        if (scoresArray[row - 1][j] < minVal)
        {
            minVal = scoresArray[row - 1][j];
        }
    }

    return minVal;
}

//--------------------------------------------------


int main()
{
    double scoresArray[4][5];

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << "Enter the element in row " << i+1 << " and column " << j+1 << ": ";
            cin >> scoresArray[i][j];
        }
    }

    cout << "Total of the elements in the array: " << getTotal(scoresArray) << endl;
    cout << "Average of the elements in the array: " << getAverage(scoresArray) << endl;

    // EX: row=2
    cout << "Total of the elements in the second row of the array: " << getRowTotal(scoresArray , 2) << endl;

    // EX: column=3
    cout << "Total of the elements in the third column of the array: " << getColumnTotal(scoresArray , 3) << endl;


}




