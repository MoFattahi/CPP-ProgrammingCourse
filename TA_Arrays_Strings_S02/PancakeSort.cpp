#include <iostream>

using namespace std;

void flip(int a[], int i);
int findMax(int a[], int n);
void PancakesSorting(int a[],int n);
void print(int a[], int n);

int main()
{
    int a[] = {23,5,68,43,14,1,7,12};
    int n = sizeof(a)/sizeof(a[0]);

    PancakesSorting(a,n);

    cout << "Sorted array:\n";
    print(a,n);

}

void flip(int a[], int i){
    int temp, start=0;
    while(start<i){
        temp = a[start];
        a[start] = a[i];
        a[i] = temp;
        i--;
        start++;
    }
}

int findMax(int a[], int n){
    int max_ind = 0;
    for(int i=0;i<n;i++){
        if(a[max_ind] < a[i])
            max_ind = i;
    }
    return max_ind;
}

void PancakesSorting(int a[],int n){

    int mi = 0;
    for(int pan_size=n; pan_size>1; pan_size--){

        mi = findMax(a,pan_size);

        if(mi != pan_size-1){

            flip(a,mi);

            flip(a,pan_size-1);
        }
    }
}

void print(int a[], int n){

    for(int i=0;i<n;i++)
    cout << a[i] << " ";
}
