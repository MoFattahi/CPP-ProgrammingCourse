// Generating a random number between two integers(i.e., defined range)


#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the lowest value: ";
        double lowest;
        cin >> lowest;

        cout << "Enter the highest value: ";
        double highest;
        cin >> highest;

        int range = (highest - lowest) + 1;

        srand(time(NULL));

        double rand_number = lowest + rand() % range;

        cout << "Random(" << lowest << " , " << highest << ") = " << rand_number << endl;
    }
}
