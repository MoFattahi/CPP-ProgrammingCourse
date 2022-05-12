/* 
The professor gives "four" exams during the semester in her chemistry class. At the end of the semester she drops each student’s lowest test score before averaging the scores. She has asked you to write a program that will read a student’s four test scores as input, and calculate the average with the lowest score dropped.
*/

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;


//Prototypes
double findLowestScore(double scoreArr[][4] , int);
double calAverageScore(double scoreArr[][4] , int);

//-------------------------------------------------------
int main()
{
    
    cout << "Enter the number of students: ";
    int numStudent;
    cin >> numStudent;


    //Declare the array of scores
    double scoreArr[numStudent][4];

    cout << "Enter test scores: " << endl;
    for (int i=0; i< numStudent; i++)
    {
        for(int j=0; j<4; j++)
        {
           cout << "Student " << i+1 << ", Test " << j+1 << ": ";
           cin >> scoreArr[i][j];
        }
    }

    //Output the array of scores
    cout << "Students test scores: " << endl;
    for (int i=0; i< numStudent; i++)
    {
        cout << setw(7);
        for(int j=0; j<4; j++)
        {
            cout << scoreArr[i][j] << "  ";
        }
        cout << endl;
    }

    for (int m=0; m<numStudent; m++)
    {
        cout << "Student " << m+1 << ": " << calAverageScore(scoreArr , m) << endl;
    }

}

//-------------------------------------------------------

double findLowestScore(double scoreArr[][4] , int Student)
{
    double lowestScore = scoreArr[Student][0];

    for(int j=0; j<4; j++)
    {
        if (scoreArr[Student][j] < lowestScore)
        {
            lowestScore = scoreArr[Student][j];
        }
    }
    return lowestScore;
}

//-------------------------------------------------------

double calAverageScore(double scoreArr[][4] , int Student)
{
    double lowestScore = findLowestScore(scoreArr , Student);
    double total = 0;

    for (int i=0; i<4; i++)
    {
        total += scoreArr[Student][i];
    }

    double average = (total - lowestScore) / 3;
    return average;
}

//-------------------------------------------------------
