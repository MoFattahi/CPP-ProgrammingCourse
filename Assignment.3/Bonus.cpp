#include<iostream>

using namespace std;

void selectionSort(int arr[], int n, int& exchange)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted sub-array
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        if(min_idx != i){
            swap(arr[min_idx], arr[i]);
            exchange++;}
    }
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n, int& exchange)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                exchange++;}
}

void initializer(int a[],int b[],int n)
{
    for(int i=0;i<n;i++){
        cout << "Enter the element " << i << ": ";
        cin >> a[i];
        b[i] = a[i];}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int a[20], b[20];
    int exchange_a=0, exchange_b=0;
    int n = sizeof(a)/sizeof(a[0]);

    initializer(a,b,n);

    cout << "\nBefore sorting:\n";
    cout << "a = ";
    printArray(a,n);

    cout << "b = ";
    printArray(b,n);

    bubbleSort(a,n,exchange_a);
    selectionSort(b,n,exchange_b);

    cout << "\nAfter sorting:\n";
    cout << "a = ";
    printArray(a,n);

    cout << "b = ";
    printArray(b,n);

    cout << "\nNumber of exchanges for selection sorting: " << exchange_a << endl;
    cout << "Number of exchanges bubble sorting: " << exchange_b << endl;
}
