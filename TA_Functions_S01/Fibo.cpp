// Write a function that finds the #n integer of the "Fibonacci sequence". Then build a minimal program to test it. 

#include <iostream>
using namespace std;

unsigned fib(unsigned n);

int main()
{
    // Printing the first 20 Fibonacci sequence values
    for (unsigned i = 0; i <= 20; i++){
        cout << "fib(" << i << ") = " << fib(i) << endl;
    }
}

unsigned fib(unsigned n)
{
    if (n < 2)
        return n;

    unsigned prev1 = 0;
    unsigned prev2 = 1;

    for (unsigned i = 0; i <= n-2; i++)
    {
        unsigned temp = prev1 + prev2;

        // values rotation
        prev1 = prev2;
        prev2 = temp;
    }

    return prev2;
}