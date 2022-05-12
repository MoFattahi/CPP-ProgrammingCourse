#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;
#define N 3

//***************************************************************
string matrixValidator(int myMatrix[N][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if (myMatrix[i][j] != -(myMatrix[j][i]))
            {
                return "The Matrix is NOT skew-symmetric.";
            }
        }
    }
    return "The Matrix is skew-symmetric.";
}

//***************************************************************

int main()
{
    cout << "Enter the elements of a 3x3 matrix: " << endl;
    int myMatrix[N][N];
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> myMatrix[i][j];
        }
    }

    cout << "\n\n" << matrixValidator(myMatrix) << endl;
}

//***************************************************************


