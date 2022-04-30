/*
                                        ** Coin Toss **
Write a function named coinToss that simulates the tossing of a coin. When you call the function, it should generate a random number in the range of 1 through 2. If the random number is 1, the function should display “heads.” If the random number is 2, the function should display “tails.” Demonstrate the function in a program that asks the user how many times the coin should be tossed and then simulates the tossing of the coin that number of times.
*/

#include <iostream>
using namespace std;

string coinToss();
int generateRand();


int main()
{
    /* You should NOT use srand() in the loop. you should use it one in the main function to generate different random numbers in each iteration.*/
    srand(time(NULL)); 

    int numIteration;
    cout << "how many times should the coin be tossed? ";
    cin >> numIteration;
    
    for (int k=1; k<=numIteration; k++)
    {
        cout << "Iteration " << k <<": " << coinToss() << endl;
    };
    
}


// Generate the random number
int generateRand()
{

    int range = (2 - 1) + 1; // The random number should be in the range (1,2) (included).
    int rand_number = 1 + rand() % range;

    return rand_number;
}


//Simulation
string coinToss()
{
    int random = generateRand();
    
    if (random == 1)
    {
        return "Heads";
    }
    else
    {
        return "Tails";
    };
}


