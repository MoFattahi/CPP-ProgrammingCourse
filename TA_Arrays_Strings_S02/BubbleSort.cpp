#include<iostream>

using namespace std;

int main(){

    int a[] = {23, 10, 20, 11, 12, 6, 7, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int temp;

    for(int m=n;m>1;m--)
        for(int i=0;i<m-1;i++)
                if(a[i]>a[i+1]){

                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
    }

    for(int i=0;i<n;i++)
    cout << a[i] << " ";
}



