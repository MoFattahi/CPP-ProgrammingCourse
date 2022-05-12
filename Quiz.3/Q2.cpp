#include <iostream>


using namespace std;
#define N 3

void disp(int a[][N])
{
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
    {
        cout << "\t" << a[i][j];
        if(j == N-1)
            cout << endl;
    }
}

void multiply(int a[][N], int b[][N])
{
    int sum;
    int out [N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
        {
            sum = 0;
            for(int k=0; k<N;k++)
            {
                sum += a[i][k]*b[k][j];
            }

            out[i][j] = sum;
        }
    }
        disp(out);
}


int main()
{
  int a[][N] = {{1,2,3},
                {12,5,7},
                {7,6,4}};

  int b[][N] = {{3,2,1},
                {4,7,9},
                {8,6,5}};

  multiply(a,b);
}
