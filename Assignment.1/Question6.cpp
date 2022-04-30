#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Define the range
    int lowest = 0;
    int highest = 20;
    int range = (highest - lowest) + 1;

    // Generate a random number
    srand(time(NULL));
    double rand_number = lowest + rand() % range;

    while (true)
    {
        // Get the user guess
        int user_guess;
        cout << "Enter your guess (0 - 20): ";
        cin >> user_guess;
        // Comparison
        if (user_guess < rand_number)
        {
            cout << "Too low, try again." << endl;
            continue;
        }

        else if (user_guess > rand_number)
        {
            cout << "Too high, try again." << endl;
            continue;
        }

        else if (user_guess == rand_number)
        {
            cout << "Congratulations!\nYou made the correct guess." << endl;
            break;
        }
    }
}
