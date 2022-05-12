#include<iostream>

using namespace std;
const int N=4;

void place(int A[][N],int B[][N])
{
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        {
            A[i][j] = B[i][j];
        }
}

void transpose(int A[][N])
{
    int B[N][N];

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            {
                B[i][j] = A[j][i];
            }
    place(A,B);
}

void print(int A[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           cout <<"\t"<< A[i][j];
        cout <<"\n";
    }
}

int main()
{
    int Matrix[][N] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout << "Primary matrix is:\n";
    print(Matrix);

    transpose(Matrix);

    cout <<"Transpose matrix is:\n";
    print(Matrix);
}
