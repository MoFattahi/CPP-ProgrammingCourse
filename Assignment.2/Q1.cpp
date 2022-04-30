#include<iostream>
using namespace std;

// Method 1
void convertNumber(int Num, int k)
{
    if(k<=0)
    {
        cout << "Invalid input.\n";
        return;
    }

    int r;
    r  = Num%k;
    Num /= k;

    if(Num>=k)
        convertNumber(Num,k);
    else
        cout << Num;
    
    cout << r;
}

//------------------------------------------------------
// Method 2
// void convertNumber(int N, int b)
// {
//      if (N == 0)
//         return;
//      int x = N % b;
//      N /= b;
//      if (x < 0)
//         N += 1; 
//      convertNumber(N, b);
//      cout << (x < 0 ? x + (b * -1) : x);
//      return;
// }
//------------------------------------------------------


int main()
{
    int N,b;
    cout<<"Enter the integer to convert(N): ";
    cin>>N;
    cout<<"Enter the base <= N: ";
    cin>>b;
    if (N != 0)
    {
        convertNumber(N, b);
        cout<<endl;
    }
    else
        cout<<"0"<<endl;
}

